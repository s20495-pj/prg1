#include<iostream>
#include<string.h>
using namespace std;
int main()
{
        char str[100];
        int i, length;
        int flag = 0;    

        cout<<"\n Podaj slowo : ";
        cin>>str;    

        length = strlen(str);    

        for(i=0;i < length ;i++)
        {
                if(str[i] != str[length-i-1])
                {
                        flag = 1;
                        break;
                }
        }    
        if(flag)
        {
                cout<<" "<<str<<" nie jest palindromem"<<endl;
        }    
        else
        {
                cout<<" "<<str<< " jest palindromem"<<endl;
        }
        return 0;
}
