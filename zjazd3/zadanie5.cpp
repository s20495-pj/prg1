#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{

char znak;
cin>>znak; 

while(znak!='.') 
{
	if(znak>64 && znak<97) 
	  	cout<<(char)(znak+32); 
	else
		cout<<znak; 
	
	cin>>znak; 
}

cout<<endl;

system("pause");
return 0;
}
