#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    vector<int>a;
    vector<int>b;
    int n;
    int k;
    cin >> n;
    int sum = 0;
    for(int i=0;i<n;++i){
        cin >> k;
        a.push_back(k);
    }
    sort(a.begin(),a.end());
    for(int j=0;j<n;++j){
        cin >> k;
        b.push_back(k);
    }
    sort(b.begin(),b.end());
    reverse(b.begin(),b.end());
    for(int i=0;i<n;++i){
        sum += (a[i] * b[i]);
    }
    cout << sum << endl;
    return 0;
}
