#include<iostream>
#include<vector>
#include<algorithm>
#include <cstring>
using namespace std;

int func(char* a, char* b)
{
    int n = strlen(a), m = strlen(b);
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for (int i = 0; i <= n; i++)
        dp[i][0] = i;
    for (int i = 0; i <= m; i++)
        dp[0][i] = i;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
                dp[i + 1][j + 1] = dp[i][j];
            else
                dp[i + 1][j + 1] = min(min(dp[i][j], dp[i + 1][j]), dp[i][j + 1]) + 1;
        }
    }
    return dp[n][m];
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char a[2001], b[2001];
        scanf("%s%s", a, b);
        printf("%d\n", func(a, b));
    }
    return 0;
}
