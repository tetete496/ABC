#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;

int main(){
    int N;
    string S;
    cin >> N >> S;
    int ans = 1;
    rep(i,N-1) if(S[i] != S[i+1]) ans++;
    cout << ans << endl;
    return 0;
}