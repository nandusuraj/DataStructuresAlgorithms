#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin>>a;
    int temp=a;
    int f=a;

    int count=0;
    while(a>0){
        a=a/10;
        count++;
    }
    int sum=0;
    while(temp>0){
        sum+=pow(temp%10,count);
        temp=temp/10;
    }

    if(sum==f){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}