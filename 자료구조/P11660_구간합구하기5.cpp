#include<iostream>
#include<vector>
using namespace std;

int main() 
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int M;
	cin >> M;

	//int arr[1025][1025] = { 0 };
	vector<vector<int>> arr(N + 1, vector<int>(N + 1, 0));

	for (int i = 1;i <= N;i++)
	{
		for (int j = 1;j <= N;j++)
		{
			int temp = 0;
			cin >> temp;
			arr[i][j] = arr[i][j - 1] + arr[i - 1][j] + temp - arr[i - 1][j - 1];
		}
	}
	
	for (int m = 0;m < M;m++)
	{
		int x1,x2,y1,y2 = 0;
		cin >> x1 >> y1>>x2>>y2;

		cout << arr[x2][y2] - arr[x1 - 1][y2] - arr[x2][y1 - 1] + arr[x1 - 1][y1 - 1]<<"\n";


	}

}