#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int a = s.size() / 2;

if (s.size() % 2 == 0)
{
	for (int i = a-1,j=0; i <= a ; ++i,++j)
	{
		answer.push_back( s[i]);
	}
}
else
{
	answer = s[a];
}
	

    
    
    return answer;
}