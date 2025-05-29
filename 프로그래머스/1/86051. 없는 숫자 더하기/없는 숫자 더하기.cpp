#include <string>
#include <vector>

using namespace std;
int solution(vector<int> numbers) {
	int answer = 0;
	int Com[10] = { 0 };
	for (int i = 0; i < 10;++i)
	{
		Com[i] = i;
		
	}
	for (int i = 0; i < numbers.size(); ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			if (numbers[i] == Com[j])
				Com[j] = 0;
		}

	}
	for (int i = 0; i < 10; ++i)
	{
		
		answer += Com[i];
	}

	return answer;
}


