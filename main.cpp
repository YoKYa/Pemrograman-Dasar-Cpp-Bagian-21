#include <iostream>

using namespace std;

int main(){
    system("cls");
    
    int n;// Deklarasi Variabel

    cout << " Masukkan Panjang Pola : ";
    cin >> n;
    cout << endl;

    cout << " ===== Segitiga Siku-siku =====" << endl << endl;
    // Segitiga
    cout << "1. Pattern 1" << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i ; j++){
            cout << " * ";
        }
        cout << endl;
    }
    cout << "2. Pattern 2" << endl;
    for (int i = 0; i < n; i++){
        for(int j = i; j < n ; j++ ){
            cout << " * ";
        }
        cout << endl;
    }
    cout << "3. Pattern 3" << endl;
    for (int i = 0; i < n; i++){
        for(int j = i; j < n ; j++ ){
            cout << "   ";
        }
        for (int j = 0; j <= i ; j++){
            cout << " * ";
        }
        cout << endl;
    }
    cout << "4. Pattern 4" << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i ; j++){
            cout << "   ";
        }
        for(int j = i; j < n ; j++ ){
            cout << " * ";
        }
        
        cout << endl;
    }
    cout << endl << endl;
    system("pause");

    system("cls");
    cout << " ===== Segitiga Sama Kaki =====" << endl << endl;
    cout << "1. Pattern 1 " << endl;
    for(int i = 0; i < n; i++){
        for (int k = i; k < n; k++){
            cout << "   ";
        }
        for(int j = 0; j < i*2-1; j++){
            cout << " * ";
        }
        cout << endl;
    }
    cout << "2. Pattern 2 " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout << "   ";
        }
        for(int k = 1; k>=i*2-5; k--){
            cout << " * ";
        }
        cout << endl;
    }
    cin.get();
    return 0;
}
