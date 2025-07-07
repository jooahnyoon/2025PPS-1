#include <iostream>
using namespace std;

int main(){
    int n, num, score;
    int sum = 0;
    for(int i=0;i<5;++i){
        cin >> n;
        sum += (n * n);
    }
    int answer = sum % 10;
    cout << answer << endl;
    return 0;
}

