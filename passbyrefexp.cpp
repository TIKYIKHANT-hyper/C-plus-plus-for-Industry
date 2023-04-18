//
// Created by Ti Kyi Khant on 4/18/2023.
//
#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
void splitter(float,float&,float&);
int main(){
    float number, intpt, frapt;
    cout<<"Enter your number:"<<endl;
    cin>>number;
    splitter(number,intpt,frapt);
    cout<<"Original Number:"<<number<<endl;
    cout<<"Integer part:"<<intpt<<endl;
    cout<<"Fractional part:"<<frapt<<endl;
    return 0;
}

void splitter(float num, float& interpart, float& fractpart){
    long temp = static_cast<long>(num);
    interpart = static_cast<float>(temp);
    fractpart = num - interpart;
}