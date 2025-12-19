#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream myFile;

    myFile.open("data1.txt", ios::out);
    myFile << "Hello World";

    myFile.close();
}