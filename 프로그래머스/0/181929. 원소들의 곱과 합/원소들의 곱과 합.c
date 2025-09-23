#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    int buf=1;
    int buf2=0;
    for(int i=0;i<num_list_len;i++)
    {
         buf*=num_list[i];
         buf2+=num_list[i];
    }
    if(buf<buf2*buf2)
        answer=1;
    
    return answer;
}