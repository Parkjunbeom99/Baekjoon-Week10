#include<bits/stdc++.h>

using namespace std;


long C ;

long long go(long long a, long long b)
{
    if(b == 1)
    {
        return a % C;
    }

    long long ret = go(a, b / 2);

    ret = (ret * ret) % C; 

    if(b % 2)
    {
        ret = (ret * a) % C;
    }

    return ret;
}


int main()
{
	long long A,B;
	
	cin>>A>>B>>C;
	
	cout<<go(A,B)<<endl;
}
