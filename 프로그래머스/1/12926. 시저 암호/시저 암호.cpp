#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for(int i=0;i<s.length();++i)
    {
        if(s[i]==' ')
            continue;
        else if(s[i]<91)
        {
            for(int j=0;j<n;++j)
            {
                ++s[i];
                if(s[i]>90)
                    s[i]=65;
            }
        }
        else
        {
            for(int j=0;j<n;++j)
            {
                ++s[i];
                if(s[i]>122)
                    s[i]=97;
            }
        }
    }
    
    return answer=s;
}