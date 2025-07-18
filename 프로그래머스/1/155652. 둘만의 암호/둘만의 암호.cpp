#include <string>
#include <vector>

using namespace std;

bool sol(char ch,const string& skip)
{
    for(char c:skip)
    {
        if(ch==c)
            return false;
    }
    return true;
}

string solution(string s, string skip, int index) {
    string answer = "";
    
for(char ch:s)
{
    int steps=index;
    char cur=ch;
    while(steps>0)
    {
        cur++;
        if(cur>'z')
            cur='a';
        if(sol(cur,skip))
            steps--;
        
    }
    answer+=cur;
}
    
    
    return answer;
}