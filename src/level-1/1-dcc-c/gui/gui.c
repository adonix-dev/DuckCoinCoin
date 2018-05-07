
#include "gui.h"

bool isChiffre(char c){
    if((c == '0') || (c == '1') || (c == '2') || (c == '3') || (c == '4') || (c == '5') || (c == '6') || (c == '7') || (c == '8') || (c == '9')){
        return true;
    }
    return false;
}

void moveCursor(int curl, int curc, int wantl, int wantc){
	printf ("\033[%d;%dH", curl, curc);
	printf(" ");
	printf ("\033[%d;%dH", wantl, wantc);
	printf(">");
	fflush(stdout);
}

void afficherModes(){
    printf("\033[H\033[J");
    printf("     ______________________________________ \n");
    printf("    |_____________DUCK_COINCOIN_____________|\n");
    printf("    |                                       |\n"); 
    printf("    |      -------- M o d e s --------      |\n");
    printf("    |          Creer une BlockChain         |\n");        
    printf("    |         Charger une BlockChain        |\n"); 
    printf("    |      ---------------------------      |\n"); 
    printf("    |                                       |\n"); 
    printf("    |            Valider  Quitter           |\n");                            
    printf("    |_______________________________________|\n");
}

void afficherCreation(){
    printf("\033[H\033[J");
    printf("     _______________________________________\n");
    printf("    |_____________DUCK_COINCOIN_____________|\n");
    printf("    |                                       |\n"); 
    printf("    |      ------C r é a t i o n------      |\n");
    printf("    |         Nombre de Block [   ]         |\n");        
    printf("    |         Difficulté      [   ]         |\n"); 
    printf("    |      ---------------------------      |\n");
    printf("    |                                       |\n"); 
    printf("    |       Retour   Valider   Quitter      |\n");
    printf("    |_______________________________________|\n");
}


void afficherChargement(){
    printf("\033[H\033[J");
    printf("     _______________________________________\n");
    printf("    |_____________DUCK_COINCOIN_____________|\n");
    printf("    |                                       |\n"); 
    printf("    |    ------C h a r g e m e n t------    |\n");
    printf("    |     La partie de chargement est en    |\n");        
    printf("    |     cours de développement...         |\n"); 
    printf("    |     Merci de votre compréhention.     |\n"); 
    printf("    |      ---------------------------      |\n");
    printf("    |           Retour   Quitter            |\n");  
    printf("    |_______________________________________|\n");
}
void afficherQuitter(){
    printf("\033[H\033[J");
    printf("     ______________________________________ \n");
    printf("    |_____________DUCK_COINCOIN_____________|\n");
    printf("    |                                       |\n"); 
    printf("    |    -------- Q u i t t e r --------    |\n");
    printf("    |          Voulez-vous vraiment         |\n");        
    printf("    |       quitter cette application?      |\n"); 
    printf("    |      ---------------------------      |\n"); 
    printf("    |                                       |\n"); 
    printf("    |           Oui           Non           |\n");                            
    printf("    |_______________________________________|\n");
}

int selectChargement(int *position, char* fleche){
    afficherChargement();
    moveCursor(9,16,9,16);
    read(0, fleche, 1);
    while(1){
        if (*fleche == 'q'){
            *position = 0;
            moveCursor(9,25,9,16);
        }
        else if(*fleche == 'd'){
            *position = 1;
            moveCursor(9,16,9,25);
        }
        /*else if((*fleche == '\n') && (*position == 0)){
            return 1;
        }*/
        else if((*fleche == '\n') && (*position == 1)){
            return 2;
        }
        read(0, fleche, 1);
    }
}

int quitter(int* position, char* fleche){
    afficherQuitter();
    moveCursor(9,16,9,16);
    read(0, fleche, 1);
    while(1){
        if (*fleche == 'q'){
            *position = 0;
            moveCursor(9,30,9,16);
        }
        else if(*fleche == 'd'){
            *position = 1;
            moveCursor(9,16,9,30);
        }
        else if((*fleche == '\n') && (*position == 0)){
            return 1;
        }
        /*else if((*fleche == '\n') && (*position == 1)){
            return 2;
        }*/
        read(0, fleche, 1);
    }
}

int selectMode(int* mode, int* navig, char* fleche){
    afficherModes();
    moveCursor(6,14,5,15);
    moveCursor(9,26,9,17);
    *mode = 0;
    *navig = 0;
    read(0, fleche, 1);
    
    while (1){

        if ((*fleche == 'z') || (*fleche == 's')){

           if(*fleche == 'z'){
                *mode = 0;
                moveCursor(6, 14, 5, 15);
           }
           if(*fleche == 's'){
                *mode = 1;
                moveCursor(5, 15, 6, 14);
           }
        }
        
        else if ((*fleche == 'q') || (*fleche == 'd')){
            
            if (*fleche == 'q'){
                *navig = 0;
                moveCursor(9, 26, 9, 17);
            }
            
            if (*fleche == 'd'){
                *navig = 1;
                 moveCursor(9, 17, 9, 26);
            }
        }
        else if((*fleche == '\n') && (*navig == 0)){
            if (*mode == 0){
                return 1;
            }
            else if (*mode == 1){
                return 2;
            }
        }
        else if((*fleche == '\n') && (*navig == 1)){
            return 3;
        }
        read(0, fleche, 1);
    }
}

