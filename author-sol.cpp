#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a, b;
	cin >> a >> b;
	int cnt = 0;
	while (a > 0 && b > 0) {
		if (a == 1 && b == 1) {
			break;
		}
		if (a > b) {
			a -= 2;
			b++;
		} else {
			b -= 2;
			a++;
		}
		cnt++;
	}
	cout << cnt << '\n';
	return 0;
}
