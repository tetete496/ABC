#include <iostream>
using namespace std;
int main(void){
    int flg = 0;
    int N;
    string S;
    cin >> N >> S;
    if (N%2 == 0){
        for(int i=0;i<N/2;i++){
            if(S[i] != S[N/2-1+i]){
                flg = 1;
            }
        }
    }
    else{
        flg = 1;
    }
    if(flg == 0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;        
    }
    return 0;
}