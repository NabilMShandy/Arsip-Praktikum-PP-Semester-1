#include <iostream>
using namespace std;

int main() {
    int angka1, angka2;
    char operasi;

    cout << "Masukkan angka pertama : ";
    cin >> angka1;
    cout << "Masukkan angka kedua : ";
    cin >> angka2;
    cout << "Masukkan jenis operasi (+, -, *, /) : ";
    cin >> operasi;

    if (operasi == '+') {
        cout << "Hasil = " << angka1 + angka2;
    } 
    else if (operasi == '-') {
        cout << "Hasil = " << angka1 - angka2;
    } 
    else if (operasi == '*') {
        cout << "Hasil = " << angka1 * angka2;
    } 
    else if (operasi == '/') {
        if (angka2 != 0) {
            cout << "Hasil = " << angka1 / angka2;
        } else {
            cout << "Pembagi tidak boleh bernilai 0";
        }
    } 
    else {
        cout << "Operasi tidak valid";
    }


    // Pakai switch case
    // char pilih;
    // double num1, num2;
    // cout << "Masukkan pilihan operasi [+, -, *, /]: ";
    // cin >> pilih;

    // cout << "Masukkan angka pertama: ";
    // cin >> num1;
    // cout << "Masukkan angka kedua: ";
    // cin >> num2;

    // switch (pilih)
    // {
    // case '+':
    //     cout << "Hasil dari penjumlahan angka pertama dan kedua: " << num1 + num2 << endl;
    //     break;
    // case '-':
    //     cout << "Hasil dari pengurangan angka pertama dan angka kedua: " << num1 - num2 << endl;
    //     break;
    // case '*':
    //     cout << "Hasil dari perkalian angka pertama dan kedua: " << num1 * num2 << endl;
    //     break;
    // case '/':
    //     cout << "Hasil dari pembagian bilangan pertama dan kedua: " << num1 / num2 << endl;
    //     break;
    // default:
    //     cout << "Input tidak valid!\n";
    //     break;
    // }

    return 0;
}