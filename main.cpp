#include <iostream>

using namespace std;
//zmienne
double liczba1;
double liczba2;
double liczba3;
double liczba4;
double liczba5;
double liczba6;
double liczba7;
double liczba8;
char znak_operator;
double wyniki;



int main()
{
    cout << "Kalkulator \n\n" << endl;
    cin >> liczba1 >>znak_operator >> liczba2 >> znak_operator >> liczba3 >> znak_operator >> liczba4;

    if(znak_operator =='+')
    {
        wyniki = liczba1 + liczba2 + liczba3 + liczba4;
        cout << "Wynik:"<< wyniki<<endl
                                <<endl;
    }
    else if(znak_operator == '-')
    {
        wyniki = liczba1 - liczba2 - liczba3 - liczba4;
        cout << "Wynik:"<< wyniki<<endl
                                <<endl;
    }
    else if(znak_operator == '*')
    {
        wyniki = liczba1 * liczba2 * liczba3 * liczba4;
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
        wyniki = liczba1 / liczba2 / liczba3 / liczba4;
        cout << "Wynik:"<< wyniki<<endl
                                <<endl;
    }
    

    system("pause");
     return 0;
}




