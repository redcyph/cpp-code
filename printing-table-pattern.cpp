#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "enter the numbers : " << endl;
    cin >> a >> b >> c;

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if (j == a || j == b || j == c)
                cout << "\t*";
            else
                cout << "\t" << i * j;
        }
        cout << endl;
    }
}