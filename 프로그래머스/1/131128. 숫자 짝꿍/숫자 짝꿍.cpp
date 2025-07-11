#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string X, string Y) {
    string answer = "";
    
   
    string temp = "";
    for (int i = 0; i < X.length(); ++i)     
    {
        for (int j = 0; j < Y.length();++j)
        {
            if (X[i] == Y[j])        // X원소 처음부터 끝까지 Y원소랑 비교 
            {
                answer += Y[j];         //같으면 answer에 넣고

                temp = Y[j];             // Y맨 마지막 원소랑 바꿔치기 후 pop_back 
                Y[j] = Y.back();
                Y.back() = temp[0];

                Y.pop_back(); //tmep 비워주고 값 찾았으면 break해서 다음 X

                temp = "";                 
                break;
            }
                     
        }
    }
    if (answer.empty())            //for 문 다 돌고 나왔는데 asnwer 가 비었으면
        answer = "-1";
    else 
    {
        int b = 0;//2 3                     //안 비었으면  첫번째 원소가 0인지  
        if (answer[0] == '0')
        { 
            for (int i = 0; i < answer.size(); ++i)       //0이면 끝까지 0밖에 없는지 확인해서 
            {
                if (answer[i] == '0')
                    ++b;                   //cout<<solution("100", "203045");
            }
            if (b == answer.size())

            {
               
                return answer = "0";     //리턴 0 
            }
        }
       
        sort(answer.begin(), answer.end(), greater<char>());   //예외체크 안걸렸으면 소트
    }
    
    return answer;
   // return answer;
}