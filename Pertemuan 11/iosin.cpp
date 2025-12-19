#include <iostream>
#include <fstream>
using namespace std;

int main(){
    fstream myfile;
    char karakter;
    string teks;

    myfile.open("data3.txt", ios::in);
    while(!myfile.eof()){
        myfile.get(karakter);
        teks += karakter;
    }
    
    cout << teks;
    myfile.close();
}