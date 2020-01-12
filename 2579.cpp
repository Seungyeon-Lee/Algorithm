#include <iostream>
#include <vector>
#include <math.h>

int n;
using namespace std;
vector <int> stair;
vector <int> dp;

int max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	cin >> n; // 1 ~ 100
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		stair.push_back(temp);
		dp.push_back(temp);
	}

	// ���� : ù ��° ����� ��� �̾� �� ��°��, �� ��° ������� ���� �� �ִ�
	// ù ��° ����� ��� �� ��° ������� �ö󰡴� ���� �Ұ����ϴ�.
	// ù ��°, �� ��°, �� ��° ����� �������� ���� �� ����.
	
	// ����, ó�� ����� ���� �� �ִ� ����� ù ��°, �� ��° �� �ϳ��̴�.
	// ������ ���� ����� �ݵ�� ��ƾ� �Ѵ�.

	dp[0] = stair[0]; // ù ��°
	dp[1] = max(stair[1] + stair[0], stair[1]); // �� ��° 1 + 2 or 1
	dp[2] = max(stair[2] + stair[0], stair[1] + stair[2]); // �� ��° 1 + 2 or 2 + 3
	
	// ������ ����� ��� ��� (= dp[n]�� ���)
	// dp[n] = max (dp[n-2] + stair[n], dp[n-1] + dp[n-3] + stair[n]);
	// ������ ��� + �� �� ��� or ������ ��� + �� ��� + �� �� �� ���

	for (int i = 3; i < n; i++)
		dp[i] = max(dp[i - 2] + stair[i], dp[i - 3] + stair[i - 1] + stair[i]);

	cout << dp[n - 1];

	return 0;
}