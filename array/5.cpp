// Input:
// n = 5
// nums[] = {10, 3, 5, 6, 2}
// Output:
// 180 600 360 300 900
#include<bits/stdc++.h>
using namespace std;

vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
    long long total=1,cnt=0;
    vector <long long int > v;
    for (int i=0;i<n;i++){
        if (nums[i]==0) cnt++;
        if (nums[i]!=0)
        total=total*nums[i];
    }
    for (int i=0;i<n;i++){
        if (cnt==0)
        v.push_back(total/nums[i]);
        else if (cnt>=2)
        v.push_back(0);
        else {
            if (nums[i]!=0)
                v.push_back(0);
            else
                v.push_back(total);
        }
    }
    for(auto it:v){
        cout<<it<<" ";
    }cout<<endl;
}

int main()
{
    int n = 5;
    vector<long long int> nums = {10, 3, 5, 6, 2};
    productExceptSelf(nums,n);
    return 0;
}