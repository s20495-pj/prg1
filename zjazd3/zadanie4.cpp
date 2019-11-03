#include <iostream>
using namespace std;
int main()
{
int dlugosc; 
string slowo;

cout << "Podaj slowo do wypisania od tylu:\n";
cin >> slowo;

for(int i=slowo.size(); i>=0; i--)
{
cout << slowo[i];
}
return 0;
} 
