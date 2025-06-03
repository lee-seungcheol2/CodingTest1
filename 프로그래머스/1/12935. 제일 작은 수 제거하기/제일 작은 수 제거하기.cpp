#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    vector<int> psuhpush = arr;
    if (arr.size() < 2)
{
	answer = { -1 };
	return answer;
}

for (int i = 0; i < arr.size(); ++i)
{
	for (int j = i + 1; j < arr.size(); ++j)
	{
		if (arr.at(i) > arr.at(j))
		{
			int Buf = arr.at(i);
			arr.at(i) = arr.at(j);
			arr.at(j) = Buf;
		}
	}
}
for (int i = 0; i < psuhpush.size(); ++i)
{
	if (psuhpush.at(i) == arr.at(0))
		continue;

	answer.push_back(psuhpush.at(i));
}
    
    
    return answer;
}