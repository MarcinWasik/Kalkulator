#include <iostream>
#include "kalkulator.hpp"

using namespace std;

int main()
{
	float liczba1;
	float liczba2;
	char dzialanie;

	cout<<"Podaj pierwsza liczbe:\n ";
	cin >>liczba1;

	cout<<"Podaj dzialanie (+ , - , / , *): \n";
	cin >> dzialanie;

	cout<<"Podaj druga liczbe : \n";
	cin >>liczba2;
	obliczOrazWyswietlWynik (liczba1, liczba2, dzialanie);
	return 0;
}


	
