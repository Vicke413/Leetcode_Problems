class Solution {
public:


// int solve(int index,int n,vector<int>&arr,int difference)
// {
// if(index>=n)
// return 0;
// int prev=arr[index];
// int ans=0;

// for(int i=index+1;i<n;i++)
// {
//     if((arr[i]-prev)==difference)
//     {
//         ans=max(ans,1+solve(i,n,arr,difference));
//     }
// }

// return ans;


// }
    int longestSubsequence(vector<int>& arr, int difference) {
        

// int n=arr.size();
//         int i=0;

// int ans=INT_MIN;

// while(i<n)
// {
    
//     int j=i;
//     int c=0;
//     int prev=arr[j];
//     j++;
//     while(j<n)
//     {
//         if((arr[j]-prev)==difference)
//         {
//             prev=arr[j];
//             c++;
//         }
//         j++;
//     }
// ans=max(ans,c);

//     i++;
// }
// return ans+1;

int n=arr.size();
int ans=1;
unordered_map<int,int>m;


for(int i=0;i<n;i++)
{

    if(m.find(arr[i]-difference)!=m.end())
    {
        m[arr[i]]=m[arr[i]-difference]+1;
    }
    else
    {
        m[arr[i]]=1;
    }

    ans=max(ans,m[arr[i]]);
}
return ans;
    }
};