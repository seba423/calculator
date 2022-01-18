#include<iomanip>
#include <iostream>
#include <math.h>

using namespace std;
//zmienne
string dzialanie;
double liczba1;
double liczba2;
char znak_operator;
double wyniki;



int main()
{
    cout << "Kalkulator \n\n" << endl;
    while (true)
    {
    cout << "wpisz jakie dzialanie chcesz wykonac" << endl;
    cin >> dzialanie;

    if(dzialanie == "potegi")
    {
    double liczba, potega;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    cout << "Do ktorej potęgi podniesc liczbe " << liczba << "? Wpisz wartosc: ";
    cin >> potega;
    cout << "pow(" << liczba << "," << potega << ")=" << pow( liczba, potega ) << endl;   
    }
    else if (dzialanie == "dodawanie")
    {
     double liczba1;
     double liczba2;
     double wynik;
     cout << "podaj 1 liczbe" <<endl;
     cin >> liczba1;
     cout << "podaj 2 liczbe" <<endl;
     cin >> liczba2;
     wynik = liczba1 + liczba2;
     cout << wynik << endl;
    }
    else if (dzialanie == "odejmowanie")
    {
     double liczba1;
     double liczba2;
     double wynik;
     cout << "podaj 1 liczbe" <<endl;
     cin >> liczba1;
     cout << "podaj 2 liczbe" <<endl;
     cin >> liczba2;
     wynik = liczba1 - liczba2;
    cout <<wynik<<endl;
    }
     else if (dzialanie == "mnozenie")
    {
     double liczba1;
     double liczba2;
     double wynik;
     cout << "podaj 1 liczbe" <<endl;
     cin >> liczba1;
     cout << "podaj 2 liczbe" <<endl;
     cin >> liczba2;
     wynik = liczba1 * liczba2;
    cout <<wynik<<endl;
    }
     else if (dzialanie == "dzielenie")
    {
     double liczba1;
     double liczba2;
     double wynik;
     cout << "podaj 1 liczbe" <<endl;
     cin >> liczba1;
     cout << "podaj 2 liczbe" <<endl;
     cin >> liczba2;
     wynik = liczba1 / liczba2;
    cout <<wynik<<endl;
    }
    else if (dzialanie == "pierwiastek")
    {
    cout << "Ta funkcja liczy pierwiastek drugiego stopnia"<<endl;    
    double a;
    cout << "podaj liczbe"<<endl;
    cin >> a;    
    cout<<"Pierwiastek z liczby "<<a<<" wynosi: "<<sqrt(a)<<endl;
    cout<<"Po zaokragleniu do dwoch miejsc po przecinku: "<<
	setprecision(2)<<fixed<<sqrt(a)<<endl;
    }
    else if (dzialanie == "pierwiastek_szescienny")
    {
        double liczba;
        cout << "Podaj liczbe: ";
        cin >> liczba;
        double wynik = pow( liczba,( 1 / 3.0 ) ); 
        cout << "Pierwiastek stopnia trzeciego z liczby " << liczba << " to: " << wynik << endl;
    }
    }
    system("pause");
     return 0;
     
}
