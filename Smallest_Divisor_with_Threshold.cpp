#include<bits/stdc++.h>
using namespace std;


int sumOfD(vector<int> &nums,int day){
    int sum = 0;
    int n = nums.size();

    for(int i=0;i<n;i++){
        sum += ceil((double)(nums[i]) / (double)(day));
    }
    return sum;
}

int smallestDivisor(vector<int>& nums, int threshold) {
    int n = nums.size();
    if(n > threshold) return -1;
    int maxi = *max_element(nums.begin(),nums.end());

    int low = 1;
    int high = maxi;

    while(low <= high){
        int mid = low + (high-low)/2;
        if(sumOfD(nums,mid) <= threshold){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return low;
}

int main(){
    int n;
    cin>>n;

    int thres;
    cin>>thres;

    vector<int> nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    
}