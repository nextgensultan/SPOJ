//// Online C++ compiler to run C++ program online
//#include <iostream>
//#include<algorithm>
//using namespace std;
//int main() {
//    string str;
//    int cnt = 1;
//    while (cin >> str)
//    {
//        int count = 0, left = 0, right = 0;
//        if (str[0] == '-')
//            break;
//        for (auto i : str)
//
//        {
//            if (i == '}')
//                right++;
//
//            if (i == '{') {
//                if (right > left)
//                {
//                    count += (right - left) / 2;
//                    right = left = 0;
//                }
//                left++;
//            }
//        }
//        count += (left - right);
//        cout << cnt << ". " << count << endl;
//        cnt++;
//    }
//    return 0;
//}