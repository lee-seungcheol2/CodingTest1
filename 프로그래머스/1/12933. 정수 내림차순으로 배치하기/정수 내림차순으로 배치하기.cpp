#include <string>
#include <vector>
#include <iostream>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    int qu=1;
    vector<int> vArray;
    
    for(int i=0;i<10;++i)
    {
        if(n)
        {
            vArray.push_back(n%10);
            n/=10;
        }
    }
    for (int i = 0; i < vArray.size(); ++i)
{
	
	for (int j = i; j < vArray.size(); ++j)
	{ 
		if (vArray[j] > vArray[i])
		{
			int buf = vArray[i];
			vArray[i] = vArray[j];
			vArray[j] = buf;
		}
	}
	
}
  for(int i=1; i<vArray.size();++i)
	qu *= 10;
    
    for (int i = 0; i < vArray.size(); ++i)
{
	answer += (vArray[i] * qu);
	qu /= 10;
}
    
    return answer;
}