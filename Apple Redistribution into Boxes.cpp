#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        
        int sum = 0;
        
        for(auto i:apple) sum+=i;
        
        sort(capacity.begin(),capacity.end());
        
        int i = capacity.size()-1;
        
        int cnt = 0;
        
        while(i>=0)
        {
            if(sum<=0) break;
            
            sum-=capacity[i];
            
            cnt++;
            
            i--;
        }
        
        return cnt;
    }
};