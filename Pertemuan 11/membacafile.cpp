#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream myfile;
    string teks;

    myfile.open("data1.txt");
    getline(myfile, teks);

    cout << "=== Isi file 'data1.txt === " << endl;
    cout << teks << endl;

    myfile.close();

    // Isi file lebih dari satu baris
    string semuaBaris;
    string satuBaris;

    myfile.open("data2.txt");

    while(!myfile.eof()){
        getline(myfile, satuBaris);
        semuaBaris += satuBaris + "\n";
    }

    cout << "\n=== Isi file 'data2.txt' lebih dari satu baris ===" << endl;

    myfile.close();

}