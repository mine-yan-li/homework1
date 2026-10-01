#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void Prom(string& a, const int k, const int m) {
	if (k == m) {
		for (int i = 0; i <= m; i++)cout << a[i] << "";
		cout << endl;
	}
	else
		for (int i = k; i <= m; i++) {
			swap(a[k], a[i]);
			Prom(a, k + 1, m);
			swap(a[k], a[i]);
		}
}
int main() {

	string s;
	if (cin >> s) {
		int length = s.length();
		Prom(s, 0, length - 1);
	}
	return 0;
}