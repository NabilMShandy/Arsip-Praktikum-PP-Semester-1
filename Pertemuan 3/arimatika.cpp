#include <iostream>

using namespace std;
int main()
{
    int a = 2;
    int b = 2;
    int c = a + b;

    cout << "nilai a : " << a << endl;
    cout << "nilai b : " << b << endl;
    cout << "nilai c : " << c << endl;

    a = a + b;
    cout << "nilai a setelah (a = a + b): " << a << endl;

    return 0;
}