#include <iostream>

using std::cout;
using std::cin;
using std::endl;
int main()
{
int i;
float u=0;
float u1=0;
float u2=0;
float u3=0;
float u4=0;
float u5=0;
float tab[25];
for(i=0; i<25; i++)
{
cin>> tab[i];
}
while (i>=0)
{
u=u+tab[i];
i--;
}
for(int j=0;j<5;j++){
u1=u1+tab[j];
u2=u2+tab[j+5];
u3=u3+tab[j+10];
u4=u4+tab[j+15];
u5=u5+tab[j+20];
}
u=u/25;
u1=u1/5;
u2=u2/5;
u3=u3/5;
u4=u4/5;
u5=u5/5;
cout<< endl<< u <<endl;
if(u1>u){
cout<<1<<endl;
}
if(u2>u){
cout<<2<<endl;
}
if(u3>u){
cout<<3<<endl;
}
if(u4>u){
cout<<4<<endl;
}
if(u5>u){
cout<<5<<endl;
}
return 0;
}
