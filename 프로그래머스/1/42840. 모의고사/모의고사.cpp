#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> arr1 = { 1,2,3,4,5 };
vector<int> arr2 = { 2,1,2,3,2,4,2,5 };
vector<int> arr3 = { 3,3,1,1,2,2,4,4,5,5 };
vector<int> arr4 = {};
vector<int> arr5 = {};
vector<int> arr6 = {};
int a = 0;
int b = 0;
int c = 0;
int j=0, k=0, m=0;


for (int i = 0; i < answers.size(); ++i)    //입력 들어오는 답안지 사이즈에 맞게 배열 생성
{
	arr4.push_back(arr1.at(j));
	j = (j + 1) % arr1.size();

	arr5.push_back(arr2.at(k));
	k = (k + 1) % arr2.size();

	arr6.push_back(arr3.at(m));
	m = (m + 1) % arr3.size();
}

for (int i = 0; i < answers.size(); ++i)
{
	if (answers.at(i) == arr4.at(i))   //1
	{
		a++;		//정답 맞추면 카운트 하나씩 
	}
	if (answers.at(i) == arr5.at(i))  //2
	{
		b++;   
	}
	if (answers.at(i) == arr6.at(i))  //3
	{
		c++;
	}
}
if (a == b && b == c)
{
	answer.push_back(1);
	answer.push_back(2);
	answer.push_back(3);
}
else if (a == b && a > c)
{
	answer.push_back(1);
	answer.push_back(2);
}
else if (b == c && b > a)
{
	answer.push_back(2);
	answer.push_back(3);
}
    else if(a==c && a>b)
    {
        answer.push_back(1);
        answer.push_back(3);
    }
else
{
	if (a > b && a > c)
	{
		answer.push_back(1);
	}
	else if (b > c)
	{
		answer.push_back(2);
	}
	else 
		answer.push_back(3);
}

    
    
    return answer;
}