#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int sol(const vector<string>& keymap,const char& ch);

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    int getrnt=0;
    for (int i=0;i<targets.size();++i)
    {
        int tmp=0;
        int getrnt=0;
        for(char ch:targets[i])
        {
            getrnt=sol(keymap,ch);
            if(getrnt==-1)
            {
                answer.push_back(getrnt);
                break;
            }
            tmp+=getrnt;
        }
        if(getrnt!=-1)
        answer.push_back(tmp);
        
    }
    
    return answer;
}

int sol(const vector<string>& keymap,const char& ch)
{   
    vector<int> sto;     //키맵이 몇개인지 모르는 상황이니까 vector를 이용함
    int cnt=0;
    int ksize=keymap.size();
    for(int i=0;i<ksize;++i)
    {
        for(char c:keymap[i])
        {
            cnt++;
            if(ch==c)
            {
                sto.push_back(cnt);
                cnt=0;
                break;
            }
        }
        cnt=0;
        
    }
    if(sto.empty())
        return -1;
    else
    {
        sort(sto.begin(),sto.end());
    }
    return sto[0];
     //비교는 키맵을 전체 다 나와서  키맵중 어떤키맵에 더 빨리 나타났는지 최소값 소트 
}