#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    int queriesize=queries.size();
    
    for(int i=0;i<queriesize;i++)
    {
        vector<int> Mele;
        for(int j=queries[i][0];j<=queries[i][1];j++)
        {
            if(arr[j]>queries[i][2])
            {
                Mele.push_back(arr[j]);
            }
        }
        if(Mele.size()==0)
            answer.push_back(-1);
        else if (Mele.size()==1)
            answer.push_back(Mele[0]);
        else
        {
                int currentMin=Mele[0];
        for(int k=1;k<Mele.size();++k)
            {
                
                currentMin=min(currentMin,Mele[k]);
            }
            answer.push_back(currentMin);
        }
    }
    
    
    return answer;
}