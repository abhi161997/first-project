#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 double hdeg=30.0,hhpm=0.5,mdeg=6.0;
 double deg=0.0;
 int count=0;
 double degin;
 cout<<"Enter degree: ";
 cin>>degin;
 for(float i=0;i<12;i++)
 {
  for(float j=0;j<60;j++)
  {
   deg=abs((i*hdeg+j*hhpm)-(j*mdeg));
   if((deg>=(degin-2) && (deg<=(degin+2))) || (deg>=(358-degin) && deg<=(362-degin)))
   {
   cout<<i<<"::"<<j<<" "<<deg<<endl;
   count++;
   }
  }
 }
 cout<<endl<<count;
 getch();
}