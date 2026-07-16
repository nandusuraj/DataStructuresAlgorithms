#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    int temp=n;
    int rev=0;
    while(n>0){
        rev=rev*10+n%10;
        n=n/10;

    }
    if(rev==temp){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }


    return 0;
}