
#include <bits/stdc++.h>
using namespace std;

string ans;
int flag = 0;
int N;
string S,L;

int loop(int N);

int main(){      
    cin >> N >> S;
    cout << N << endl;    
    loop(N);
}

int loop(int N){
     for(int i=0;i<N-1;i++){
        if(S[i] == S[i+1])
        L = "";
        flag = 1;
        for(int j=0;j<N-1;j++){
            if(j<=i){
                L += S[j];
            }
            else if (j==i+1){
                // Nothing
            }
            else{
                L += S[j-1];
            }
        }
        S = L;
        N--;
        exit;
    }
    if(flag == 1){
        loop(N);
    }
    else{
        cout << N << endl;
    }
}