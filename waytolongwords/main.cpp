#include <bits/stdc++.h>

using namespace std;

int main() {

    int amount;
    cin >> amount;

    string words [amount];
    for (int i = 0; i < amount; i++)
    {
        cin >> words[i];
    }




    for (int i = 0; i < amount; i++) {
        
        if (words[i].length() <= 10) continue;

        string firstL(1, words[i][0]);
        string lastL(1, words[i][words[i].size() - 1]);

        words[i].erase(0, 1);
        words[i].erase(words[i].size() - 1, words[i].size());
        
        words[i] = firstL + to_string(words[i].size()) + lastL;

    }

    for (int i = 0; i < amount; i++)
    {
        cout << words[i] << endl;
    }
    

}