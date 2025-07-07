#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int a,b,c;
    vector<int>g;
    cin >> a >> b >> c;
    int sum = 0;
    sum = a * b * c;
    string line;
    line = to_string(sum);
    int arr[10] = {0};
    for(int i=0;i<line.size();++i){
        int n = line[i] - '0';
        arr[n]++;
    }
    for(int i=0;i<=9;++i){
         cout << arr[i] << endl;
    }
    return 0;
    
}
