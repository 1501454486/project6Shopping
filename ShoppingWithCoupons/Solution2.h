#pragma once

#include <vector>
#include <iostream>
#include "Solution1.h"

class Solution2 {
private:
	// n:��Ʒ���Ż�ȯ�����������
	int n;
	// D:�ܽ�Ǯ����
	int D;
	// cnt:��������
	int cnt;
	// price:�۸�
	vector<int> price;
	// coupons:�Ż�ȯ
	vector<int> coupons;
public:
	Solution2();

	Solution2(const Solution1& s1);

	// ��̬�滮���ӵ׵���
	void dynamic_programming();

	// ��ӡ����Ϣ
	void print_Information();

	// ��ӡ��๺����Ʒ���������ʣ��Ǯ
	void result();
};