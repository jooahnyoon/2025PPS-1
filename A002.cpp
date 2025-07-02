#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows){
        vector<vector<int>> result;
        for(int i=0;i<numRows;++i){
            vector<int> row(i+1, 1);
            for(int j=1;j<i;j++){
                row[j] = result[i-1][j-1] + result[i-1][j];
            }
            result.push_back(row);
        }
        return result;
    }
};

int main(){
    Solution run;
    int n, num;
    cout << "numRows = ";
    cin >> n;
    vector<vector<int>> m = run.generate(n);
    cout << "output: " << "["; 
    for(auto it = m.begin(); it != m.end(); ++it){
        vector<int>row = *it;
        cout << "[";
        for(int i=0;i<row.size();++i){
            if(i != row.size()-1){
                cout << row[i] << ",";
            }
            else{
                cout << row[i];
            }
        }
        if(it == m.end()-1){
            cout << "]";
        }
        else{
            cout << "],";
        }
    } 
    cout << "]" << endl;
    return 0;
}

