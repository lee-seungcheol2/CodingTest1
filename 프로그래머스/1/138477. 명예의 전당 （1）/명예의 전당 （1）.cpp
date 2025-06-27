#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> ans;
    
    for (int i = 0; i < score.size(); ++i)
{
	if (i >= k)
	{
		if (score.at(i) > ans.at(ans.size() - 1))
		{
			ans.pop_back();
			ans.push_back(score.at(i));
			sort(ans.begin(), ans.end(), greater<int>());
			answer.push_back(ans.at(ans.size() - 1));
		}
		else 
		{
			answer.push_back(ans.at(ans.size() - 1));
		}
	}
	else
	{
		ans.push_back(score.at(i));
		sort(ans.begin(), ans.end(), greater<int>());
		answer.push_back(ans.at(ans.size() - 1));
	}

		
}
    
    return answer;
}