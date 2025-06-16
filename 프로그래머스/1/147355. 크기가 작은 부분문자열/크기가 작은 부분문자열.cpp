#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
   string c = "";
    
int l = p.length();
int cnt = 0;
for (int i = 0; i < t.length()-l+1; ++i)
{
	for (int j = i; j < i + l; ++j)
	{
		c += t[j];
	}
	if (p >= c)
		++cnt;
	c = "";
}
    return cnt;
}