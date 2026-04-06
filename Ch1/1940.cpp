#include<bits/stdc++.h>

using namespace std;


int main()
{
	int N , M;
	
	cin>>N;
	cin>>M;
	
	vector<int> v(N, 0);
	
	for(int i=0; i<N; i++)
	{
		cin>>v[i];
	}
	
	
	sort(v.begin(), v.end());
	int start = 0;
	int end = v.size() - 1;
	int cnt =0;
	
	while(start < end)
	{
		int sum = v[start] + v[end];
		
		if(sum > M)
		{
			end --;
			
		}
		else if(sum < M)
		{
			start ++;
		}
		else if(sum == M)
		{
			cnt++;
			start++;		
		}
	}
	cout<<cnt<<endl;
	
	
}
