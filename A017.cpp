#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int num;
    vector<int>g;
    string line;
    cin >> line;
    int max = 0;
    int arr[10] = {0};
    for(int i=0;i<line.size();++i){
        int n = line[i] - '0';
        arr[n]++;
    }
    arr[6] = arr[9] = ((arr[6]+arr[9]+1)/2);
    max = arr[0];
    for(int i=1;i<=9;++i){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << max << endl;
    return 0;
    
}
