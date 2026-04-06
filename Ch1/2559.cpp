#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    vector<int> v(N);
    for(int i = 0; i < N; i++)
        cin >> v[i];

    int sum = 0;
    for(int i = 0; i < K; i++)
        sum += v[i];

    int maxSum = sum;

    for(int i = K; i < N; i++)
    {
        sum += v[i];
        sum -= v[i - K];
        maxSum = max(maxSum, sum);
    }

    cout << maxSum << endl;
}
