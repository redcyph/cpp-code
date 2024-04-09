#include <bits/stdc++.h>
using namespace std;

bool rev(int n)
{
    int dup = n;
    int count = 0;

    while (n != 0)
    {
        int lastdigit = n % 10;
        count = (count * 10) + lastdigit;
        n = n / 10;
    }

    return (dup==count);
}

int main()
{
    int n;
    cout << "enter :";
    cin >> n;
    //cout<<rev(n);
    if (true==rev(n)) {
        cout<<"palindrome";

    }
    else cout<<"not palindrome";
}
