#include<bits/stdc++.h>

using namespace std;

int main()
{
	int T, N ;
	
	cin>>T;
	
	while(T--)
	{
		cin>>N;
		cin.ignore();
	
		map<string, int> m;
		for(int i=0; i<N; i++)
		{
			string s;
			
			getline(cin,s);
			
			int idx = s.find(' ');
			
			m[s.substr(idx + 1)]++;
			
		}
		
		int sum = 1;
		
		for (map<string, int>::iterator it = m.begin(); it != m.end(); ++it)
		{
			sum*= (it->second +1);		
		}
		
		cout<<sum -1<<endl;
	}
}
