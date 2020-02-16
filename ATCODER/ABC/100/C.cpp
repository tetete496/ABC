#include<bits/stdc++.h>
using namespace std;

int calc(int x){
    if(x % 2 != 0) return 0;
    return calc(x/2) + 1;
}

int main(){
    int cnt = 0;
    int N;
    cin >> N;
    vector <int> a(N);
    for(int i = 0;i < N; i++) cin >> a[i];
    for(int i = 0;i < N; i++) cnt += calc(a[i]);
    cout << cnt << endl;

    return 0;
}