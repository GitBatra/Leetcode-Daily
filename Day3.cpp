class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        
        int ans=0;
        int sum =neededTime[0];
        int maxi = neededTime[0];
        for(int i=1;i<colors.size();i++)
        {
            if(colors[i]==colors[i-1])
            {
                sum += neededTime[i];
                maxi = max(neededTime[i],maxi);
            }
            else{
                ans += sum -maxi;
                sum = neededTime[i];
                maxi = neededTime[i];
            }
        }
        return ans+sum-maxi;
    }
};
