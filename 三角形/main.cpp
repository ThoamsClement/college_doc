/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: youjou
 *
 * Created on 23 April 2022, 14:18
 */

#include <cstdlib>
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(){
    int usr_xa;
    int usr_xb;
    int usr_yc;
    int usr_yd;
    int x_part;
    int y_part;
    cout << "請輸入兩個(x,y)座標";
    cin >> usr_xa >>usr_yc >> usr_xb >> usr_yd;
    x_part = pow((usr_xa-usr_xb),2);
    y_part = pow((usr_yc-usr_yd),2);
    cout << "斜率："<<fixed<<setprecision(2)<<(usr_yc-usr_yd)/(usr_xa-usr_xb)<<endl;
    cout << "點距離："<<fixed<<setprecision(2)<<sqrt(x_part+y_part);
}