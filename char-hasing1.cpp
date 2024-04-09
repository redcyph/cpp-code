//this code is only for, if the string only contains lowercase letters

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout<<"enter :";
    cin>>s;

    int hash[26] = {0};

    for (int i=0; i<s.size(); i++) {
        hash[s[i]-'a']++;
    }

    int q;
    cout<<"how many character you want to search :";
    cin>>q;

    while(q--) {
        char c;
        cout<<"enter the character :";
        cin>>c;
        cout<<hash[c-'a']<<endl;
    }

    return 0;
}