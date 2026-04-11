#include <bits/stdc++.h>
using namespace std;

int arr[101][101];
int visited[101][101];

int dy[] = {1, 0, -1, 0};
int dx[] = {0, 1, 0, -1};

int N;

void DFS(int y, int x, int height)
{
    visited[y][x] = 1;

    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || nx < 0 || ny >= N || nx >= N) continue;
        if (visited[ny][nx]) continue;
        if (arr[ny][nx] <= height) continue;

        DFS(ny, nx, height);
    }
}

int main()
{
    cin >> N;

    int max_h = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
            max_h = max(max_h, arr[i][j]);
        }
    }

    int max_cnt = 0;

    for (int h = 0; h <= max_h; h++)
    {
        
        fill(&visited[0][0], &visited[0][0] + 101 * 101, 0);

        int cnt = 0;

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (arr[i][j] > h && !visited[i][j])
                {
                    DFS(i, j, h);
                    cnt++;
                }
            }
        }

        max_cnt = max(max_cnt, cnt);
    }

    cout << max_cnt << '\n';
}
