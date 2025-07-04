#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

class Solution {
public:
    int solution(string skill, vector<string> skill_trees){
        int answer = 0;
        for(int i=0;i<skill_trees.size();++i){
            string find = "";
            for(char c : skill_trees[i]){
                if(skill.find(c) != string::npos){
                    find += c; 
                }
            }
            if(skill.substr(0,find.size()) == find){
                answer++;
            }
        }
        return answer;
    }
};  

int main(){
    Solution run;
    vector <string> g;
    string skill, line, n;
    cout << "skill = ";
    cin >> skill;
    cin.ignore();   // 버퍼 버리기
    cout << "skill_trees = ";
    getline(cin, line);
    for(int i=0;i<line.size();++i){
        if(line[i] == '[' || line[i] == ']' || line[i] == ','){
            line[i] = ' ';
        } 
    }
    istringstream iss(line);
    while(iss >> n){
        g.push_back(n);
    }
    int count = run.solution(skill, g);
    cout << "return: " << count << endl;
    return 0;
}

