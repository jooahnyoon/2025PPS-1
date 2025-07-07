#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int sum = 0;
    int max = 0;
    for(int i=0;i<4;++i){
        int out, in;
        cin >> out >> in;
        sum = sum - out + in;
        if(sum > max){
            max = sum;
        }
    }
    cout << max << endl;
    return 0;
}
