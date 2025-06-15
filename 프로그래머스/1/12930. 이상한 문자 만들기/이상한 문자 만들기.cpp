#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int jud=2;
    for (int i = 0; i < s.length(); ++i)
    {
        //제한사항 공백 건너뛰고 홀짝 초기화
	    if (s[i] == ' ')
	    {
		jud = 2;
        continue;
	    }
        // 입력이 소문자 고 짝수면 대문자로
        if(s[i]>96)
        {
            if (jud % 2 == 0)
	        {
		    s[i] = s[i] - 32;
	        }
        }
        // 입력이 대문자 고 홀수면 소문자로
        else
        {
        if(jud%2!=0)
        {
            s[i]=s[i]+32;
        }
        }
	++jud;
	    

}
    
    return answer=s;
}