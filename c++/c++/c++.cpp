// c++.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    char c;
//    int n;
//    cin >> c >> n;
//
//    for (int i = 0; i < n; ++i) {
//        // 前导空格数
//        string spaces(n - 1 - i, ' ');
//        string chars;
//        // 构造字符部分，每个字符之间用空格隔开
//        if (i + 1 >= 1) {
//            chars += c;
//            for (int j = 1; j <= i; ++j) {
//                chars += ' ';
//                chars += c;
//            }
//        }
//        // 输出整行
//        cout << spaces << chars << endl;
//    }
//
//    return 0;
//}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
//#include<iostream>
//#include<algorithm>
//#include<sstream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> nums(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> nums[i];
//	}
//	if (cin.fail())
//	{
//		cout << "输入错误！" << endl;
//		return 1;
//	}
//	sort(nums.begin(), nums.end());
//	int diff = nums.back() - nums[0];
//	cout << diff << endl;
//	return 0;
//
//
//}
//#include<iostream>
//#include<algorithm>
//#include<sstream>
//#include<vector>
//#include<climits>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> nums(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> nums[i];
//	}
//	sort(nums.begin(), nums.end());
//	int mini_diff=INT_MAX;
//	for (int i = 1; i < n; ++i)
//	{
//		mini_diff = min(mini_diff, nums[i] - nums[i - 1]);
//	}
//	cout << mini_diff << endl;
//	return 0;
//
//}
//#include<iostream>
//#include<string>
//#include<sstream>
//#include<cstdlib>
//using namespace std;
//int main()
//{
//	string line;
//	int line_num = 1;
//	while (getline(cin, line))
//	{
//	istringstream iss(line);
//	string hex_num;
//	long line_sum = 0;
//	bool has_vaild_num = false;
//	while (iss >> hex_num)
//	{
//		long num = strtol(hex_num.c_str(), nullptr, 16);
//		 line_sum += num;
//		 has_vaild_num = true;
//	}
//	if (has_vaild_num)
//	{
//		cout << line_sum << endl;
//	}
//	else {
//		cout << "无效输入！" << endl;
//	}
//	line_num++;
//}
//	return 0;
//
//}
//#include<iostream>
//#include<string>
//#include<cctype>
//#include<sstream>
//using namespace std;
//bool isinvalidinteger(const string& s)
//{
//	if (s.empty())
//		return false;
//	size_t start = 0;
//	if (s[0] == '-' || s[0] == '+') {
//		if (s.length() == 1) return false; // 仅有符号的情况
//		start = 1;
//	}
//	for (size_t i = start; i < s.length(); i++)
//	{
//		if (!isdigit(s[i]))
//			return false;
//	}
//	return true;
//}
//int main()
//{
//	int sum = 0, positivesum = 0, negativesum = 0;
//	int invalidcount = 0;
//	string input;
//	while (cin >> input)
//	{
//		
//		if (!isinvalidinteger(input))
//		{
//
//			invalidcount++;
//			continue;
//		}
//		istringstream iss(input);
//		int num;
//		iss >> num;
//		if (num < -10000 || num>10000)
//		{
//			invalidcount++;
//			continue;
//		}
//		sum += num;
//		if (num > 0)
//		{
//			positivesum += num;
//		}
//		else if (num < 0)
//		{
//			negativesum += num;
//		}
//	}
//	cout << sum << endl
//		<< invalidcount << endl
//		<< negativesum << endl
//		<< positivesum << endl;
//	return 0;
//
//}
//#include<iostream>
//#include<set>
//
//using namespace std;
//int main()
//{
//	set<int>num_set;
//	for (int i = 0; i < 3; i++)
//	{
//		int num;
//		cin >> num;
//		num_set.insert(num);
//	}
//	if (!num_set.empty())
//	{
//		cout << *num_set.rbegin() << endl;
//	}
//	return 0;
//
//}
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string s;
//	int countJ=0, countO=0, countK=0, countE=0, countR=0;
//	while (getline(cin, s))
//	{
//		bool has_j = false, has_o = false, has_k = false, has_e = false, has_r = false;
//		for (char c : s)
//		{
//			if (c == 'j')
//				has_j = true;
//			else if (c == 'o')
//				has_o = true;
//			else if (c == 'k')
//				has_k = true;
//			else if (c == 'e')
//				has_e = true;
//			else if (c == 'r')
//				has_r = true;
//
//		}
//
//		if (has_j && has_o && has_k && has_e == 1 && has_r == 1)
//		{
//			cout << "YES" << "\n";
//		}
//		else
//		{
//			cout << "NO" << "\n";
//		}
//	}
//	return 0;
//
//}
// 
//1.计算器
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b;
//	char s;
//	cin >> a >> b >> s;
//	if (s == '+')
//		cout << a + b << '\n';
//	if (s == '-')
//		cout << a - b << '\n';
//	if (s == '*')
//		cout << a * b << '\n';
//	if (s == '/')
//		cout << a / b << '\n';
//	return 0;
//}
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
    while (getline(cin, s))
	{
		bool has_j = false, has_o = false, has_k = false, has_e = false, has_r = false;
		for (char c : s)
		{
			if (c == 'j')
				has_j = true;
			 else if (c == 'o')
				has_o = true;
			 else if (c == 'k')
				has_k = true;
			 else if (c == 'e')
				has_e = true;
			else if (c == 'r')
				has_r = true;
		}
		if (has_j && has_o && has_k && has_e && has_r)
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}
	return 0;

}
