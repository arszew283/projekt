#include <iostream>

using namespace std;

int silnia(int n)
{
	if(n<=1)
		return 1;
	return n*silnia(n-1);
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
	cout << "1. Silnia" << endl;
        cout << "0. Wyjscie" << endl;
        cin >> wyjscie;
	if(wyjscie==1)
	{
		int liczba;
		cout<<"Podaj z jakiej liczby wyliczyc silnie"<<endl;
		cin>>liczba;
		cout<<"Wynik: " << silnia(liczba)<<endl;
		return 0;
	}
    } while(wyjscie != 0);
    return 0;
}
