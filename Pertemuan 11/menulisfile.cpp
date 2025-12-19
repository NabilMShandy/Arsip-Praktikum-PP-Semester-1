#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream myfile;
    string teks;

    cout << "Masukkan teks yang ingin ditulis ke dalam file: ";
    getline(cin, teks);

    myfile.open("data4.txt");
    myfile << teks;

    cout << "Teks berhasil ditulis ke dalam file" << endl;

    myfile.close();
}