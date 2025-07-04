#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int cnt=1;
    int b=section.at(0);
    
    for(int i=0; i<section.size();++i)
    {
        if(b+m<=section.at(i))
        {
            b=section.at(i);
            cnt++;
        }
        else
            continue;
    }
    
    return cnt;
}