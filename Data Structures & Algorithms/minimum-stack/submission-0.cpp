class MinStack {
    stack<int> mainStack;
    stack<int> minStack;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        mainStack.push(val);
        if(!minStack.empty() ){
            if(minStack.top() > val){
                minStack.push(val);
            }
            else{
                minStack.push(minStack.top());
            }
        }
        else{
            minStack.push(val);
        }
    }
    
    void pop() {
        mainStack.pop();
        minStack.pop();
    }
    
    int top() {
        return mainStack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};
