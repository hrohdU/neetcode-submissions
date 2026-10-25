class KthLargest {
public:
priority_queue<int , vector<int> , greater<int>> n;
int k_limit;

    KthLargest(int k, vector<int>& nums) {
        k_limit = k;
        int i = 0;
        while(i < nums.size()){
            n.push(nums[i]);
            i++;
            if (n.size() > k_limit){
            n.pop();
            
        }
        }
        
    }
    int add(int val) {
        n.push(val);
        if (n.size() > k_limit){
            n.pop();

        }
        return n.top();
    }
};
