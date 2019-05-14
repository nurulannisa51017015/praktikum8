#include<iostream.h>
#include<conio.h>
main() {
int n,i=1;
float nilai,rata,jml=0;
cout<<"input banyak nilai =";cin>>n;
do
{cout<<"input nilai "<<i<<" = " ;cin>>nilai;
jml=jml+nilai;
rata=jml/n;
i++;}
while(i<=n);
cout<<"\nTolal nilai = "<<jml;
cout<<"\nRata nilai = "<<rata;
getch(); }