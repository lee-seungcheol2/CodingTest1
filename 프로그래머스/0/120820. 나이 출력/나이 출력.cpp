#include <string>
#include <vector>

using namespace std;

int solution(int age) {
    int answer = 0;
    if(0<age && age<=120)
    answer= (2022-age)+1;
    
    
    return answer;
}