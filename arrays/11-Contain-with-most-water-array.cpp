// LeetCode 11 - Container With Most Water
// Approach: Two Pointer
// Time Complexity: O(n) | Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int st = 0;
        int end = n-1;
        int maxWater = 0;
        while(st<end){
            maxWater = max(maxWater , (end-st)*min(height[st], height[end]));
        
            if(height[st]<height[end]){
                st++;
            }else{
                end--;
            }
        }
        return maxWater;
    }
};