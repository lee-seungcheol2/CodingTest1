#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int size=sizes.size();
    vector<int> tem1;
    vector<int> tem2;
    for(int i=0;i<size;i++)
    {
        
        if(sizes[i][0]>sizes[i][1] )
        {
            tem1.push_back(sizes[i][0]);
            tem2.push_back(sizes[i][1]);
        }
        else
        {
            tem1.push_back(sizes[i][1]);
            tem2.push_back(sizes[i][0]);
        }
    }
    sort(tem1.begin(),tem1.end());
    sort(tem2.begin(),tem2.end());
    
    
    return answer=tem1.back()*tem2.back();
}