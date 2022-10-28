#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

bool threeSum(vector<int> arr , int target){
    bool ans = false;
    int n = arr.size();
    sort(arr.begin(),arr.end());

    for(auto i : arr){
        int low = i;
        int high = n-1;
        while (low<high)
        {
            int Sum = arr[i] + arr[low] + arr[high];
            if (Sum == target){
                ans = true;
            }
            if (Sum < target){
                low++;
            }
            else{
                high--;
            }
        }
    }
    return ans;
}
int main()
{
    int n;cin>>n;
    int target;cin>>target;
    vector<int> arr(n);
    for(auto i : arr){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    cout<<threeSum(arr,target);

    
    return 0;
}