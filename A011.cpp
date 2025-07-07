#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

class Solution{
public:
    vector<int> solution(int N, vector<int> stages){
        double fall[N];  // 실패율 배열
        int min;
        for(int i=1;i<=N;++i){
            int count = 0;
            for(int j=1;j<=stages.size();++j){
                if(stages[j-1] == i){
                    count++;
                }
                else{
                    if(stages.size() != 0){
                        fall[i] = (double)count / stages.size();
                    }
                    else{
                        fall[i] = 0.0;
                    }
                    break;
                }
            }
            stages.erase(stages.begin(),stages.begin()+count);
        }
        vector<pair<double, int>> p;
        for(int i=1;i<=N;++i){
            p.push_back({fall[i], i});
        }

        sort(p.begin(),p.end(), [](pair<double, int>a, pair<double, int>b){
            if(a.first == b.first){
                return a.second < b.second;
            }
            return a.first > b.first;
        });

        vector<int> answer;
        for(pair<double, int> k : p){
            answer.push_back(k.second);
        }
        return answer;
    }
};  

int main(){
    Solution run;
    vector<int> g;
    int n, num;
    string line;
    cout << "N = ";
    cin >> n;
    cin.ignore();   // 버퍼 버리기
    cout << "stages = ";
    getline(cin, line);
    for(int i=0;i<line.size();++i){
        if(line[i] == '[' || line[i] == ']' || line[i] == ','){
            line[i] = ' ';
        } 
    }
    istringstream iss(line);
    while(iss >> num){
        g.push_back(num);
    }
    sort(g.begin(), g.end());
    vector<int> s = run.solution(n,g);
    cout << "result = [";
    for(int i=0;i<s.size();++i){
        if(i == s.size()-1){
            cout << s[i];
        }
        else{
            cout << s[i] << ",";
        }
    }
    cout << "]" << endl;
    return 0;
}

