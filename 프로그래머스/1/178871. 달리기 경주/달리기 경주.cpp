#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    unordered_map<string, int> pos;
    
     for (int i = 0; i < (int)players.size(); ++i) {
        pos[players[i]] = i;
    }
    
     for (const string& name : callings) {
        int i = pos[name];
        if (i == 0) continue; 
         
         swap(players[i], players[i - 1]);
         
          pos[players[i]]     = i;
        pos[players[i - 1]] = i - 1;
    }
         
         
    
    return players;
}