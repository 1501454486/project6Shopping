#pragma once

#include <vector>
#include <iostream>

using namespace std;

class Solution1 {
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
	// ���п��ܵ����
	vector<int> combinations;
public:
	Solution1();

	// ��ȡ����
	void read_data();

	// ̰���㷨����������������
	// ̰�Ĳ��ԣ��ȼ������п��ܵ�������ϣ����۸��ȥ�Żݵ����п��ܣ�
	// �ٰ��մ�С��������Ȼ���С��ʼ�ۼ�
	void greedy();

	// ���㵱ǰ��price��coupons�ܲ������������
	void cal_combinations();

	// ��ӡ����Ϣ
	void print_Information();

	// ��ӡ��๺����Ʒ���������ʣ��Ǯ
	void result();


	friend class Solution2;
};