#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int buf=n;
    for(int x=n;x>=1;--x)
    {
        if(n%x==1)
            buf=(x<buf)?x:buf;
    }
    answer=buf;
    return answer;
}