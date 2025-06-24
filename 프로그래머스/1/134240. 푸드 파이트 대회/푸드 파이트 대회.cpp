#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    for (int i = 0; i < food.size(); ++i)
{
	for (int j = 0; j <food.at(i)/2; ++j)
	{
		answer += i+48;
	}
}
answer += 48;
for (int i = food.size()-1; i >0; --i)
{
	for (int j = food.at(i) / 2; j >0 ; --j)
	{
		answer += i + 48;
	}
}
	
    return answer;
}