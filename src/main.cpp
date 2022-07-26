#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	cin >> t;
	while (0 < (t--)) {
		string a, b;
		cin >> a >> b;

		cout << ((a == b) ? "OK" : "ERROR") << '\n';
	}

	return 0;
}