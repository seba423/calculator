#include <iostream>
using namespace std;
double liczba1,liczba2;
int i = 1;
char znak[4]={'+','-','*','/'};
int main()
{
    while( i = 1)
    {
    cout << "Podaj pierwsza liczbe: \n ";
    cin >> liczba1;
    cout << "Podaj druga liczbe: \n  ";
    cin >> liczba2;
    for(int i=0; i<4; i++)
    {
        switch(znak[i])
        {
            case '+':
                cout<<"Dodawanie:" << liczba1 + liczba2 << endl;
                break;
            case '-':
                cout<<"Odejmowanie:" << liczba1 - liczba2 << endl;
                break;
            case '*':
                cout<<"Mnowanie:" << liczba1 * liczba2 << endl;
                break;
            case '/':
                cout<< "Dzielenie:" << liczba1 / liczba2 << endl;
                break;
        }
    }
    cout << "jesli chcesz kontynuowac (t/n)";
    cin >> i;
    if(i == 'n')
    {
        break;
    }
    }
    return 0;
}
