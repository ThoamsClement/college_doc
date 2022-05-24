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
#define MAX 10
/*
 * 
 */
int main(int argc, char** argv) {
    int i,sum=0,p=1;
    int usr_input;
    printf("請輸入你想成的階數：");
    scanf("%d",&usr_input);
    for(i=1;i<=usr_input;i++)
    {
        p = p*i;
        sum = sum + p;
    }
    printf("你輸入的：%d = %d",usr_input,sum);
    
        return (EXIT_SUCCESS);
}

