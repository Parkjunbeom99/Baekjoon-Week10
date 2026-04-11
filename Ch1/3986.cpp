#include<bits/stdc++.h>

using namespace std;


int main()
{
	int N; 
	cin>>N;
	
	int cnt =0;
	for(int i =0; i<N;i++)
	{
		string s; 
		
		cin>>s;
		
		stack<char>st;
		
		
		
		for(int j=0; j<s.size(); j++)
		{
			if(st.empty())
			{
				st.push(s[j]);
			}	
			else
			{
				if(s[j] == st.top())
				{
					st.pop();
				}
				else
				{
					st.push(s[j]);
				}
			}
			
		}
		if(st.empty())
		{
			cnt++;
		}
		
	}
	cout<<cnt<<endl;
	
}
