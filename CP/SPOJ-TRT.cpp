//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//vector<int> input;
//vector<vector<int>> dp;
//int Func(const vector<int> & vt, vector<vector<int>>& dp,  int lo ,int hi,int day)
//{
//	if (dp[lo][hi] != -1)
//		return dp[lo][hi];
//	if (lo == hi)
//		return (vt[lo] * day);
//	dp[lo][hi] = max(Func(vt, dp, lo + 1, hi, day + 1) + (day * vt[lo]), Func(vt, dp, lo, hi - 1, day + 1) + (day * vt[hi]));
//	return dp[lo][hi];
//}
//int main()
//{
//	int n, temp;
//	cin >> n;
//	dp.resize(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		input.push_back(temp);
//		dp[i].resize(n);
//		fill(dp[i].begin(), dp[i].end(), -1);
//	}
//	cout << Func(input, dp, 0, n-1, 1);
//}