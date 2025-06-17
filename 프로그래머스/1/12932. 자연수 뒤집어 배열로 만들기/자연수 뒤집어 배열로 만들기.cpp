#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
  int chrl=n%10;
  long long s=n;
    for(int i=1; i<=10; ++i)
    {
        if(s)
        answer.push_back(s%10);
        s/=10;
    }
  
    
    return answer;
}