#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    // 여분이 있으면서 잃어버린 학생은 우선 제거
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());

    vector<int> real_lost;
    for (int l : lost) {
        // lost 중에서 reserve에도 있으면 자기 것 빌려 쓸 수 있음 -> 제외
        auto it = find(reserve.begin(), reserve.end(), l);
        if (it != reserve.end()) {
            reserve.erase(it); // 여분 학생에서 제외
        } else {
            real_lost.push_back(l); // 진짜 잃어버린 학생
        }
    }

    int count = n - real_lost.size();

    for (int l : real_lost) {
        // 앞 번호가 여분 있으면 빌림
        auto it = find(reserve.begin(), reserve.end(), l - 1);
        if (it != reserve.end()) {
            count++;
            reserve.erase(it);
        } else {
            // 뒷 번호가 여분 있으면 빌림
            it = find(reserve.begin(), reserve.end(), l + 1);
            if (it != reserve.end()) {
                count++;
                reserve.erase(it);
            }
        }
    }
    return count;
}

int main() {
    cout << solution(3, {3}, {1}) << "\n"; // 출력: 2
    return 0;
}
