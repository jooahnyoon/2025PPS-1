#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

class Solution{
public:
    int solution(string s){
        int answer = s.size();  
        for(int i=1;i<=s.size() / 2 ;++i){
            string newline = "";
            string part = s.substr(0,i);    // 시작 블록
            int count = 1;
            for(int j=i;j<s.size();j+=i){
                string next = s.substr(j,i);
                if(part == next){
                    count++;
                }
                else{
                    if(count > 1){
                        newline += to_string(count);
                    }
                    newline += part;
                    part = next;
                    count = 1;
                }
            }
            if(count > 1){
                newline += to_string(count);
            }
            newline += part;
            answer = min(answer, (int)newline.size());
        }
        return answer;
    }
};  

int main(){
    Solution run;
    string line;
    cout << "s = ";
    cin >> line;
    cout << run.solution(line) << endl;
    return 0;
}

