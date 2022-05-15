class MyStack {
public:
    MyStack() {
        
    }
    queue<int> q;
    void push(int x) {
        queue<int> t;
        t.push(x);
        
        while(!q.empty()){
            t.push(q.front());
            q.pop();
        }
        q=t;
    }
    
    int pop() {
        int x = q.front();
        q.pop();
        return x;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};