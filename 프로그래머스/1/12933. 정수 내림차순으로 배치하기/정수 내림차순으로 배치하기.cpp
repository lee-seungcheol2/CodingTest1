#include <string>
#include <vector>
using namespace std;
long long solution(long long n) {
	long long answer = 0;
	vector<long long> na = {};
	while (n)
	{
		na.push_back(n % 10);
		n /= 10;
	}

	for (int i = 0; i < na.size()-1; ++i)
	{
		for (int j = 0; j < na.size() - 1-i; ++j)
		{
			if (na[j] < na[j + 1])
			{
				long long temp = na[j + 1];
				na[j + 1] = na[j];
				na[j] = temp;
			}
		}
	}
	long long ret = 0;
	for (int i = 0; i < na.size(); ++i)
	{
		ret = (ret * 10) + na.at(i);
	}


	return ret;
}
