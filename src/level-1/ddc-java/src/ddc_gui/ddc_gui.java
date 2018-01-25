package src.ddc_gui;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class ddc_gui {
    private JButton button;
    private JPanel panelMain;

    public ddc_gui() {
        button.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                JOptionPane.showMessageDialog(null, "Hello World");
            }
        });
   }

    public static void main(String[] args){
        JFrame frame = new JFrame("ddc_gui");
        frame.setContentPane(new ddc_gui().panelMain);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.pack();
        frame.setVisible(true);
        System.out.println("hello world");
    }
}
