#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    vector<int> temp;
int lowC = 0;
int hiC = 0;
for (int i = 0; i < lottos.size(); ++i)
{
    if (lottos[i] == 0)
    {
        hiC++;
        continue;
    }
    for (int j = 0; j < win_nums.size(); ++j)
    {
        if (lottos[i] == win_nums[j])
        {
            lowC++;
            hiC++;
        }
    }

}
temp.push_back(hiC);
temp.push_back(lowC);
for (int i = 0; i < 2; i++)
{
    if (temp[i] == 6)
        answer.push_back(1);
    else if (temp[i] == 5)
        answer.push_back(2);
    else if (temp[i] == 4)
        answer.push_back(3);
    else if (temp[i] == 3)
        answer.push_back(4);
    else if (temp[i] == 2)
        answer.push_back(5);
    else
        answer.push_back(6);
}

return answer;

}
    

   