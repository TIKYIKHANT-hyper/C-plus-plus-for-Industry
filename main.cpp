#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    ofstream fo;
    fo.open("d:\\test.txt",ios::out);
    if(fo.fail()){
        cout<<"Error cannot open the file"<<endl;
        return 1;
    }
    fo<<"I put the new forgis on the jeep"<<endl;
    fo<<"I trap until the, bloody bottoms is underneath"<<endl;
    ifstream fi("d:\\test.txt",ios::in);
    if(fi.fail()) {
        cout << "Error cannot open the file" << endl;
        return 1;
    }
    string newarr = "";
    string post = "";
    while(!fi.eof()) {
        fi >> newarr;
        post += newarr;
        post += "\n";
    }
    cout<<post<<endl;
    fi.close();
    fo.close();
}