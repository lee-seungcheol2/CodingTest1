#include <vector>
#include <stack>

using namespace std;

int solution(vector<int> ingredient) {
    stack<int> st;
    int answer = 0;

    for (int i = 0; i < ingredient.size(); ++i) {
        st.push(ingredient[i]);

        // 스택 상단 4개가 빵-야채-고기-빵인지 체크
        if (st.size() >= 4) {
            int top4[4];
            // top4[3]이 가장 위, top4[0]이 4번째 위
            for (int j = 3; j >= 0; --j) {
                top4[j] = st.top();
                st.pop();
            }

            // 조건 검사
            if (top4[0] == 1 && top4[1] == 2 && top4[2] == 3 && top4[3] == 1) {
                answer++; // 햄버거 완성
                // 제거 완료, 다시 계속
            }
            else {
                // 조건 안 맞으면 다시 스택에 원상복구
                for (int j = 0; j < 4; ++j) {
                    st.push(top4[j]);
                }
            }
        }
    }
    return answer;
}
