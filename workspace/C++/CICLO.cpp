#include <iostream>

using namespace std;

int main()
{

	int a;
	int s; // variabile accumulatore
	int n; // variabile contatore
	int r; 
	s=0;
	cout<<"Quante volte vuoi rifare la somma? ";
	cin>>r;

	    while(n != r)
	    {
		    cout << "Inserisci un numero: ";
		    cin >> a;
		    s = s + a;
		    n = n + 1; // oppure n++
	    }
	cout<<"La somma è: "<<s;

	return 0;
}