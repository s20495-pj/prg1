#include <iostream>
//Wadas Michał
//Badysiak Paweł
using namespace std;
int main(){
	int i, j;
	cin >> i;
	do {
		cin >> j;
	if(j > i){
	cout << "za wysoko, try again" << endl;
	}else{
	cout << "za malo" << endl;
	}
	}while(i !=j  );
	cout << "brawo wygrales" <<endl;
	return 0;
}
