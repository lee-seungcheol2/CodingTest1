#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> ans;
    int i = 0;
    int b = 0;
    int m = 3;
    int j=0;
    while (n>0) {
	b = n % 3;
	n = n / 3;
	ans.push_back(b);
	
	++i;
	}
    for (int i = (ans.size() - 1); i >= 0; --i)
{
	
	
	if (j > 0)
	{
		answer+=(ans.at(i) * m);
		m *= 3;
	}
	else
		answer = answer + ans.at(i);
	++j;
		

}
    
    
    return answer;
}