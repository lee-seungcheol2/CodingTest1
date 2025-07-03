#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
   
    int sum = 0;
    int cnt = 0;
    for (int i = 0; i < nums.size(); ++i)
    {
        for (int j = i + 1; j < nums.size(); ++j)
        {
            for (int m = j + 1; m < nums.size(); ++m)
            {
                sum = nums[i] + nums[j] + nums[m];

                for (int k = 2; k < sum; ++k)
                {
                    if (sum % k == 0)
                        break;
                    else if (k == sum - 1)
                        cnt++;
                    
                    
                }
                
            }
        }
    }


    return cnt;
}
   