class Solution {
public:
    int trap(vector<int>& height) 
    {
        int n=height.size();
        vector<int>left(n);
        vector<int>right(n);
        
        int maxi=INT_MIN;
        for(int i=0;i<height.size();i++)
        {
            maxi=max(maxi,height[i]);
            left[i]=maxi;
        }
        int mini=INT_MIN;
        for(int i=height.size()-1;i>=0;i--)
        {
            mini=max(mini,height[i]);
            right[i]=mini;
        }
        
        for(int i=0;i<height.size();i++)
        {
            cout<<left[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<height.size();i++)
        {
            cout<<right[i]<<" ";
        }
        
        int ans=0;
        for(int i=0;i<height.size();i++)
        {
            ans+=min(left[i],right[i])-height[i];
        }
        return ans;
    }
};