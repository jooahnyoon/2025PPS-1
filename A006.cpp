#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution{
public:
    bool solution(string s){
        int count = 0;
        bool answer = true;
        for(int i=0;i<s.size();++i){
            if(s[i] == 'p'){
                count++;
            }
            else{
                count--;
            }
        }
        if(count != 0){
            answer = false;
        }
        return answer;
    }
};  

int main(){
    Solution run;
    string line;
    string s = "";
    cout << "s = ";
    cin >> line;
    for(int i=0;i<line.size();++i){
        if(line[i] == 'p' || line[i] == 'P' || line[i] == 'y' || line[i] == 'Y'){
            s += tolower(line[i]);
        } 
    }
    bool answer = run.solution(s);
    cout << "answer: ";
    if(answer == 1){
        cout << "true";
    }
    else{
        cout << "false";
    } 
    cout << endl;
    return 0;
}

