#include <iomanip>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
void potegowanie()
{
long a,b;
cout << "podaj 1 liczbe" <<endl;
cin >> a;
cout << "podaj 2 liczbe" <<endl;
cin >> b;
cout << "wynik:"<< pow(a,b) <<endl;
}
void dzielenie()
{
double a,b,c;
cout << "podaj 1 liczbe" <<endl; 
cin >> a;
cout << "podaj 2 liczbe" <<endl;
cin >> b;
if(a ==0 or b ==0)cout << "nie dzielimy przez zero" <<endl;
else cout << "wynik:"<<a/b<<endl;
}
void mnozenie()
{
double a,b,c;
cout << "podaj 1 liczbe" <<endl; 
cin >> a;
cout << "podaj 2 liczbe" <<endl;
cin >> b;
c = a * b;
cout <<  c <<endl;
}
void odejmowanie()
{
double a,b,c;
cout << "podaj 1 liczbe" <<endl; 
cin >> a;
cout << "podaj 2 liczbe" <<endl;
cin >> b;
c = a - b;
cout <<  c <<endl;
}
void dodawanie()
{
double a,b,c;
cout << "podaj 1 liczbe" <<endl; 
cin >> a;
cout << "podaj 2 liczbe" <<endl;
cin >> b;
c = a + b;
cout <<  c <<endl;

}
int main()
{
  int i = 1;
  char funkcja;
  while(i = 1)
  {
  start:  
  cout <<"wpisz numer dzialania: 1 to dodawanie. 2 to odejmowanie,3 to monzenie, 4 to dzielenie , 5 to potegowanie" <<endl;
  funkcja=getch();
  switch( funkcja)
  {
    case '1':
    {
      dodawanie();
      break;
    }
    case '2':
    {
      odejmowanie();
      break;
    }
    case '3':
    {
      mnozenie();
      break;
    }
    case '4':
    {
      dzielenie();
      break;
    }
    case '5':
    {
      potegowanie();
      break;
    }
    default:
    {
      cout << "nie ma takiej opcji"<<endl;
      getchar();
      exit(0);
    }
  }
  cout<< "czy chcesz kontynuowac wpisz 1 jesli nie 0"<<endl;
  cin >> i;
  if(i == 0)
  {
    break;
  }
 
  

  }
  return 0;
} 
