#include<iostream.h>
#include<conio.h>
int main (void)
{
int jumlah= 0;
int bilangan;
for (bilangan=0;bilangan < 20;bilangan++)
{
jumlah += bilangan;
if (bilangan >= 5) break;
}
cout <<"Deret bilanagn : 1 + 2 + ... + "<<bilangan << endl;
cout <<"jumlah deretan bilangan = " <<jumlah;
getch();
return 0;
}