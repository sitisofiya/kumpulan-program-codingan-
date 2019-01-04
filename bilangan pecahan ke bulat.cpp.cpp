//mencetak bilangan ganjil dari angka 1 s/d N
#include <stdio.h>
#include <conio.h>

int i,N;

main()
{
printf ("Mencetak deret bil ganjil dari angka 1 s/d N\n");
printf ("Berapa N? :") ; scanf ("%d",&N);
for( i=1;i<=N;i++){
    if(i%2!=0)
        printf(" %d",i);
        }
getch();
}
print
