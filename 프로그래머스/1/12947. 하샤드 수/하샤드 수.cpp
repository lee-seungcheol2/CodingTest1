#include <string>
#include <vector>
#include <iostream>
using namespace std;

bool solution(int x) {
    bool answer = true;
    vector<int> vArray;
    int sum=0;
    int rep=x;
    for(int i=0;i<5;++i)
    { if(rep){
    vArray.push_back(rep%10);
    rep/=10;
    sum+=vArray[i];
    }
    }
    if(x%sum==0)
        answer=true;
    else
        answer=false;
    
    return answer;
}