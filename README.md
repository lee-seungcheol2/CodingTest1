# CodingTest1
This is an auto push repository for Baekjoon Online Judge created with [BaekjoonHub](https://github.com/BaekjoonHub/BaekjoonHub).
#include <string>
#include <vector>
#include <iostream>
using namespace std;
//과제1
int Sum(vector<int> arr)
{
	int hap = 0;
	for (int i = 0; i < arr.size(); ++i)
	{
		hap += arr.at(i);
	}
	return hap;
}
int Avg(vector<int> arr)
{
	int hap = 0;
	for (int i = 0; i < arr.size(); ++i)
	{
		hap += arr.at(i);

	}
	hap = hap / arr.size();
	return hap;
}

int main(void)
{
	int ansAvg = 0;
	int answer = 0;
	int n, x;
	vector<int> arr;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> x;
		arr.push_back(x);
	}
	answer = Sum(arr);
	ansAvg = Avg(arr);
	cout << answer << endl << ansAvg;

}
//과제1
