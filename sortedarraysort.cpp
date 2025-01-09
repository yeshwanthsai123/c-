#include <bits/stdc++.h>
using namespace std;

vector<int> sqsorted(vector<int>& arr) {
   int n = arr.size(); 
   vector<int> res(n);
    int left=0;
    int right=n-1;
    int index=n-1;
    while(left<=right){
        if((arr[left]*arr[left])>(arr[right]*arr[right])){
            res[index--]=arr[left]*arr[left];
            left++;
        } else {
             res[index--]=arr[right] * arr[right];
             right--;
        }
    }
return res;
}
    
