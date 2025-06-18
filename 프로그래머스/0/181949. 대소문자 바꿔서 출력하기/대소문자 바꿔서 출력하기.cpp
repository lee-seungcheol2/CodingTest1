#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    int i=0;
    while(str[i])
    {
        str[i]=str[i]<91?str[i]+32:str[i]-32;
    ++i;
    }
    cout<< str;
    return 0;
}