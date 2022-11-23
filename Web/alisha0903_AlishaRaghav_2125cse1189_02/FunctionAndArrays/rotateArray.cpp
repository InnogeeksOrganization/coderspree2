#include<bits/stdc++.h>
using namespace std;

    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        int i=k;
         vector<int>v;
        while(i--)
        {
         v.push_back(nums[nums.size()-i-1]);
        }
        i=0;
        while(i<(nums.size()-k))
        {
            v.push_back(nums[i]);
            i++;
        }
        nums=v;

       
    }
