#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n; cin >> n;
	auto ans = int{ 0 };
	auto pt = int{ 0 };
	auto prev = int{ 0 };
	for (auto i = 0; i < n; ++i) {
		int x; cin >> x;
		if (1 < x - prev) {
			ans += pt;

			pt = x;
		}

		prev = x;
	}
	ans += pt;

	cout << ans;

	return 0;
}