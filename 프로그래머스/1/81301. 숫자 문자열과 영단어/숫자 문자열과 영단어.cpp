#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    string c = "";
string b = "";

for(int i=0;i<s.size();++i)
{
	if ( 58 > s[i] )
		c += s[i];
	else    //3일때
	{
		for (int j = i; j < i+2; ++j)
		{
			b += s[j];
		}
		if (b == "ze")
		{
			c += '0';
			i += 3;
			b = "";
		}
		else if (b == "on")
		{
			c += '1';
			i += 2;
			b = "";
		}
		else if (b == "tw")
		{
			c += '2';
			i += 2;
			b = "";
		}
		else if (b == "th")
		{
			c += '3';
			i += 4;
			b = "";
		}
		else if (b == "fo")
		{
			c += '4';
			i += 3;
			b = "";
		}
		else if (b == "fi")
		{
			c += '5';
			i += 3;
			b = "";
		}
		else if (b == "si")
		{
			c += '6';
			i += 2;
			b = "";
		}
		else if (b == "se")
		{
			c += '7';
			i += 4;
			b = "";
		}
		else if (b == "ei")
		{
			c += '8';
			i += 4;
			b = "";
		}
		else if (b == "ni")
		{
			c += '9';
			i += 3;
			b = "";
		}
	}

}
int a = 0;
for (int i = 0; i < c.length(); ++i)
{
	a = a * 10 + (c[i]-48);
}
    return a;
}