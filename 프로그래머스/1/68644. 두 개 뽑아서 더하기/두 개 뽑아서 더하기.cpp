#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    bool b = true;
for (int i = 0; i < numbers.size(); ++i)
{
	
	for (int j = 0; j < numbers.size(); ++j)
	{
		if(i==j)   //같은 인덱스 컨티뉴
		{
			continue;                  
		}
		for (int k = 0; k < answer.size(); ++k)    //pushback 하기전 중복 검사
		{
			b = true;
			int check = numbers.at(i) + numbers.at(j);
			if ( check == answer.at(k))
			{
				b = false;
				break;
			}
					
		}
		if(b)
			answer.push_back(numbers.at(i) + numbers.at(j));
	}
	
}
sort(answer.begin(), answer.end());
    return answer;
}