#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int rev=0;
    int n;
    cin>>n;
    while(n>0){
        rev=rev*10+n%10;
        n=n/10;
        
    }
    cout<<rev<<endl;

    return 0;
}