class MinStack {
public:

    stack<long long> s;
    long long minelement;

    MinStack() {

    }
    
    void push(int value) {

        if(s.size() == 0){
            s.push(value);
            minelement = value;
        }
        else{
            if(value >= minelement){
                s.push(value);
            }
            else if(value < minelement){
                s.push(2LL * value - minelement);
                minelement = value;
            }
        }
    }
    
    void pop() {

        if(s.size() == 0){
            return;
        }
        else{
            if(s.top() >= minelement){
                s.pop();
            }
            else if(s.top() < minelement){
                minelement = 2 * minelement - s.top();
                s.pop();
            }
        }
    }
    
    int top() {

        if(s.size() == 0){
            return -1;
        }
        else{
            if(s.top() >= minelement){
                return s.top();
            }
            else if(s.top() < minelement){
                return minelement;
            }
        }

        return -1;
    }
    
    int getMin() {

        if(s.size() == 0){
            return -1;
        }

        return minelement;
    }
};