#include <iostream>

using namespace std;

int main(){
int i;
int z[5];
double srednia;

for( i=0;i <5;i++){
cin >> z[i];
srednia +=z[i];

}
srednia=srednia/5;
cout << srednia << endl;

return 0;

}
