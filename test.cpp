#include <bits/stdc++.h>
using namespace std;

void dfs(int i, int j, vector<vector<int>> &vis)
{
   vis[i][j] = 1;
   if (i - 1 >= 0 && vis[i - 1][j] == 0)
      dfs(i - 1, j, vis);
   if (j - 1 >= 0 && vis[i][j - 1] == 0)
      dfs(i, j - 1, vis);
   if (i + 1 < vis.size() && vis[i + 1][j] == 0)
      dfs(i + 1, j, vis);
   if (j + 1 < vis[0].size() && vis[i][j + 1] == 0)
      dfs(i, j + 1, vis);
}

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      vector<string> arr(16);
      for (int i = 0; i < 16; i++)
      {
         cin >> arr[i];
      }
      vector<vector<int>> vis(16, vector<int>(16, 0));
      pair<int, int> start, end;
      for (int i = 0; i < 16; i++)
      {
         for (int j = 0; j < 16; j++)
         {
            if (arr[i][j] == '2')
            {
               start.first = i;
               start.second = j;
            }
            if (arr[i][j] == '3')
            {
               end.first = i;
               end.second = j;
            }
            if (arr[i][j] == '1')
            {
               vis[i][j] = 1;
            }
         }
      }
      for (int i = 0; i < 1; i++)
      {
         for (int j = 0; j < 16; j++)
         {
            if (vis[i][j] == '0')
            {
               dfs(i, j, vis);
               if (vis[start.first][start.second] && !vis[end.first][end.second])
               {
                  cout << '0' << endl;
                  break;
               }
               if (!vis[start.first][start.second] && vis[end.first][end.second])
               {
                  cout << '0' << endl;
                  break;
               }
               if (vis[start.first][start.second] && vis[end.first][end.second])
               {
                  cout << '1' << endl;
                  break;
               }
            }
         }
      }
   }
}