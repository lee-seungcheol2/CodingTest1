#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    long long s=0;
    for(long long i=1,j=1;i<=n;++i,++j)
    {
        if(i*j==n)
        {
            s=i;
            break;
        }
        
    }
    
    answer= (s==false)?-1:(s+1)*(s+1);
    
    
    
    return answer;
}