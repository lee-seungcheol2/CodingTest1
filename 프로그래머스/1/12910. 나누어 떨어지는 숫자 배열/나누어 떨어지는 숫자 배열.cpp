#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for(int i=0;i<arr.size();++i){
        if(arr.at(i)%divisor==0)
            answer.push_back(arr.at(i));
        }
    if(answer.empty())
    { answer.push_back(-1);
    return answer;
    }
    for (int i = 0; i < answer.size(); ++i) {
	for (int j = i; j < answer.size(); ++j) {
		if (answer.at(i) > answer.at(j))
		{
			int buf = answer.at(i);
			answer.at(i) = answer.at(j);
			answer.at(j) = buf;
		}

	}
}
    
    
    return answer;
}