#include <iostream>

using namespace std;

bool isPrime(int n)
{
	if(n<=1)
		return false;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}

int main() {
    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
	cout << "2. isPrime" << endl;
        cout << "0. Wyjscie" << endl;
        cin >> wyjscie;
	if(wyjscie==2)
	{
		int liczba;
		cout<<"Podaj liczbe aby sprawdzic czy jest pierwsza: ";
		cin>>liczba;
		if(isPrime(liczba))
			cout<<"\nLiczba jest pierwsza"<<endl;
		else if(!isPrime(liczba))
			cout<<"\nLiczba nie jest pierwsza"<<endl;
		return 0;
	}
    } while(wyjscie != 0);
    return 0;
}
