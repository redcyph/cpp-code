//this code works for both uppercase and lower case string

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout<<"enter :";
    cin>>s;

    int hash[256] = {0};
    for(int i=0; i<s.size(); i++) {
        hash[s[i]]++;
    }

    int q;
    cout<<"enter the number of character you want to search :";
    cin>>q;

    while(q--) {
        char c;
        cout<<"enter the character :";
        cin>>c;
        cout<<hash[c]<<endl;
    }
}