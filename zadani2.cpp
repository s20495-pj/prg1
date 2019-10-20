
#include <iostream>
//Michał Wadas
//Badysiak Paweł
using namespace std;
void printPattern(int);
int main()
{
	int a=0;

	printPattern(a);
}
void printPattern(int a) {
	int i, j, space, k = 0;
	for (i = 1; i <= a; i++) {

		for (j = 1; j <= a - i; j++) {
			cout << " ";
		}
		while (k != (2 * i - 1)) {
			if (k == 0 or k == 2 * i - 2)
				cout << "#";
			else
				cout << " ";
			k++;
		}
		k = 0;
		cout << endl;
	}
	n--;
	for (i = n; i >= 1; i--) {
		for (j = 0; j <= n - i; j++) {
			cout << " ";
		}
		k = 0;
		while (k != (2 * i - 1)) {
			if (k == 0 or k == 2 * i - 2)
				cout << "#";
			else
				cout << " ";
			k++;
		}
		cout << endl;
	}
}

