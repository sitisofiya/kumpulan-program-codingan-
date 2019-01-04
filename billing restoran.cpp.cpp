#include <conio.h>
#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{
  long harga, biaya, diskon, grandtotal, bayar, kembalian;
  int jumlah;
  char paket;

  cout<<"-------------------------"<<endl;
  cout<<"    CAFE JARKOS     "<<endl;
  cout<<"-------------------------"<<endl<<endl;

  cout<<"MENU PAKET:              "<<endl;
  cout<<"A. Roti Bakar + Es tea     "<<endl;
  cout<<"B. Kebab + Lemon tea     "<<endl;
  cout<<"C. Burger + jus mangga      "<<endl<<endl;

  cout<<"Tipe Kamar [ A/B/C ]= "; cin>>paket;
  cout<<"Jumlah          = "; cin>>jumlah;

  switch(paket)
  {
    case 'A':
    case 'a'  :
     harga=28000;
    break;

    case 'B':
    case 'b'   :
     harga=24000;
    break;

    case 'C':
    case  'c'   :
     harga=27000;
    break;
  }

  biaya=harga*jumlah;
  diskon=0.1*biaya;
  grandtotal=biaya-diskon;

  system("cls");


  cout<<"-------------------------"<<endl;
  cout<<"    CAFE JARKOS     "<<endl;
  cout<<"-------------------------"<<endl<<endl;

  cout<<"RINCIAN PEMBAYARAN:      "<<endl;
  cout<<"Menu Paket       = "<<paket<<endl;
  cout<<"Jumlah           = "<<jumlah<<endl;
  cout<<"                 ------------ x"<<endl;
  cout<<"Biaya            = "<<biaya<<endl;
  cout<<"Diskon 5%        = "<<diskon<<endl;
  cout<<"                 ------------ -"<<endl;
  cout<<"Grand Total      = "<<grandtotal<<endl;
  cout<<"Bayar            = "; cin>>bayar; kembalian=bayar-grandtotal;
  cout<<"                 --------------"<<endl;
  cout<<"Uang Kembalian   = "<<kembalian<<endl;

  getch();
}

