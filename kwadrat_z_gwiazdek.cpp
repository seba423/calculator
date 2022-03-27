#include <iostream>
using namespace std;

int k, w;

int main()
{
    cin >> k >> w;
    for(int j = 0; j <= w; j++) 
    {
        for(int i = 0; i <= k; i++)
        {
            if(i == 0 || i == k || j == 0 || j == w)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
