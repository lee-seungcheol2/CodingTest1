#include <iostream>

using namespace std;
int solution(int n)
{
   
int ct = 1;
int qu = 0;
int sum = 0;
for (int i = 1; (n / i) >= 10; i = i * 10)
{
	ct = ct*10;
}
for (int j = 1 * ct; j >0; j = j / 10)
{
	qu = n / j;

	n = n - j * qu;

	sum = qu + sum;

}
        
 
    
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << sum << endl;

    return sum;
}