#include <iostream>

using namespace std;
int main(){

    // KODE PRAKTIKUM
    // For loop
    cout << "For loop output: " << endl;
    for(int i = 0; i < 5; i++){
        cout << "Nilai i: " << i << " " << endl;
    }
    cout << endl;

    // While loop
    cout << "While loop output: " << endl;
    int a = 0;
    while(a < 5){
        cout << "Nilai a: " << a << endl;
        a++;
    }
    cout << endl;

    // Do while
    cout << "Do-While loop output: " << endl;
    int b = 0;
    do
    {
        cout << "Nilai b: " << b << endl;
        b++;
    } while (b < 5);
    cout << endl;

    // Continue
    cout << "Penggunaan continue di loop: " << endl;
    for(int i = 0; i < 10; i++){
        if(i == 5){
            continue;
        }
        cout << "Nilai i: " << i << " " << endl;
    }
    cout << endl;

    // Break
    cout << "Penggunaan break di loop: ";
    for(int j = 1; j < 10; j++){
        if(j == 5){
            break;
        }
        cout << "Nilai j: "<< j << endl;
    }
    cout << endl;

    cout << "Program Selesai\n";

    return 0;
}