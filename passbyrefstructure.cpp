//
// Created by Ti Kyi Khant on 4/18/2023.
//
#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
struct Measuredata{
    int feet;
    float inches;
};
void displayscaled(Measuredata);
void scale(Measuredata&,float );
int main(){
    Measuredata key1 = {20,8};
    scale(key1,2);
    displayscaled(key1);
    return 0;
}

void scale(Measuredata& inputdata,float scale){
    float inches = ((inputdata.feet * 12) + inputdata.inches) * scale;
    inputdata.feet = inches / 12;
    inputdata.inches = inches - (inputdata.feet * 12);
}

void displayscaled(Measuredata show){
    cout<<show.feet<<"\'-"<<show.inches<<"\""<<endl;
}