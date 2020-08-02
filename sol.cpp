#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	for (int qq = 1; qq <= tt; qq++) {
		int a[100], n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		long int mx = 0, sum = 0, tmp = 0;
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				tmp = a[i] * a[j];
				sum = 0;
				while (tmp != 0) {
					sum = tmp % 10 + sum;
					tmp /= 10;
				}
				if (sum > mx) {
					mx = sum;
				} else {
					continue;
				}
			}
		}
		cout << mx << '\n';
	}
	return 0;
}
