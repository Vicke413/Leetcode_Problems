class KthLargest {
    private:
    int l;
    priority_queue<int,vector<int>,greater<int>> pq;
public:

    KthLargest(int k, vector<int>& nums) {
        int n=nums.size();
            l=k;
  
  // we ll push all our elements in our min heap
     for(int i=0;i<n;i++)
     {
         pq.push(nums[i]);
     }
     // we pop out remaining , we ll have only top k largest elements in our heap
     // so top remains our kth largest
   
     while(pq.size()>l)
     {
         pq.pop();
     }

    }
    
    int add(int val) {
        pq.push(val);
      
      if(pq.size()>l)
        pq.pop();
        // we ll return out min heap top which is kth largest
        return pq.top();
        
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */