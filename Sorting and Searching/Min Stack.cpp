//Max STack is done similarly, just maintain a max stack.

class MinStack {
public:
    stack<int> data;
    stack<int> mina;
    MinStack() {
        
    }
    
    void push(int val) {
        data.push(val);
        if(mina.empty()){
            mina.push(val);
        }
        else{
            if(mina.top()<=val){
                mina.push(mina.top());
            }
            else{
                mina.push(val);
            }
        }
    }
    
    void pop() {
        if(data.empty()==0){
            data.pop();
            mina.pop();
        }
        
    }
    
    int top() {
        if(data.empty()==0){
            return data.top();
        }
        return 0;
    }
    
    int getMin() {
         if(mina.empty()==0){
            return mina.top();
        }
        return 0;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */