#include <bits/stdc++.h>

using namespace std;

int arr[26];

int main()
{
	string s;
	
	string ret;
	
	
	cin>>s;
	
	for(int i=0; i<s.size(); i++)
	{
		arr[s[i] -'A']++;
	}	
	
	bool flag= false;
	
	string mid = "";
	string left = "";
	
	for(int i=0; i<26; i++)
	{
		if(arr[i] %2)
		{
			if(flag)
			{
				cout<<"I'm Sorry Hansoo"<<endl;
				return 0;
			}
			else
			{
				flag =true;
				mid = char(i+ 'A');
			}
		}
		
		
	}
	
	for(int i=0; i<26;i++)
	{
		for(int j =0 ;j < arr[i]/2;j++)
		{
			left += char(i + 'A');
		}
	}
	
	ret += left;
	
	if(mid.size())
	{
		ret += mid;
	}
	
	reverse(left.begin(), left.end());
	
	ret += left;
	
	cout<<ret<<endl;
	

	
	
	
	
	
}
