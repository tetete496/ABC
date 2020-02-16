#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    if(10 > A & A > 0 & 10 > B & B > 0){
        cout << A*B << endl;
    }
    else{
        cout << -1 << endl;
    }
    return 0;
}