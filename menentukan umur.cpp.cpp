#include <iostream>
using namespace std;

void hasil(int x, int y){
if(x==1){
    if(y>=17){
            cout<<"Pria Dewasa";
    }
    else{
        cout<<"Perjaka";
    }
}
else{
    if(y>=17){
        cout<<"Wanita Dewasa";
    }
    else{
        cout<<"Gadis";
    }
}
}
int main(){
int umur,kel;

cout<<"Jenis Kelamin"<<'n';
cout<<"1. Laki-Laki"<<'\n';
cout<<"2. Perempuan"<<'\n';
cout<<"Masukkan Pilihan Anda(1-2):";cin>>kel;

cout<<"Masukkan Umur Anda(1-100):";cin>>umur;

//Hasil(kel,umur);
}
