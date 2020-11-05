/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain.c
 * Author: fede
 *
 * Created on 2 / d’octubre / 2020, 17:07               
 */

#include <stdio.h>
#include <stdlib.h>

/*                                                          
 * 
 */
int main(int argc, char** argv) {
    int a = 2;
    int b = 2;
    int c = 2;
    //boolean b;
    
    if (a<b<c) printf("Primera comparación");
    
    a = 0;
    b = 0;
    c = 1;
     
    if (a<b<c) printf("Segunda comparación");
    
    
    return (EXIT_SUCCESS);
}