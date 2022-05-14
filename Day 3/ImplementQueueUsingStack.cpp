class MyQueue {
public:
    MyQueue() {
        
    }
    stack<int> sf , ss;
    void push(int x) {
        sf.push(x);
    }
    
    int peek() {
        if(ss.empty()){
            while(!sf.empty()){
                ss.push(sf.top());
                sf.pop();
            }
        }
        return ss.top();
    }
    
    int pop() {
        int x = peek();
        ss.pop();
        return x;
    }
    
    
    bool empty() {
        return sf.empty() && ss.empty();
    }
};