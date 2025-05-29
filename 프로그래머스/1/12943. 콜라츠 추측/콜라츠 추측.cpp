#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
   int count=0;
    long long snum=num;
    
    if(snum==1) return answer;
    
    while(snum>1){
        if(snum%2==0){
            snum=snum/2;
            ++count;
            }
        else{
            snum=snum*3+1;
            ++count;
        }
       
    }
  
            answer=count;
      
    if(count>=500){
            answer=-1;
        }
       
    
    return answer;
}