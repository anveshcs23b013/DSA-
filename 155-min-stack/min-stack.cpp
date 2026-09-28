class MinStack {
public:

    stack<int> s;
    stack<int> ss;

    MinStack() {
        
    }
    
    void push(int value) {

        s.push(value);

        if(ss.size() == 0 || value <= ss.top()){
            ss.push(value);
        }
    }
    
    void pop() {

        if(s.top() == ss.top()){
            ss.pop();
        }

        s.pop();
    }
    
    int top() {

        if(s.empty()){
            return -1;
        }

        return s.top();
    }
    
    int getMin() {

        if(ss.size() == 0){
            return -1;
        }

        return ss.top();
    }
};