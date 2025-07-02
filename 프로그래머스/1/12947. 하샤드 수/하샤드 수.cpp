#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
	bool answer = true;
	int a=0;
	int y = x;
	vector<int> na = {};
	while (y)
	{
		na.push_back(y % 10);
		y /= 10;
	}
	for (int i = 0; i < na.size(); ++i)
	{
		a += na.at(i);
	}
	answer = x % a == 0 ? true : false;

	return answer;
}