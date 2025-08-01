#include <string>
#include <vector>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    int s = 0;
    int hap2 = 0;
    vector<int> ss;
    char ter = ' ';
today.push_back('.');
for (int i = 0; i < today.size(); ++i)
{
    if (today[i] >= '0' && today[i] <= '9')
    {
        s = s * 10;
        s += (today[i] - 48);
    }
    else
    {
        ss.push_back(s);
        s = 0;
        continue;
    }
}
s = 0;
int hap = (ss[0] * 336) + (ss[1] * 28) + ss[2];
ss.clear();

for (int i = 0; i < privacies.size(); ++i)
{
    ter = privacies[i].back();

    for (int j = 0; j < privacies[i].size(); ++j)
    {

        if (privacies[i][j] >= '0' && privacies[i][j] <= '9')
        {
            s = s * 10;
            s += (privacies[i][j] - 48);
        }
        else
        {
            if (s == 0)
                break;

            ss.push_back(s);
            s = 0;
            continue;
        }
    }
    s = 0;

    for (int k = 0; k < terms.size(); ++k)
    {
        if (terms[k].front() == ter)
        {
            for (int r = 0; r < terms[k].size(); ++r)
            {
                if (terms[k][r] >= '0' && terms[k][r] <= '9')
                {
                    s = s * 10;
                    s += (terms[k][r] - 48);
                }
                else
                    continue;
            }
            break;
        }
        
        //tem = terms[k].back() - 48;
        
    }

    if (ss.empty())
        break;
    hap2 = (ss[0] * 336) + (ss[1] * 28) + ss[2] + (s * 28);
    s = 0;
    if (hap2 <= hap)
    {
        answer.push_back(i + 1);
    }
    ss.clear();
    hap2 = 0;
}
    
    
    
    return answer;
}