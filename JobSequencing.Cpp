class Solution 
{
    
    public:
    static bool comparator(Job j1,Job j2)
    {
        if(j1.profit>j2.profit)return true;
        else if(j1.profit<j2.profit)return false;
        return j1.id<j2.id;
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        int cnt=0,ans=0;
        sort(arr,arr+n,comparator);
        int mint=INT_MIN;
        vector<int>res(2,0);
        for(int i=0;i<n;i++)
        {
            mint=max(mint,arr[i].dead);
        }
        vector<int>tasks(mint+1,-1);
        for(int i=0;i<n;i++)
        {
            for(int j=arr[i].dead;j>=1;j--)
            {
                if(tasks[j]==-1)
                {
                    tasks[j]=arr[i].id;
                    cnt++;
                    ans+=arr[i].profit;
                    break;
                }
            }
            
        }
        res[0]=cnt;
        res[1]=ans;
        return res;
        
    } 
};
