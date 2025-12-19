#include <iostream>
using namespace std;

int main(){
    // membuat persegi panjang
    int baris1 = 4;
    int kolom1 = 5;

    for(int i = 1; i <= baris1; i++){
        for(int j = 1; j <= kolom1; j++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}