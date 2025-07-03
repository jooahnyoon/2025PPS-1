#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits){
        for(int i=digits.size()-1; i>=0; --i){
            if(digits[i] < 9){
                digits[i] += 1;
                return digits;
            }
            else if(digits[i] == 9){
                digits[i] = 0;
            }
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main(){
    Solution run;
    vector <int> g;
    string line;
    cout << "digits = ";
    getline(cin, line);
    for(int i=0;i<line.length();i++){
        if(isdigit(line[i])){
            int n = line[i] - '0';
            g.push_back(n);
        }
    }
    vector<int> row = run.plusOne(g);
    cout << "output: " << "["; 
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

