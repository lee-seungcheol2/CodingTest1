#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    
    for(int i=0;i<signs.size();++i)
    {
        if(signs.at(i))
            absolutes[i]=absolutes.at(i)*1;
        else
            absolutes[i]=absolutes.at(i)*-1;    
    }
    
    for(int i=0;i<absolutes.size();++i)
    {
        answer+=absolutes.at(i);
    }
        
    return answer;
}