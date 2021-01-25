#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;

	if (n%3==0) {
		if (n%5==0) cout<<"FizzBuzz";
		else cout<<"Fizz";
	} else if (n%5==0) cout<<"Buzz";
}
