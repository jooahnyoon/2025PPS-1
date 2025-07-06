#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

class Solution{
public:
    bool solution(string s){
        bool answer = true;
        for(int i=0;i<s.size();++i){
            if(!isdigit(s[i])){
                answer = false;
            }
        }
        return answer;
    }
};  

int main(){
    Solution run;
    string line;
    cout << "s = ";
    cin >> line;
    bool answer = true;
    while(line.size() < 1 && line.size() > 8){
        cout << "wrong string" << endl;
        cin >> line;
    }
    if(line.size() == 4 || line.size() == 6){
        answer = run.solution(line);
    }
    else{
        cout << "false";
    }
    if(answer == 1){
        cout << "true";
    }
    else{
        cout << "false";
    } 
    cout << endl;
    return 0;
}

