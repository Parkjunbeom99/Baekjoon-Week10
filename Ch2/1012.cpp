#include <bits/stdc++.h>

using namespace std;

int arr[51][51];

int visited[51][51];

int dy[] ={1, 0, -1, 0};
int dx[] ={0,1,0,-1};

int T, N, M, K;

void BFS(int sy, int sx)
{
	visited[sy][sx] = 1;
	for(int i =0; i<4; i++)
	{
		int ny = sy + dy[i];
		int nx = sx + dx[i];
		
		if(ny < 0 || ny >= N || nx < 0 || nx>=M) continue;
		
		if(arr[ny][nx] == 0 || visited[ny][nx]) continue;
		
		BFS(ny,nx);
		
	}
}

int main()
{
	
	
	cin>>T;
	
	while(T--)
	{
		cin>>N>>M>>K;
		
		fill(&arr[0][0], &arr[0][0]+51*51, 0);
		fill(&visited[0][0], &visited[0][0] + 51*51, 0);
		
		for(int i=0; i<K; i++)
		{
			int y, x;
			cin>>y>>x;
			arr[y][x] = 1; 
		}
		
		int cnt = 0; 
		for(int i=0; i<N; i++)
		{
			for(int j= 0; j<M;j++)
			{
				if(arr[i][j] ==1 && !visited[i][j])
				{
					BFS(i,j);		
					cnt++;
				}		
			}
		}
		
		cout<<cnt<<endl;		
	}
	
}
