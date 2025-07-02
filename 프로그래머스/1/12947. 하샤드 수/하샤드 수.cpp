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
		a+=(y % 10);
		y /= 10;
	}
	
	
	answer = x % a == 0 ? true : false;

	return answer;
}