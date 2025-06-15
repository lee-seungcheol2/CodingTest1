#include <string>
#include <vector>

using namespace std;
int solution(int n) {
    vector<int> a;
    while (n) {
        a.push_back(n % 3);
        n /= 3;
    }

    int ret = 0;
    for (int i = 0; i < a.size(); ++i) ret = ret * 3 + a[i];
    return ret;
}