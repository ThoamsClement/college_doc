/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: youjou
 *
 * Created on 17 May 2022, 11:11
 */

#include <stdio.h>
#include <stdlib.h>
/*
 * 
 */
int main() {
    int i=0,sum=0,p=1;
    int usr_input,result;
    printf("請輸入你想成的階數：");
    scanf("%d",&usr_input);
    for(i=1;i<=usr_input;i++)
    {
        p = p*i;
    }
    printf("你輸入的：%d = %d",usr_input,p);
    
        return (EXIT_SUCCESS);
}

