#include <bits/stdc++.h>
using namespace std;

void Combi(int start, int idx, vector<int>& v, vector<int>& v2)
{
    if (idx == 7)
    {
        int sum = 0;
        for(int i=0; i<7; i++)
        {
        	sum += v2[i];
		}
            

        if (sum == 100) 
        {
            for(int i=0; i<7; i++)
            {
            	cout << v2[i] << "\n";
			}
                
            exit(0); 
        }
        return;
    }

    for (int i = start; i < v.size(); i++)
    {
        v2.push_back(v[i]);
        Combi(i + 1, idx + 1, v, v2);
        v2.pop_back();
    }
}

int main()
{
    vector<int> v;
    for (int i = 0; i < 9; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    vector<int> answer;
    Combi(0, 0, v, answer);

    return 0;
}
