#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    vector<int> ans;
vector<int> tem;

for (int i = 0; i < commands.size(); ++i)
{
	for (int j = 0; j < 3; ++j)
	{
		ans.push_back(commands[i][j]);
	}

	for (int k = ans.at(0)-1; k < ans.at(1); ++k)
	{
		
		tem.push_back(array.at(k));
	
	}
	sort(tem.begin(), tem.end());
	answer.push_back(tem.at(ans.at(2)-1));
    tem.clear(); ans.clear();
}
    
    
    return answer;
}