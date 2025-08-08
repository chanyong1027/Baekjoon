#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int num[9], result[7];

	for (int i = 0; i < 9; i++) {
		cin >> num[i];
	}

	for (int a = 0; a < 8; a++) {
		int sum = 0;

		for (int b = a + 1; b < 9; b++) {
			sum = 0;

			for (int c = 0,i=0; c < 9; c++) if (c != a && c != b) result[i++] = num[c];
			for (int i = 0; i < 7; i++) sum += result[i];

			if (sum == 100) break;
		}
		if (sum == 100) break;
	}

	sort(result, result + 7);
	for (int i = 0; i < 7; i++) {
		cout << result[i] << "\n";
	}
}