class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
         priority_queue<int> n(stones.begin(), stones.end()); 
        int x;
        int y;
        while (1 < n.size()){
            x = n.top();
            n.pop();
            y = n.top();
            n.pop();
            if (x > y) {
                n.push(x-y);
            }

        }
        if (n.size() == 1){
            return n.top();
        }
        else{
            return 0;
        }
    }
};
