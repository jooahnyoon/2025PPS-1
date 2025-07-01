#include <iostream>
#include <vector>

using namespace std;
class Solution{
public:
    int findContentChildren(vector<int>& g, vector<int>& s){
        int count = 0;
        int child = 0;  // child index
        int cookie = 0; // cookie index
        while(child < g.size() && cookie < s.size()){
            if(g[child] <= s[cookie]){
                child++;
            }
            cookie++;
        }
        return child;
    }
};

int main(){
    Solution run;
    vector<int> g; 
    vector<int> s; 
    int n, num;
    cout << "Enter the number of children : ";
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> num;
        g.push_back(num);
    }
    cout << "Enter the size of cookie : ";
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> num;
        s.push_back(num);
    }
    int m = run.findContentChildren(g, s);
    cout << "output: " << m << endl;
    return 0;
}