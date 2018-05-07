/* Term canon VT100 ===================================	*/
/* deux fonctions pour passer du mode de communication	*/
/* canonique au mode non-canonique avec le terminal :	*/
/*  mode canonique : communication du terminal en mode	*/
/*    interactif, c-�-d : �cho, les touches frapp�es	*/
/*    au clavier sont affich�es sur le terminal ; et	*/
/*    entr�e par ligne : la lecture se fait lorsqu�une	*/
/*    ligne compl�te est saisie (termin�e par le touche	*/
/*    Entr�e).						*/
/*  mode non-canonique : l��cho est supprim� et la	*/
/*    lecture se fait caract�re par caract�re sans	*/
/*    attendre la fin de la ligne.			*/
/*							*/
/*  Created on: 2017					*/
/*      Author: C. Collet				*/
/*  Copyright 2017 IRIT-Universit� Toulouse 3		*/
/*	Paul Sabatier, France. All rights reserved.	*/
/* ====================================================	*/

#define _POSIX_C_SOURCE 199309L	/* Pour respecter la norme POSIX 199309 */
#include <stdio.h>		/* Pour printf et perror */
#include <sys/termios.h>	/* le terminal non canonique */
#include <time.h>

/* ANSI/VT100 term color and formatting from			*/
/* https://misc.flogisoft.com/bash/tip_colors_and_formatting	*/

/* Term_non_canonique =================================
//  Permet de lire le clavier touche par touche, sans
// echo.
//===================================================*/

int Term_non_canonique ()
{
    struct termios	term;

    tcgetattr( fileno(stdin), &term );	/* lit les flags du terminal dans term */
    term.c_lflag &= ~ICANON;		/* mode non-canonique */
    term.c_lflag &= ~ECHO;		/* supprime l'echo */
    term.c_cc[VMIN]  = 1;		/* test clavier */
    term.c_cc[VTIME] = 1;		/* timeout 1/10e de seconde (0: pas de timeout) */
    if (tcsetattr( fileno(stdin), TCSANOW, &term)<0) /* ecrit les flags depuis term */
    {
	perror("Term_non_canonique: problème d'initialisation ");
	return 0;
    }
    return 1;
}

/* Term_canonique =====================================
//  Mode normal du clavier: lecture par ligne et echo.
//===================================================*/

int Term_canonique ()
{
    struct termios	term;
			/* retour en mode ligne */
    tcgetattr( fileno(stdin), &term );	/* lit les flags du terminal dans term */
    term.c_lflag |= ICANON;		/* mode canonique */
    term.c_lflag |= ECHO;		/* retablit l'echo */
    if (tcsetattr( fileno(stdin), TCSANOW, &term)<0) /* ecrit les flags depuis term */
    {
	perror("Term_canonique: problème d'initialisation ");
	return 0;
    }
    return 1;
}