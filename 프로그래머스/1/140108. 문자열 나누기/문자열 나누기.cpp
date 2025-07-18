#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int o=0;
    int x=0;
    int n=0;
    char temp = s[0];
    
    for(char c:s)
    {
        n++;
          //다음 비교 문자 구하기
        if(temp==c) o++;
        else x++;

        if(o==x)
        {
            answer++;   
           
            o=0;
            x=0;
            temp=s[n+1];
        }
     }
    if(o!=0 || x!=0)
        answer++;
    
    
    return answer;
}