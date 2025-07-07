#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

class Solution{
public:
    vector<string> summaryRanges(vector<int>& nums){
        vector<string> answer;
        while(!nums.empty()){
            int count = 0;
            int start = nums[0];    //시작index
            for(int i=1;i<nums.size();++i){
                if(nums[i-1] + 1 == nums[i]){
                    count++;
                }
                else{
                    break;
                }
            }
            int end = nums[count];  //끝index
            if(start == end){
                answer.push_back('"'+to_string(start)+'"');
            }
            else{
                answer.push_back(
                    '"'+to_string(start)+"->"+to_string(end)+'"');
            }
            nums.erase(nums.begin(),nums.begin()+count+1);
        }
        return answer;
    }
};

int main(){
    Solution run;
    vector<int> g;
    vector<string> result;
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
    cout << "Output: [";
    result = run.summaryRanges(g); 
    for(int i=0;i<result.size();++i){
        if(i == result.size()-1){
            cout << result[i]; 
        }
        else{
            cout << result[i] << ","; 
        }
    }
    cout << "]" << endl;
    return 0;
}