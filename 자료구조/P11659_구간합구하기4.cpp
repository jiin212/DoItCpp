#include<iostream>
using namespace std;

int main() 
{
	int N = 0;
	cin >> N;

	int M = 0;
	cin >> M;

	long long arr[100000] = { 0 };
	int temp = 0;

	cin >> temp;
	arr[0] = temp;

	for (int i = 1;i < N;i++)
	{
		cin >> temp;
		arr[i] = arr[i - 1] + temp;
	}

	for (int m = 0;m < M;m++)
	{
		int i, j = 0;
		cin >> i >> j;
		if (i == 1) cout << arr[j - 1] << "\n";
		else
		cout << arr[j-1] - arr[i - 2]<<"\n";
	}
}