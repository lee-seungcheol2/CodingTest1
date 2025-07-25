#include <string>
#include <vector>

using namespace std;

int IndexFind(const char TypeEle)
{
	string s="RTCFJMAN" ;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == TypeEle)
			return i;
		
		
	}
	return -1;  

}

string solution(vector<string> survey, vector<int> choices) {
    
string s = "RTCFJMAN";
string answer = "";
vector<int> type(8, 0);
int choiceValue[] = {3,2,1,0,1,2,3};
for (int i = 0; i < survey.size(); ++i)
{
	if (choices[i] < 4)
		type[IndexFind(survey[i][0])] += choiceValue[choices[i] - 1];    //입력오류로 인덱스 벗어나면 메모리오염 위험 있으니 
	else if (choices[i] == 4)
		continue;
	else type[IndexFind(survey[i][1])] += choiceValue[choices[i] - 1];		//예외처리 해야함 
	 
}
	

int size = type.size()-2;
for (int i = 0; i <= size;i+=2)
{
	if (type[i] == type[i + 1])
		answer.push_back(s[i]);

	if (type[i] > type[i + 1])
		answer.push_back(s[i]);
	else if (type[i] < type[i + 1])
		answer.push_back(s[i + 1]);


}
    
    
    
    return answer;
}