#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream myfile;
    char karakter;
    string teks;

    myfile.open("data2.txt");
    while(!myfile.eof()){
        myfile.get(karakter);
        teks += karakter;
    }

    cout << teks;
    myfile.close();
}