#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    int a=0;
    while(a<=n-1)
    {
        if(a%2==0)
            answer+="수";
        else
            answer+="박";
        a++;
    }
    
    
    return answer;
}