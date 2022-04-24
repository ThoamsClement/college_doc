/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: youjou
 *
 * Created on 23 April 2022, 15:49
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(){
    double a,b;
    cin >> a>>b;
    if (a>b){
        cout<<b<<" "<<a;
    }
    else{
        cout<<a<<" "<<b;
    }
}

/*
 * 用double是因為，我不想用float。我們說簡單一點其實這兩個很像，只是一個比較肥一個比較瘦而已。
 * cin = scanf = 輸入 。 就跟我們總是需要蛋糕一樣，輸入熱量，然後增進身心靈健康。
 * a , b 如果你爽的話也可以用 adkoadiosdf ，自己定，不要見外。
 * if 的判別式，這邊真的寫得很偷懶，就是我只寫了一個，判斷句而已，"if (a>b){ " 如果 a > b就進來，其他的就進來這裡 else{
 * 一個亂丟垃圾的概念。

 */