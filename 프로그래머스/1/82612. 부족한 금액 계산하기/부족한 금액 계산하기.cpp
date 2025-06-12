using namespace std;

long long solution(int price, int money, int count)
{
	int mul = price;
	long long answer = 0;
	for (int i = 1; i <= count; ++i)
		answer = answer+ (mul * i);

    
    
	answer = answer-money;
    
    if(answer<0)
        return 0;
    
	return answer;
}
