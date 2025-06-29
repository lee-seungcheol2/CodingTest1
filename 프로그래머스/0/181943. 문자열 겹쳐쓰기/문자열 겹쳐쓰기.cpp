#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = "";
    
    for(int i=s,j=0;j<overwrite_string.length();++i,++j)
    {
        my_string[i]=overwrite_string[j];
    }
    
    return my_string;
}