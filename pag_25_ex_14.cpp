#include <iostream>
using namespace std;
int n, i, ind = 0;
int main()
{
 et: cout << "n= "; cin >> n;
 if (n <= 1) goto et;
 for(i = 2; i <= n / 2; i++)
 {
 	if (n % i == 0)
 	{
 		cout << "Un divizor prorpiu este: " << i << endl;
 		ind++;
 	}
 }
 cout << n << " are " << ind << " divizori prorii." << endl;
 if (ind > 0) cout << "Numarul " << n << " este compus." << endl;
 if (ind == 0) cout << "Numarul " << n << " este prim." << endl; 
}