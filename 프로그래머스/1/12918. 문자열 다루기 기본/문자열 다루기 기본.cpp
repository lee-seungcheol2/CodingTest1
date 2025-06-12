#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    if(s.length()==4 || s.length()==6){
        
        for (int i = 0; i < s.length(); i++)
        {
	        if (s[i]>64  )  //&& s[i]<123
	        {
                return false;
		        
	        }
        }
    }
    else 
        return false;
    
    return answer;
}