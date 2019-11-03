#include <iostream>
using namespace std;

 int R2=5;    
 int R1=R2*R2; 
double srednia; 
int i;
int suma = 0;
int main()
{
    int tab2w[R2][R2];
    int tab1w[R1];
    cout << "Prosze o podanie " << R1 << " elementow: ";
        // Tablica dwuwymiarowa uzupelnianie elementow
    for (int i=0; i<R2; i++){
        for (int j=0; j<R2; j++){
           cin >> tab2w[i][j];
	   suma+= tab2w[R2][R2];
    }
}
   srednia = suma /25;
	cout << srednia;
    cout << "\nElementy tablicy dwuwymiarowej:\n";
    for (int i=0; i<R2; i++)
    {
        for (int j=0; j<R2; j++)
            cout << tab2w[i][j] << " ";
        cout << "\n";
    }

    return 0;
}

 

