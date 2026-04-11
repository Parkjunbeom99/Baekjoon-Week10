#include<bits/stdc++.h>

using namespace std;

int arr[101][101];
int visited[101][101];

int dy[] = {1,0, -1, 0};
int dx[] = {0,1,0 ,-1};
int main()
{
	int N , M ;
	
	cin>>N >> M;
	
	for(int i =0; i<N; i++)
	{
		string s ;
		
		cin>>s;
		
		for(int j=0; j<s.size(); j++)
		{
			arr[i][j] = s[j] - '0';
			
		}
	}
	
	//BFS

	visited[0][0]=1;	
	queue< pair<int,int> >q;
	q.push({0,0});
	
	while(!q.empty())
	{
		pair<int,int> cur= q.front();
		q.pop();
			
		for(int i=0; i<4; i++)
		{
			int ny = cur.first + dy[i];	
			int nx = cur.second + dx[i];
			
			if(ny <0 || ny >= N || nx < 0 || nx >= M)continue;
			
			if(visited[ny][nx] || arr[ny][nx] == 0)continue;
			
			visited[ny][nx] =  visited[cur.first][cur.second] +1;
			
			q.push({ny,nx});
			
		}	
	
	}
	
	cout<<visited[N-1][M-1]<<endl;

	
}
