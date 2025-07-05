#include <string>
#include <vector>
#include <math.h>
using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    int cnt=0;
    for(int i=1;i<=number;i++)            // 1부터 기사 수
    {
        for(int j=1;j<=sqrt(i);j++)     //기사수 당 약수 구하기
        {
            if(i%j==0)           
            {    cnt++;
            if(j!=sqrt(i))
                cnt++;
            }
            if(cnt>limit)
            { cnt=power;
            break;}
        }
        //if(cnt>limit)       //제한수치 보다 크면 power를 대신
           // cnt=power;
        
        answer+=cnt;         
        cnt=0;            //약수 카운트 0으로 하고  다음i 약수개수 구하기
    }
    
    return answer;
}