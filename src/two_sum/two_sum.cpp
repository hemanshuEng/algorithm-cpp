//
// Created by hemanshu on 25/04/2022.
//

#include<bits/stdc++.h>
#include<two_sum.h>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::map<int,int> m;
    std::vector<int> v;
    int n= nums.size();
    for(int i=0;i<n;i++)
    {

        int diff = target - nums[i];
        if(m.find(diff) != m.end())
        {
            auto p = m.find(diff);
            v.push_back(p->second);
            v.push_back(i);
        }
        m.insert(std::make_pair(nums[i],i));
    }

    return v;
}