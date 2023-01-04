/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: youjou
 *
 * Created on 26 April 2022, 03:13
 */

#include <cstdlib>
#include<iostream>
using namespace std;

/*
 * 
 */
int main(){
    int s;
    int d;
    cout << "請輸入SBP："<<endl;
    cin >> s;
    cout << "請輸入DBP："<<endl;
    cin >> d;
    cout << "你的平均舒張壓(MAP):"<<d+((s-d)/3)<<"mmHg"<<endl;
}

