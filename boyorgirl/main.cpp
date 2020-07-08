#include <bits/stdc++.h>
using namespace std;

int main()
{

    string name;
    cin >> name;
    string charsChecked = "";
    int distChars = 0;

    for (int i = 0; i < name.length(); i++) {
        if (charsChecked.find(name[i]) == string::npos) {
            distChars++;
            charsChecked+=name[i];
        }
    }

    if ((distChars % 2) == 0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
}