#include<bits/stdc++.h>

using namespace std;

int arr[26];

int main()
{
	
	int N; 
	cin>>N;
	
	
	for(int i =0; i<N; i++)
	{
		string s ;
		cin>>s;
		
		arr[s[0]- 'a']++;		
	}	
	
	bool flag =false;
	
	for(int i =0 ; i<26;i ++)
	{
		if(arr[i] >= 5 )
		{
			cout<<(char)(i +'a');
			flag = true;
		}
	}
	
	if(!flag)
	{
		cout<<"PREDAJA"<<endl;
	}
}
