#include <iostream>
using namespace std;

int main(){
    // Sequential Search
    string nama[] = {"Rafly", "Abdul", "Bachtiar", "Khaila", "Riki", "Maul"};
    int size = sizeof(nama) / sizeof(nama[0]);
    string target = "Maul";
    bool nemu = false;

    for(int ix = 0; ix < size; ix++){
        if(nama[ix] == target){
            cout << "Nama " << nama[ix] << " ditemukan pada index ke - " << ix;
            nemu = true;
            break;
        }
    }

    if(!nemu){
        cout << "Data tidak ditemukan!";
    }

    return 0;
}