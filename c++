#include<iostream>
#include<string>
#include<cctype>
#include<sstream>
using namespace std;
bool isinvalidinteger(const string& s)
{
	if (s.empty())
		return false;
	size_t start = 0;
	if (s[0] == '-' || s[0] == '+') {
		if (s.length() == 1) return false; // 仅有符号的情况
		start = 1;
	}
	for (size_t i = start; i < s.length(); i++)
	{
		if (!isdigit(s[i]))
			return false;
	}
	return true;
}
int main()
{
	int sum = 0, positivesum = 0, negativesum = 0;
	int invalidcount = 0;
	string input;
	while (cin >> input)
	{
		
		if (!isinvalidinteger(input))
		{

			invalidcount++;
			continue;
		}
		istringstream iss(input);
		int num;
		iss >> num;
		if (num < -10000 || num>10000)
		{
			invalidcount++;
			continue;
		}
		sum += num;
		if (num > 0)
		{
			positivesum += num;
		}
		else if (num < 0)
		{
			negativesum += num;
		}
	}
	cout << sum << endl
		<< invalidcount << endl
		<< negativesum << endl
		<< positivesum << endl;
	return 0;

}
