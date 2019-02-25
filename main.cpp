#include <iostream>

using namespace std;

float dodawanie (float x, float y)
{
	float wynik = x+y;
	return wynik;
}


float odejmowanie (float x, float y)
{
	return x-y;
}

float dzielenie (float x, float y)
{
	return x/y;
}

float mnozenie (float x , float y)
{
	return x*y;
}


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
	
	if (dzialanie == '+')
	{
		cout << "Wynik: " << dodawanie(liczba1,liczba2);
	}
	else if (dzialanie == '-')
	{
		cout<< "Wynik: " << odejmowanie(liczba1,liczba2);
	}
	else if (dzialanie == '/')
	{
		cout<< "Wynik: " << dzielenie(liczba1, liczba2);
	}	
	else if (dzialanie == '*')
	{
		cout<< "Wynik: " <<mnozenie(liczba1,liczba2);
	}
	else
	{
		cout<< "Podales zly symbol !!!!";
	}
	return 0;
}


	
