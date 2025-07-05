#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution{
public:
    string solution(int s[]){
        int asc = 0;
        int des = 0;
        for(int i=1;i<8;++i){
            if(s[i-1] < s[i]){
                asc++;
            }
            else if(s[i-1] > s[i]){
                des++;
            }
        }
        if(asc == 7){
            return "ascending";
        }
        else if(des == 7){
            return "descending";
        }
        return "mixed";
    }
};  

int main(){
    Solution run;
    int a[8];
    for(int i=0;i<8;++i){
        cin >> a[i];
    }
    string answer = run.solution(a);
    cout << answer << endl;
    return 0;
}

