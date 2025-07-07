#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution{
public:
    int countPrimes(int n){
        int num = 1;
        if(n < 2){
            return 0;
        }
        if(n == 2){
            return 1;
        }
        for(int i=3;i<n;i+=2){
            int count = 0;
            for(int j=2;j<i;++j){
                if(i % j == 0){
                    count++;
                }
            }
            if(count == 0){
                num++;
            }
        }
        return num;
    }
};  

int main(){
    Solution run;
    int n;
    cout << "n = ";
    cin >> n;
    cout << run.countPrimes(n) << endl;
    return 0;
}