int selectInfos(int* info, int* navig, char* fleche, char* tab_nb_block, char* tab_difficulty){
    int taille_nb_block = 0, taille_difficulty = 0;
    afficherCreation();
    moveCursor(6,14,5,14);
    moveCursor(9,21,9,12);
    *info = 0;
    *navig = 0;
    read(0, fleche, 1);
    while (1){
        /*if ((*fleche == '\n') && (*navig == 0)){
            return 1;
        }*/
        if ((*fleche == '\n') && (*navig == 1)){
            return 2;
        }
        else if ((*fleche == '\n') && (*navig == 2)){
            return 3;
        }
        else if ((*fleche == 'z') || (*fleche == 's')){

           if(*fleche == 'z'){
                *info = 0;
                moveCursor(6, 14, 5, 14);
           }
           else if(*fleche == 's'){
                *info = 1;
                moveCursor(5, 14, 6, 14);
           }
        }
        else if ((*fleche == 'q') || (*fleche == 'd')){
            if (*fleche == 'q'){
                if ((*navig == 0)||(*navig == 1)){
                    *navig = 0;
                    moveCursor(9, 21, 9, 12);
                }
                else if (*navig == 2){
                    *navig = 1;
                    moveCursor(9,31, 9, 21);
                }
            }
            else if (*fleche == 'd'){
                if ((*navig == 1) || (*navig == 2)){
                    *navig = 2;
                    moveCursor(9, 21, 9, 31);
                }
                else if (*navig == 0){
                    *navig = 1;
                    moveCursor(9, 12, 9, 21);
                }
            }
        }
        else if (isChiffre(*fleche)){
            if ((*info == 0) && (taille_nb_block < 3)){
                tab_nb_block[taille_nb_block] = *fleche;
                taille_nb_block++;
                printf ("\033[%d;%dH", 5, 31+taille_nb_block);
                printf("%c",*fleche);
                fflush(stdout);
            }
            else if ((*info == 1) && (taille_difficulty < 3)){
                tab_difficulty[taille_difficulty] = *fleche;
                taille_difficulty++;
                printf ("\033[%d;%dH", 6, 31+taille_difficulty);
                printf("%c",*fleche);
                fflush(stdout);
            }
        }
        else if (*fleche == 'e'){
            if ((*info == 0) && (taille_nb_block >= 0)){
                tab_nb_block[taille_nb_block] = '\0';
                printf ("\033[%d;%dH", 5, 31+taille_nb_block);
                printf(" ");
                fflush(stdout);
                taille_nb_block = taille_nb_block -1;
            }
            if ((*info == 1) && (taille_difficulty >= 0)){
                tab_nb_block[taille_difficulty] = '\0';
                printf ("\033[%d;%dH", 6, 31+taille_difficulty);
                printf(" ");
                fflush(stdout);
                taille_difficulty = taille_difficulty -1;
            }
        }
        read(0, fleche, 1);
    }
}
        
/* curl = 8, wantl = 9, curc = 12, wantc = 12 */

int gui(int* number_of_block, int* difficulty)
{
    /*___innitialisation des variables___*/
    int event;
    int mode = 0, navig = 0, info =0, pQuitter = 0, pChargement = 0;
    char tab_difficulty[3], tab_nb_block[3], fleche;

    /*___Saisie du mode___*/
    Term_non_canonique();
    printf("\033[?25l");
    event = selectMode(&mode,&navig,&fleche);
    if (event == 1)
    {
        event = selectInfos(&info, &navig, &fleche, tab_nb_block, tab_difficulty);
        if (event == 1)
        {
            Term_canonique();
            printf("\nRetour non géré\n");
            return 2;
        }
        
        else if (event == 2)
        {
            *number_of_block = atoi(tab_nb_block);
            *difficulty = atoi(tab_difficulty);
            printf ("\033[%d;%dH", 11, 0);
            printf("nb bloc = %d\n", *number_of_block);
            printf("difficulty = %d\n", *difficulty);
            fflush(stdout); 
            Term_canonique();
            return 0;
        }
        
        else if (event == 3)
        {
            event = quitter(&pQuitter, &fleche);
            if (event == 1)
            {
                printf("\033[H\033[J");
                Term_canonique();
                return 1;
            }
            else if (event == 2)
            {
                Term_canonique();
                printf("\nRetour non géré\n");
                return 2;
            }
        }
    }
    
    else if (event == 2)
    {
        event = selectChargement(&pChargement, &fleche);
        if (event == 1)
        {
            Term_canonique();
            printf("\nRetour non géré\n");
            return 2;
        }
        else if (event == 2)
        {
            event = quitter(&pQuitter, &fleche);
            if (event == 1)
            {
                printf("\033[H\033[J");
                Term_canonique();
                return 1;
            }
            else if (event == 2)
            {
                Term_canonique();
                printf("\nRetour non géré\n");
                return 2;
            }
        }
    }
    else if (event == 3){
        event = quitter(&pQuitter, &fleche);
        if (event == 1)
        {
            printf("\033[H\033[J");
            Term_canonique();
            return 1;
        }
        else if (event == 2)
        {
            Term_canonique();
            printf("\nRetour non géré\n");
            return 2;
        }    
    }

    Term_canonique();
    return 0;
}

/* z = 122 ; s = 115 ; q = 113 ; d = 100 */
