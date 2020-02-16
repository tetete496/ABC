#include<bits/stdc++.h>
using namespace std;

int main(){
    int D;
    int N;
    cin >> D >> N;

if(N != 100){
    if(D == 0) cout << N << endl;
    else if (D == 1) cout << N * 100 << endl;
    else cout << N * 10000 << endl;
}
else{
    if(D == 0) cout << 101 << endl;
    else if (D == 1) cout << 10100 << endl;
    else cout << 1010000 << endl;    
}
    return 0;
}