#include <string>
#include <vector>

using namespace std;

int sol(int n) {
    int ret = 1;
    while (n) {
        ret *= 10;
        n /= 10;
    }

    return ret;
}

int solution(int a, int b) {
    return max(a * sol(b) + b, b * sol(a) + a);
}
