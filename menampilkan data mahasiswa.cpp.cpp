#include <iostream>
using namespace std;

main()
{
    struct Mahasiswa
    {
        int Nim;
        char Nama[30];
        char Almt[50];
    };

    Mahasiswa Mhs;

    cout<<"Masukan data Mahasiswa "<<endl;
    cout<<"Masukan Nim    : ";cin>>Mhs.Nim;
    cout<<endl<<"Masukan Nama   : ";cin>>Mhs.Nama;
    cout<<endl<<"Masukan Alamat : ";cin>>Mhs.Almt;

    cout<<endl<<endl<<"Tampilkan Data hasilnya"<<endl;
    cout<<"NIM    : "<<Mhs.Nim<<endl;
    cout<<"NAMA   : "<<Mhs.Nama<<endl;
    cout<<"ALAMAT : "<<Mhs.Almt<<endl;
    return 0;

}
