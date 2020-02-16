#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i< (n); ++i)
using namespace std;

int main(){
    int N, j;
    int sum = 0;
    cin >> N;
    vector<int> d(N);
    for(int i=0; i<N; i++) cin >> d[i];

    for(int k=0; k < N - 1; k++){
        j = k+1;        
        while(j < N){
            sum += d[k]*d[j];
            j++;
        }
    }
    cout << sum <<endl;
}