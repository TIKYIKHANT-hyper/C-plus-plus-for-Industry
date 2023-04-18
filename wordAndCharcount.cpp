//
// Created by Ti Kyi Khant on 4/17/2023.
//
#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main(){
    char ch = 'x';
    unsigned int word_count = 1;
    unsigned int character_count = 0;
    while(ch != '\r' && ch != '\n'){
        ch = getche();
        if(ch == '\r' || ch == '\n'){
            break;
        }
        else if(ch != ' '){
            character_count++;
        }
        else{
            word_count++;
        }
    }
    if(character_count == 0){
        word_count = 0;
    }
    cout<<word_count<<"words counted"<<endl;
    cout<<character_count<<"characters counted"<<endl;
    return 0;
}