#include <iostream>
using namespace std;
double a,b,c,wynik;
char i = 'y';
int main()
{
    while( i = 'y')
    {
    cout << "Podaj podstawe: \n ";
    cin >> a;
    cout << "Podaj pierwszy bok: \n ";
    cin >> b;
    cout << "Podaj drugi bok: \n ";
    cin >> c;
    wynik = a + b + c / 2;
    cout << "Pole wynosi: " << wynik << endl;
    cout << "jesli chcesz kontynuowac (t/n)";
    cin >> i;
    if(i == 'n')
    {
        break;
    }
    }

    return 0;
}
