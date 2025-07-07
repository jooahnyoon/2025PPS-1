#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

class Solution{
public:
    int singleNumber(vector<int>& nums){
        if(nums.size() == 1){
            return nums[0];
        }
        int count = 0;
        for(int i=0;i<nums.size();++i){
            if(nums[i] == nums[i+1]){
                count = 1;
            }
            else{
                if(count != 1){
                    return nums[i];
                }
                else{
                    count = 0;
                }
            }
        }
        return 0;
    }
};  

int main(){
    Solution run;
    vector<int> g;
    string line;
    int n;
    cout << "nums = ";
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
    sort(g.begin(), g.end());
    cout << "Output: " << run.singleNumber(g) << endl;
    return 0;
}