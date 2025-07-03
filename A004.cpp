#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;
class Solution {
public:
    vector<int> solution(vector<int> arr, int divisor){
        vector<int> answer;
        for(int i=0;i<arr.size();i++){
            if(arr[i] % divisor == 0){
                answer.push_back(arr[i]);
            }
        }
        if(answer.empty()){
            answer.push_back(-1);
        }
        else{
            sort(answer.begin(), answer.end());
        }
        return answer;
    }
};  

int main(){
    Solution run;
    vector <int> g;
    string line;
    int d, n;
    cout << "arr = ";
    getline(cin, line);
    for(int i=0;i<line.size();++i){
        if(line[i] == '[' || line[i] == ']' || line[i] == ','){
            line[i] = ' ';
        }
    }
    cout << "divisor = ";
    cin >> d;
    istringstream iss(line);
    while(iss >> n){
        g.push_back(n);
    }
    vector<int> row = run.solution(g, d);
    cout << "return: " << "["; 
    for(int i=0;i<row.size();++i){
        if(i != row.size()-1){
            cout << row[i] << ",";
        }
        else{
            cout << row[i];
        }
    }
    cout << "]" << endl;
    return 0;
}

