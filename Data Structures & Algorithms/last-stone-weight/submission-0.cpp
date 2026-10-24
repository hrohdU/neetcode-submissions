class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> n; 
        int x = 0;
        while(x < stones.size()){
            n.push(stones[x]);
            x++;
        }
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
