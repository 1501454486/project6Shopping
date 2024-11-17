#include "Solution2.h"
#include <algorithm>

using namespace std;

Solution2::Solution2() : n(0), D(0), cnt(0) {}

Solution2::Solution2(const Solution1& s1) : n(s1.n), D(s1.D), cnt(s1.cnt) {
	price = s1.price;
	coupons = s1.coupons;
}

void Solution2::dynamic_programming() {
	// ��̬�滮���飬dp[x]��ʾxԪ�������ٶ���
	vector<int> dp(D + 1, 0);

	sort(price.begin(), price.end());
	sort(coupons.begin(), coupons.end());

	for (int p : price) {
		for (int c : coupons) {
			int cost = p - c;
			// ���ʣ���Ǯ����
			if (cost > D) {
				break;
			}
			// �Ӻ���ǰ����dp
			for (int x = D; x >= cost; x--) {
				dp[x] = max(dp[x], dp[x - cost] + 1);
			}
		}
	}

	// �ҵ�����������Ʒ��Ŀ��ʣ���Ǯ
	int remainingMoney = D;
	for (int i = 0; i <= D; ++i) {
		if (dp[i] > cnt) {
			cnt = dp[i];
			remainingMoney = D - i;
		}
	}
	D = remainingMoney;
}

void Solution2::print_Information() {
	cout << "n: " << n << endl;

	cout << "D: " << D << endl;

	cout << "price: ";
	for (int i = 0; i < n - 1; i++) {
		cout << price[i] << ", ";
	}
	cout << price[n - 1] << endl;

	cout << "coupons: ";
	for (int i = 0; i < n - 1; i++) {
		cout << coupons[i] << ", ";
	}
	cout << coupons[n - 1] << endl;
}

void Solution2::result() {
	cout << "---Dynamic Programming---" << endl;
	cout << "You can buy " << cnt << " items at most;" << endl;
	cout << "There is still " << D << " left;" << endl;
	cout << "-------------------------" << endl;
}