#include <iostream>

using namespace std;
//zmienne
double liczba1;
double liczba2;
char znak_operator;
double wyniki;



int main()
{
while(true)
{
    

    
    cout << "Kalkulator \n\n" << endl;
    cin >> liczba1 >>znak_operator >> liczba2;

    if(znak_operator =='+')
    {
        wyniki = liczba1 + liczba2;
        cout << "Wynik:"<< wyniki<<endl
                                <<endl;
    }
    else if(znak_operator == '-')
    {
        wyniki = liczba1 - liczba2;
        cout << "Wynik:"<< wyniki<<endl
                                <<endl;
    }
    else if(znak_operator == '*')
    {
        wyniki = liczba1 * liczba2;
        cout << "Wynik:"<< wyniki<<endl
                                <<endl;
    }
    else if(znak_operator == '/')
    {
        if (liczba1 == 0)
        {
            cout << "nie mozna dzielic przez zero"<<endl;
            return 0;
        }
        wyniki = liczba1 / liczba2;
        cout << "Wynik:"<< wyniki<<endl
                                <<endl;
    }
    
}
     return 0;
     
}




