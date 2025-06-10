#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    for (int i = 0; i < s.size(); ++i)
{
	for (int j = i + 1; j < s.size(); ++j)
	{
		if (s[i] < s[j])
		{
			int buf = s[i];
			s[i] = s[j];
			s[j] = buf;
		}
		}
}
answer = s;
    
    return answer;
}