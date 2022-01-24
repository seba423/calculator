#include <iostream>
#include <math.h>
#include <iomanip>
char znak;
using namespace std;


int main()
{
    cout << "Kalkulator \n\n" << endl;
    cout << "+ dodawanie  , - odejmowanie, * mno\276enie , / dzielenie ,^ pot\251gowanie , V pierwiastek drugiego stopnia(kwadratowy), @ pierwiastek trzeciego stopnia sze\230cienny" << endl;
    while(true)
    {

    cout << "Podaj znak dzia\210ania jakie chesz wykona\206" << endl;
    cin >> znak;
    if(znak =='^')
    {
     double liczba, potega;
    cout << "Podaj liczb\251: ";
    cin >> liczba;
    cout << "Do kt\242rej pot\251gi podnie\230\206 liczb\251 " << liczba << "? Wpisz warto\230\206: ";
    cin >> potega;
    cout << "pow(" << liczba << "," << potega << ")=" << pow( liczba, potega ) << endl;       
    }
    else if(znak == '+')
    {
      double liczba1;
     double liczba2;
     double wynik;
     cout << "podaj 1 liczb\251" <<endl;
     cin >> liczba1;
     cout << "podaj 2 liczb\251" <<endl;
     cin >> liczba2;
     wynik = liczba1 + liczba2;
     cout<<"Wynik:" << wynik << endl;    
    }
    else if(znak == '-')
    {
      double liczba1;
     double liczba2;
     double wynik;
     cout << "podaj 1 liczb\251" <<endl;
     cin >> liczba1;
     cout << "podaj 2 liczb\251" <<endl;
     cin >> liczba2;
     wynik = liczba1 - liczba2;
    cout<<"Wynik:" <<wynik<<endl;   
    }
    else if(znak == '/')
    {
       double liczba1;
     double liczba2;
     double wynik;
     cout << "podaj 1 liczb\251" <<endl;
     cin >> liczba1;
     cout << "podaj 2 liczb\251" <<endl;
     cin >> liczba2;
     wynik = liczba1 / liczba2;
     cout<<"Wynik:" <<wynik<<endl;   
    }
    else if(znak == '*')
    {
     double liczba1;
     double liczba2;
     double wynik;
     cout << "podaj 1 liczb\251" <<endl;
     cin >> liczba1;
     cout << "podaj 2 liczb\251" <<endl;
     cin >> liczba2;
     wynik = liczba1 * liczba2;
     cout<<"Wynik:" <<wynik<<endl;    
    }
    else if(znak == 'V')
    {  
    double a;
    cout << "podaj liczb\251"<<endl;
    cin >> a;    
    cout<<"Pierwiastek z liczby "<<a<<" wynosi: "<<sqrt(a)<<endl;
    cout<<"Po zaokr\245gleniu do dw\242ch miejsc po przecinku: "<<
	setprecision(2)<<fixed<<sqrt(a)<<endl;    
    }
    else if(znak == '@')
    {
        double liczba;
        cout << "Podaj liczb\251: ";
        cin >> liczba;
        double wynik = pow( liczba,( 1 / 3.0 ) ); 
        cout << "Pierwiastek stopnia trzeciego z liczby " << liczba << " to: " << wynik << endl;    
    }
    }
    system("pause");
    return 0;
} 
