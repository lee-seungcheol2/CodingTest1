#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    vector<string> sounds = {"aya", "ye", "woo", "ma"};
    int answer = 0;

    for (int i = 0; i < babbling.size(); ++i) {
        string word = babbling[i];
        string prev = "";
        bool valid = true;

        while (!word.empty()) {
            bool matched = false;
            for (int j = 0; j < sounds.size(); ++j) {
                string sound = sounds[j];
                if (word.find(sound) == 0) { // sound로 시작하는지 확인
                    if (prev == sound) {
                        valid = false;
                        break;
                    }
                    prev = sound;
                    word = word.substr(sound.length());
                    matched = true;
                    break;
                }
            }
            if (!matched) {
                valid = false;
                break;
            }
        }

        if (valid) {
            ++answer;
        }
    }

    return answer;
}
