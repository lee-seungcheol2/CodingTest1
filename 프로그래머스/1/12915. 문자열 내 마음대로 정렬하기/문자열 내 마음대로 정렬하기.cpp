#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    string temp;
    for (int i = 0; i < strings.size(); ++i)
{
	for(int j=i+1; j<strings.size();++j)
	{
		if (strings.at(i)[n] > strings.at(j)[n])
		{
			 temp = strings.at(i);
			strings.at(i) = strings.at(j);
			strings.at(j) = temp;
		}
        else if (strings.at(i)[n] == strings.at(j)[n])
        {
            if(strings.at(i) > strings.at(j))
            {temp = strings.at(i);
			strings.at(i) = strings.at(j);
			strings.at(j) = temp;
        }
        }
	}
}
    return answer=strings;
}