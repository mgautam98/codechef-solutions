#include <bits/stdc++.h>

using namespace std;

const int MaxN = (int)2e2 + 10;
const int INF = (int)1e9;
const int MOD = 998244353;

int main() {
	int q;
	scanf("%d", &q);
	while (q --> 0) {
		int t;
		scanf("%d", &t);
		t--;
		long long now = 1;
		int who = 0, timer = 0;
		while (true) {
			if (who == 0) {
				if (timer + 2 > t) {
					break;
				}
				timer += 2;
			} else if (who == 1) {
				if (timer + 8 > t) {
					break;
				}
				timer += 8;
			} else {
				if (timer + 16 > t) {
					break;
				}
				timer += 16;
				now *= 2;
			}
			who = (who + 1) % 3;
		}
		long long ar[3] = {};
		ar[who] = now;
		cout << ar[0] << " " << ar[1] << " " << ar[2] << "\n";
	}
	return 0;
}
