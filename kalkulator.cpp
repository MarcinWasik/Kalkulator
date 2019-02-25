#include "kalkulator.hpp"

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

void obliczOrazWyswietlWynik (float liczba1, float liczba2, char dzialanie)
{
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
        cout<<endl;
}
