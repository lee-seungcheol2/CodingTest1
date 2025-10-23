#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int a=0;
    int b=0;
    
    for(int i:num_list)
    {
        if(i%2!=0)
        {
             a=a*10;
             a+=i;
        }
        else
        {
             b=b*10;
            b+=i;
        }
            
    }
    
    
    return answer=a+b;
}