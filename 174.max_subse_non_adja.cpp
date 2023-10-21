#include<bits/stdc++.h>
using namespace std;
//#include <bits/stdc++.h> 
/*Memorisation
int f(int ind,vector<int> &nums,vector<int> &dp)
{
    if(ind == 0)
    {
        return nums[ind];
    }
    if(ind<0)
    {
        return 0;
    }

    if(dp[ind]!=-1)
    {
        return dp[ind];
    }

    int pick = nums[ind] + f(ind-2,nums,dp);
    int nonPick = 0 + f(ind-1,nums,dp);

    return dp[ind] = max(pick,nonPick);

}*/
int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    int n = nums.size();
    //vector<int> dp(n,-1);
    int prev = nums[0];
    int prev2 = 0;

    for(int i=1;i<n;i++)
    {
        int take = nums[i];
        if(i>1) 
        {
            take += prev2;
        }
        int nontake = 0 + prev;

        int curri = max(take,nontake);

        prev2 = prev;
        prev = curri;
    }
    return prev;
}


int main()
{
    vector<int> nums{2,1,4,9};
    cout<<maximumNonAdjacentSum(nums);
    return 0;
}