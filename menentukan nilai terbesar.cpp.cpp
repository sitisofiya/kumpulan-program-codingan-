#include <iostream>
#include <conio.h>

using namespace std;
int main(int argc, char *argv[])
{
    int sofi,hesti;
    cout<<"masukkan nilai sofi :";
    cin>>sofi;
    cout<<"masukkan nilai hesti :";
    cin>>hesti;
    if(sofi>hesti)
        cout<<"nilai terbesar adalah = sofi"<<endl;
    else if (hesti>sofi)
        cout<<"nilai terbersar adalah = hesti"<<endl;
    else
        cout<<"salah masukkan"<<endl;
    return 0;
}
