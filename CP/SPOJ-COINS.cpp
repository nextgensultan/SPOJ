#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
long long fun(map <long long, long long>& dp, long long n)
{
    if (dp.find(n) != dp.end())
        return dp[n];
    if (n < 12)
    {
        dp[n] = n;
        return dp[n];
    }
    dp[n] = max(n, fun(dp, n / 2) + fun(dp, n / 3) + fun(dp, n / 4));
    return dp[n];
}
int main()
{
    map<long long, long long> dp;
    long long n = 0;
    while (cin >> n)
    {
        fun(dp, n);
        cout << dp[n] << endl;
    }
}