#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main(){
    int a;
    int result;
    cout <<"請輸入數字：";
    cin >> a;
    result = pow(a%10,3)+pow(a/10%10,3)+pow(a/100%10,3);
    if (result == a){
        cout << "Yep, It's Armstrong number."<<endl;
    }
    else{
        cout << "Nope!"<<endl;
    }
}