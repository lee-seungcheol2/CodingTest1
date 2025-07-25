#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    vector<int> X;
    vector<int> X1;
vector<int> Y;
int wallsize = wallpaper.size();
for (int i = 0; i < wallsize; ++i)
{   
    X.clear();
	for (int j = 0; j < wallpaper[i].size(); ++j)
	{
		if (wallpaper[i][j] == '#')
		{
			X.push_back(j);
            X1.push_back(j);
		}
		
	}
	if (!X.empty())
		Y.push_back(i);
 
}

sort(X1.begin(), X1.end());
sort(Y.begin(), Y.end());
answer.push_back(Y[0]);
answer.push_back(X1[0]);
answer.push_back(Y.back() + 1);
answer.push_back(X1.back() + 1);
    return answer;
}