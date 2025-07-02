#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    
    sort(score.begin(),score.end(),greater<int>());
	//(3 3 2 2) (1 1 1 1) 
	int a = m;  //m=4
    if(m>score.size())
        return 0;
    
	while (true)
	{
       
		answer += score.at(a - 1) * m ;
		
		 if (score.size() - a < m)
			break;
		a += m;
	}

    
    return answer;
}