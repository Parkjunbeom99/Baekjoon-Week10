#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(cin >> n)
    {
        int cur = 1 % n;
        int cnt = 1;

        while(cur != 0)
        {
            cur = (cur * 10 + 1) % n;
            cnt++; 
        }

        cout << cnt << '\n';
    }
}
