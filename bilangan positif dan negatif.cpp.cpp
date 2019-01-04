#include <iostream>
using namespace std;
int main()
{
int input;
char pilihan;
cout<<"masukkan Bilangan positif dan Negatif"<<endl;
do {
    cout<<"masukkan bilangan : ";cin >> input;
    if (input < 0) {
        cout<<"bilangan ini adalah bilangan negatif" <<endl;
    }else if (input ==0) {
        cout <<"bilangan ini adalah bilangan netral" <<endl;
    }
    else {cout <<"bilangan ini adalah bilangan positif" <<endl;}

    cout <<"apakah anda ingin memasukkan nilai lagi? 'y' atau 'n'\n pilihan anda : ";
    cin >> pilihan;
    }
    while (pilihan == 'y');
    }
