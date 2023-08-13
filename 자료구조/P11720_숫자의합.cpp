#include <iostream>
#include<string>
using namespace std;

int main()
{
    int N = 0;
    cin >> N;

    long long answer = 0;
    string str;
    cin >> str;
    for (int i = 0;i < N;i++) {
        answer += (char)(str[i]) - '0';
    }
    cout << answer;
}