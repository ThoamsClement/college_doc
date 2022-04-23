/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: youjou
 *
 * Created on 23 April 2022, 12:35
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(){
    float litre_usr_input;
    float gas_price = 23.7;
    cout << "Input the litre you added: ";
    cin >>litre_usr_input;
    cout << "Your Price: "<<fixed<<setprecision(1)<<gas_price*litre_usr_input;
    

}