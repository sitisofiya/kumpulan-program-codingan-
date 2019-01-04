#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; ++i)
    {
        if ( i == 7 || i == 9)
        {
            continue;
        }
        cout << i << "\t";
    }
    return 0;
}
