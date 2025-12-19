#include <iostream>
#include <fstream>
using namespace std;

int main(){
    fstream myFile;

    myFile.open("data.txt");

    if(myFile.fail()){
        cout << "Gagal membuka file" << endl;
    }
    else{
        cout << "File berhasil dibuka" << endl;
    }

    myFile.close();
}