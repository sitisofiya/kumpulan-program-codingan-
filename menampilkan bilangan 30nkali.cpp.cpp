#include <iostream>
using namespace std;

int main()
{
    int n,a;

    cout<<"\n menampilkan algoritma sebanyak n kali"<<endl;
    cout<<"masukkan jumlah yang diinginkan:";
    cin>>n;

    cout<<""<<endl;
    for (a=1;a<=n;++a)
    {
        if(a>30)
            break;
        cout<<"algoritma dan pemprograman"<<endl;
    }
    cout<<"\n hanya bisa menampilkan 30 kali"<<endl;

    return 0;
}
