#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ss stable_sort



int main() {
	cin.tie(0)->sync_with_stdio(0);
	
	string s;
	cin >>s;
	sort(s.begin(), s.end(), greater<char>());
	cout << s;
	return 0;
}