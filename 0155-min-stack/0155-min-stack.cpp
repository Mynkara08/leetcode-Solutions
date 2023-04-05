class MinStack {
public:
    MinStack() {
        
    }
    stack<int>s1;
    stack<int>s2;
    
    void push(int val) {
        s1.push(val);
        if(s2.size()==0 || val<=s2.top())
        {
            s2.push(val);
        }
    }
    
    void pop() {
        int ans=s1.top();
        s1.pop();
        if(ans==s2.top())
            s2.pop();
    }
    
    int top() {
        if(s1.size()==0)
        {
            return -1;
        }
        return s1.top();
        
    }
    
    int getMin() {
        if(s2.size()==0)
            return 0;
        int n=s2.top();
        return n;
        
    }
};
