#include<iostream>

using namespace std;

int islucky(int a) {
	while (a > 0) {
		int c = a % 10;
		if (c != 4 && c != 7) return 0;
		a /= 10;
	}
	return 1;
}

int main() {
	int n;
	cin >> n;

	if (islucky(n) || n % 4 == 0 || n % 7 == 0) {
		cout << "YES"; return 0;
	}

	for (int i = 2; i <= n; i++) {
		if (n % i == 0 && islucky(i)) {
			cout << "YES";
			return 0;
		}
	}

	cout << "NO";
	return 0;
}
