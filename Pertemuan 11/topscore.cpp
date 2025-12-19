#include <iostream>
#include <fstream>
using namespace std;

int main();

void registration(){
    ofstream myfile, accList;
    string userReg;

    system("cls");
    cout << "--------- REGISTER ----------" << endl;
    cout << "Enter username: ";
    cin >> userReg;

    cout << endl;

    myfile.open(userReg + ".txt");
    myfile << 0;
    myfile.close();

    accList.open("ListAccount.txt", ios::app);
    accList << userReg << endl;

    system("cls");
    cout << "Registration Successfull" << endl;
    main();

}

void login(){
    ifstream myfile;
    string userLog;
    string userData;

    bool exist = false;

    system("cls");
    cout << "---------- LOGIN ---------- " << endl;
    cout << "Enter username: ";
    cin >> userLog;

    cout << endl;

    myfile.open("ListAccount.txt");
    while(myfile >> userData){
        if(userData == userLog){
            exist = true;
        }
    }

    myfile.close();

    if(exist == true){
        myfile.open(userLog + ".txt");
        system("cls");
        cout << "Login Successfull" << endl;

        int topScore;
        cout << "Input Top Score : ";
        cin >> topScore;

        ofstream scoreFile;
        ifstream scoreCheck;
        int currentScore;

        scoreCheck.open(userLog + ".txt");
        scoreCheck >> currentScore;

        if(topScore > currentScore){
            scoreFile.open(userLog + ".txt");
            scoreFile << topScore << endl;
            scoreFile.close();

            cout << "\nYour Top Score Is : " << topScore;
        }
        myfile.close();
    }
    else{
        system("cls");
        cout << "---------------------------------------" << endl;
        cout << "                 LOGIN ERROR           " << endl;
        cout << "Please check your username and password" << endl;
        main();
    }
}

int main(){
    int choice;
    cout << "1. Registration" << endl;
    cout << "2. Login" << endl;
    cout << "3. Input your choice : ";
    cin >> choice;

    switch(choice){
        case 1 :
        registration();
        break;
        case 2:
        login();
        break;
    }
}