#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

class Solution{
public:
    int solution(vector<int> people, int limit){
        int answer = 0;
        while(!people.empty()){
            int kg = people.back(); 
            people.pop_back();
            if((!people.empty()) && (kg + people.front() <= limit)){
                people.erase(people.begin());
            }
            answer++;
        }
        return answer;
    }
};

int main(){
    Solution run;
    vector<int> g;
    string line;
    int n, lim, result;
    cout << "people = ";
    getline(cin, line);
    for(int i=0;i<line.size();++i){
        if(line[i] == '[' || line[i] == ']' || line[i] == ','){
            line[i] = ' ';
        } 
    }
    cout << "limit = ";
    cin >> lim;
    istringstream iss(line);
    while(iss >> n){
        g.push_back(n);
    }
    sort(g.begin(), g.end());
    result = run.solution(g, lim);
    cout << "return = " << result << endl;
    return 0;
}