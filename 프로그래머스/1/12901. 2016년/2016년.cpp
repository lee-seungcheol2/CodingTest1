#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    int n=0;
    int arr[366] = {};
for (int i = 0; i < 366; ++i)
{

	arr[i] = i % 7;
	
}
switch (a)
{
case 1:
	n = -1;
	break;
case 2:
	n = 30;
	break;
case 3:
	n = 59;
	break;
case 4:
	n = 90;
	break;
case 5:
	n = 120;
	break;
case 6:
	n = 151;
	break;
case 7:
	n = 181;
	break;
case 8:
	n = 212;
	break;
case 9:
	n = 243;
	break;
case 10:
	n = 273;
	break;
case 11:
	n = 304;
	break;
case 12:
	n = 334;
	break;

}


switch (arr[n+b])
{
case 0:
	answer = "FRI";
	break;
case 1:
	answer = "SAT";
	break;
case 2:
	answer = "SUN";
	break;
case 3:
	answer = "MON";
	break;
case 4:
	answer = "TUE";
	break;
case 5:
	answer = "WED";
	break;
case 6:
	answer = "THU";
	break;



}
    
    return answer;
}