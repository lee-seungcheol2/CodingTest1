#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int idx=s.length()/2;
    if(s.length()%2==0)
    {
    answer+=s[idx-1];
    answer+=s[idx];
    }
    else
        answer=s[idx];
    
    return answer;
}