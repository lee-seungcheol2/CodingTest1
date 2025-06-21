#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int b=0;
    for (int i = 0; i < s.length(); ++i)
{
	
	for (int j = 0; j < i; ++j)
	{
		if (s[i] == s[j])
		{
			b = j+1;
		}
		
	}
	if (b == 0)
	{
		answer.push_back(-1);
	}
	else
		answer.push_back(i+1 - b);
    b=0;
    }
    return answer;

}