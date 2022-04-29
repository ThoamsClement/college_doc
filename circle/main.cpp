/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: youjou
 *
 * Created on 26 April 2022, 03:53
 */

#include <cstdlib>
#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

/*
 * 
 */
int main(){
    int rad;
    float pi = 3.14159;
    cout << "請輸入半徑："<<endl;
    cin >> rad;
    cout << "表面積："<< 4*pi*(rad*rad)<<endl;
    cout << "體積："<<((rad*rad*rad)*pi*4/3)<<endl;
}

