#include <bits/stdc++.h>
using namespace std;

    vector<int> twoSum(vector<int>& numbers, int target) {

        int n=numbers.size();
        int left=0;
        int right =n-1;
        int sum=0;
        vector<int> arr(2);
        while(left<right){
            sum=numbers[left]+numbers[right];
            if(sum==target){
                arr[0]=left+1;
                arr[1]=right+1;
                return arr;
            }
            else if(sum<target){
                left++;
                

            }
            else right--;
        }
        
    return {};}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m;
    cin>>m;
    vector <int> numbers(m);
    for(int i=0;i<m;i++){
        cin>>numbers[i];
    }   

    int target;
    cin>>target;    

    vector<int> ans=twoSum(numbers,target);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    

    return 0;
}