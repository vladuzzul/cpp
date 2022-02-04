#include <iostream>

using namespace std;

int a, b, nr = 0, ctrl, i;

int main()
{
et: cout << "primul nr= "; cin >> a;
if (a > 10000) goto et;
cout << "ultimul numar= "; cin >> b;
if (b > 10000) goto et;

if (a > b) goto et;

for (ctrl = a; ctrl <= b; ctrl++)
{
	nr++;
	if (ctrl % 2 == 1) nr = nr-1;
}

cout << "Intre " << a << " si " << b << " avem " << nr << " numere pare." << endl;

	return 0;
}