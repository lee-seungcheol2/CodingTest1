#include <string>
#include <vector>

using namespace std;

int sol(int n)
{
    int ret=1;
    while(n)
    {
        ret*=10;
        n/=10;
    }
    return ret;
}



int solution(int a, int b) {
    int answer = 0;
    answer=a*sol(b)+b>=2*a*b?a*sol(b)+b:2*a*b;
    
    
    
    
    return answer;
    
}