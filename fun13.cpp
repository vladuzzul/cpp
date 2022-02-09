#include <iostream>
#include <cmath>

using namespace std;

int main()
{
 	int secretNum;
	secretNum = rand() % 10; 
	int guess;
	int guessCount = 0;
	int guessLimit;
	int spy;
	bool outOfGuesses = false;
	cout << "Numarul secret e intre 1 si 10." << endl;
et:	cout << "Intra limita ta de ghicitori(mai mca decat 8): "; cin >> guessLimit;
	if(guessLimit >= 8) goto et;
	spy = guessLimit;
	cout << "Limita ta de ghicitori este: " << guessLimit << endl;
	while(secretNum != guess)
	{
		if(guessCount < guessLimit)
		{
			cout << "Intra ghicitoarea ---->  ";
			cin >> guess;
			spy --;
			if (guess != secretNum || spy != 0) cout << "Incearca din nou, mai ai: " << spy << " ghicitori." << endl;
			guessCount++;
		}
		else
		{
			outOfGuesses = true;
		}

	}
	if(outOfGuesses){
		cout << "Ai pierdut!" << endl;
	}
	else 
	{
		cout << "Ai castigat!!! numarul secret era: " << secretNum << endl;
	}
	return 0;
}