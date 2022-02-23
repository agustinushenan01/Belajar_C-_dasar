#include <iostream>
using namespace std;

float kali(int a, int b){

    return a*b;

}

float tambah(int a, int b){

    return a+b;

}

float kurang(int a, int b){

    return a-b;

}

float bagi(int a, int b){

    return a/b;

}

float pangkat(int a){

    return a*a;

}

int main(){

    float a, b;
    char pilihan;

    cout << "KALKULATOR MAKE FUNGSI" << endl;
    cout << "A. Perkalian" << endl;
    cout << "B. Pertambahan" << endl;
    cout << "C. Perkurangan" << endl;
    cout << "D. Pembagian" << endl;
    cout << "E. Perpangkatan" << endl;
    cin >> pilihan;

    if (pilihan == 'A' || pilihan == 'a')
    {
        cout << "input a: "; cin >> a;
        cout << "input b: "; cin >> b;
        cout << a << " X " << b << " = " << kali(a, b);
    }

    if (pilihan == 'B' || pilihan == 'b')
    {
        cout << "input a: "; cin >> a;
        cout << "input b: "; cin >> b;
        cout << a << " + " << b << " = " << tambah(a, b);
    }

    if (pilihan == 'C' || pilihan == 'c')
    {
        cout << "input a: "; cin >> a;
        cout << "input b: "; cin >> b;
        cout << a << " - " << b << " = " << kurang(a, b);
    }

    if (pilihan == 'D' || pilihan == 'd')
    {
        cout << "input a: "; cin >> a;
        cout << "input b: "; cin >> b;
        cout << a << " : " << b << " = " << bagi(a, b);
    }

    if (pilihan == 'E' || pilihan == 'e')
    {
        cout << "input a: "; cin >> a;
        cout << a << " X " << a << " = " << pangkat(a);
    }
    

    cin.get();
    return 0;
}