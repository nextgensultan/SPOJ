//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//void Func()
//{
//	int row, col;
//	cin >> row >> col;
//	vector<vector<int>> input(row, vector<int>(col, 0));
//	vector<vector<int>> dp(row + 1, vector<int>(col + 2, 0));
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			cin >> input[i][j];
//			dp[i + 1][j + 1] = max (max(dp[i][j], dp[i][j + 1]), dp[i][j + 2]) + input[i][j];
//		}
//	}
//	cout << *(max_element(dp[row].begin(), dp[row].end())) << endl;
//}
//int main()
//{
//	int n = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		Func();
//}