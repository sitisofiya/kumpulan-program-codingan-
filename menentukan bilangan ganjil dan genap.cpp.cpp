#include <iostream>
using namespace std;
int main()
{
    int nilai,hasil;
    cout<<"menentukan ganjil atau genap"<<endl;
    cout<<"masukkan nilai =";
    cin>>nilai;
    hasil = nilai %2;
    cout<<"hasilnya adalah=";
    if(hasil==0)
        cout<<"genap";
    else
        cout<<"ganjil";
    return 0;
}
