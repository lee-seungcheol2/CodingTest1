#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    int answer = 0;
    
    for(char ch:control)
    {
        if(ch=='w')
            n++;
        else if(ch=='s')
            n--;
        else if(ch=='d')
            n+=10;
        else
            n-=10;
    }
    
    
    return answer=n;
}