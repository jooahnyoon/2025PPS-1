#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n, num, score;
    cin >> n;
    double arr[n];
    for(int i=0;i<n;++i){
        cin >> num;
        int score[num];
        double sum = 0;
        double avg = 0;
        int count = 0;
        for(int j=0;j<num;++j){
            cin >> score[j];
            sum += score[j];
        }
        avg = sum / (double)num;
        for(int k=0;k<num;++k){
            if(score[k] > avg){
                count++;
            }
        }
        arr[i] = ((double)count / (double)num) * 100;
    }
    cout << fixed << setprecision(3);
    for(int i=0;i<n;++i){
        cout << arr[i] << "%\n";
    } 
    return 0;
}

