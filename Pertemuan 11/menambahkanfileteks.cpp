#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream myfile;
    string teks;

    cout << "Masukkan teks yang ingin ditambahkan: ";
    getline(cin, teks);

    myfile.open("data5.txt", ios::app);
    myfile << teks;

    cout << "Teks berhasil ditambahkan!" << endl;

    myfile.close();
}