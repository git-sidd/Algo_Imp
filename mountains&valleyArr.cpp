// Given an array of integers, determine if it exhibits a continuous mountain and valley pattern.

// A continuous mountain and valley pattern means that the array elements strictly alternate between increasing and decreasing. That is:

// Either a[0] < a[1] > a[2] < a[3] > a[4] ..., or

// a[0] > a[1] < a[2] > a[3] < a[4] ....


#include <bits/stdc++.h>
using namespace std;


bool solve(vector<int>&arr){
    int n=arr.size();
    int dir=0;
   
    if(n<2)return false;

    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1])return false;
        int curdir=((arr[i-1]<arr[i])?1:-1);
        if(dir==0){
            dir=curdir;
        }
        else{
            if(dir==curdir)return false;
            dir=curdir;
        }
    }
    return true;
   
    
}

int isMountainValleyPattern( vector<int>& arr) {
    // Implement your logic hereint
    if(solve(arr)){
        return 1;
    }
  
    return 0;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    int result = isMountainValleyPattern(arr);
    std::cout << result << std::endl;
    return 0;
}