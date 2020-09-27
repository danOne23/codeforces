#include <bits/stdc++.h>

using namespace std;

int main() {

    int amount;
    cin >> amount;

    int a = 0;
    for (int i = 0; i <= amount; i++) {

        string view;
        getline(cin, view);
        if (count(view.begin(), view.end(), '1') >= 2) a++;

    }

    cout << a;
}