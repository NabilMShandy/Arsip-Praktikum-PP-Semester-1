#include <iostream>
using namespace std;

void tampilkaninfo(string nama, int nilaitugas, int nilaiuts, int nilaiuas){
    cout << "Nama mahasiswa: " << nama << endl;
    cout << "Nilai tugas: " << nilaitugas << endl;
    cout << "Nilai UTS: " << nilaiuts << endl;
    cout << "Nilai UAS: " << nilaiuas << endl;
    cout << "Nilai akhir: " << (nilaitugas + nilaiuts + nilaiuas) / 3 << endl;
}

int faktorial(int faktor, int faktorr){
    faktor = 1;
    int count = 0;
    for(int i = 1; i <= faktorr; i++){
        faktor *= i;
        count++;
    }
    cout << "hasil faktorial: " << count << "!" << " : " << faktor << endl;
    return faktor;
}

int main(){
    tampilkaninfo("Nabil", 97, 87, 90);
    faktorial(5, 5);

    return 0;
}