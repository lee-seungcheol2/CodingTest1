#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int push=0;
    int max = m > n ? m : n;
    int min = m > n ? n : m;
    while(true) 
{
	push=max % min;

	if (push==0)
	{
		push = min;
		break;
	}
	else
	{
		max = min;
		min = push;
	}

}
    answer.push_back(push);
    answer.push_back((n*m)/push);
    return answer;
}