class MyQueue {
public:
    MyQueue() {
        
    }
    stack<int> s, temp;
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        peek();
        int remove = temp.top();
        temp.pop();
        return remove;
    }
    
    int peek() {
        if (temp.empty())
          while (!s.empty())
            temp.push(s.top()), s.pop();
        return temp.top();
    }
    
    bool empty() {
        return s.empty() && temp.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */