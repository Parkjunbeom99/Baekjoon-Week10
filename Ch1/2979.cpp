#include<bits/stdc++.h>

using namespace std;

int arr[101];


int main()
{
	int A,B,C;
	
	cin>>A>>B>>C;
	
	for(int i=0; i<3;i++)
	{
		int a, b;
		cin>>a>>b;
		
		for(int i =a ; i<b; i++)
		{
			arr[i]++;
		}	
	}
	
	int sum =0;
	for(int i =1; i<=100; i++)
	{
		if(arr[i] == 1 )
		{
			sum += A;	
		}	
		else if( arr[i] == 2)
		{
			sum += B*2;
		}
		else if (arr[i] == 3)
		{
			sum += C*3;
		}
	}	
	cout<<sum<<endl;
	
}
