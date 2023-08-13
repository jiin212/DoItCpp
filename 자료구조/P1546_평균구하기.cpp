#include<iostream>
using namespace std;

int main() 
{
	float N = 0;
	cin >> N;

	float maxScore = 0;
	float sum = 0;

	for (int i = 0;i < N;i++)
	{
		int temp = 0;
		cin >> temp;
		if (temp > maxScore) maxScore = temp;
		sum += temp;
	}

	cout <<(float)( sum / maxScore * 100) /N;
}