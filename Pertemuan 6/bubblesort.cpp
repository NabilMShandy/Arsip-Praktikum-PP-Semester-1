#include <iostream>
using namespace std;

int main(){
     // Bubble Sorting 
    int arr[] = {5, 3, 4, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array sebelum diurutkan: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout << "Array setelah diurutkan: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }


    // int N;
    // cout << "masukkan elemen: "; 
    // cin >> N;
    // cout  << "masukkan array sebanyak " << N << " elemen: ";

    // int arr[N];
    // for(int i = 0; i < N; i++){
    //     cin >> arr[i]; 
    // }

    // for(int i = 0; i < N-1; i++){
    //     for(int j = 0; j< N-i-1; j++){
    //         if(arr[j] > arr[j+1]){
    //             int temp = arr[j];
    //             arr[j] = arr[j+1];
    //             arr[j+1] = temp;
    //         }
    //     }
    // }
    // cout << "array setelah diurutkan: ";
    // for(int i = 0; i < N; i++){
    //     cout << arr[i] << " "; 
    // }
    // cout << endl;
    return 0;
} 