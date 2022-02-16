#include <iostream>
#include <math.h>
#include <iomanip>
#include <stdlib.h>

using namespace std;
char znak;
int i = 1;
int main()
{
    cout << "+ dodawanie  , - odejmowanie, * mnozenie , / dzielenie ,^ potegowanie , V pierwiastek drugiego stopnia(kwadratowy), @ pierwiastek trzeciego stopnia szescienny lub czyszczenie ekranu za pomoca znaku !" << endl;
    while(i = 1)
    {
    start:
    cout << "Podaj znak dzialania jakie chesz wykonac" << endl;
    cin >> znak;
    if(znak =='^')
    {
     double liczba, potega;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    cout << "Do ktorej potegi podniesc liczbe " << liczba << "? Wpisz wartosc: ";
    cin >> potega;
    cout << "pow(" << liczba << "," << potega << ")=" << pow( liczba, potega ) << endl;       
    }
    else if(znak == '+')
    {
      double liczba1;
     double liczba2;
     double wynik;
     cout << "podaj 1 liczbe" <<endl;
     cin >> liczba1;
     cout << "podaj 2 liczbe" <<endl;
     cin >> liczba2;
     wynik = liczba1 + liczba2;
     cout<<"Wynik:" << wynik << endl;    
    }
    else if(znak == '-')
    {
      double liczba1;
     double liczba2;
     double wynik;
     cout << "podaj 1 liczbe" <<endl;
     cin >> liczba1;
     cout << "podaj 2 liczbe" <<endl;
     cin >> liczba2;
     wynik = liczba1 - liczba2;
    cout<<"Wynik:" <<wynik<<endl;   
    }
    else if(znak == '/')
    {
       double liczba1;
     double liczba2;
     double wynik;
     cout << "podaj 1 liczbe" <<endl;
     cin >> liczba1;
     cout << "podaj 2 liczbe" <<endl;
     cin >> liczba2;
     wynik = liczba1 / liczba2;
     cout<<"Wynik:" <<wynik<<endl;   
    }
    else if(znak == '*')
    {
     double liczba1;
     double liczba2;
     double wynik;
     cout << "podaj 1 liczbe" <<endl;
     cin >> liczba1;
     cout << "podaj 2 liczbe" <<endl;
     cin >> liczba2;
     wynik = liczba1 * liczba2;
     cout<<"Wynik:" <<wynik<<endl;    
    }
    else if(znak == 'V')
    {  
    double a;
    cout << "podaj liczbe"<<endl;
    cin >> a;    
    cout<<"Pierwiastek z liczby "<<a<<" wynosi: "<<sqrt(a)<<endl;
    cout<<"Po zaokragleniu do dwoch miejsc po przecinku: "<<
	setprecision(2)<<fixed<<sqrt(a)<<endl;    
    }
    else if(znak == '@')
    {
        double liczba;
        cout << "Podaj liczbe: ";
        cin >> liczba;
        double wynik = pow( liczba,( 1 / 3.0 ) ); 
        cout << "Pierwiastek stopnia trzeciego z liczby " << liczba << " to: " << wynik << endl;    
    }
    else if(znak == '!')
    {
      system("CLS");
    }




    cout << "jesli chcesz kontynuowac wpisz 1 jesli nie 0 " << endl;
    cin >> i;


switch(i) {
  case 1:
  goto start;
    break;
  case 0:
  goto abc;
    break;
    }
    }
    abc:
    return 0;
}
