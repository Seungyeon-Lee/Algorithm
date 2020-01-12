#include <iostream>
#include <vector>

using namespace std;
int N; // ���� ����
int K; // ��
vector <int> coins;

int main()
{
	cin >> N >> K;
	int count = 0;

	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		coins.push_back(temp);
	}

	for (int i = N - 1; i >= 0; i--)
	{
		if (coins[i] <= K)
		{
			int coin_count = K / coins[i]; // ���� ������ �� ���� ����� ���ΰ�

			K = K - (coins[i] * coin_count); // ����� ���� ��ŭ ����
			count += coin_count; // ����� ���� ����
		}
	}
	cout << count;
	
	
	return 0;
}