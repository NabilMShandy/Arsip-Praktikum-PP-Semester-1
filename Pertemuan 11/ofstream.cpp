#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream myfile;

    myfile.open("data.txt");
    myfile << "Aku Cinta C++";

    myfile.close();
}