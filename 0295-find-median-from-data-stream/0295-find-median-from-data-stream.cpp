class MedianFinder {
public:
    priority_queue<int>left;
    priority_queue<int,vector<int>,greater<int>>right;
    MedianFinder() {
    }
    
    void addNum(int num) {
        if(left.empty()||num<=left.top()){
            left.push(num);
        }
        else{
            right.push(num);
        }
        while (right.size() > left.size() + 1 ||
       left.size() > right.size() + 1){
            if(right.size()>left.size()){
                int num=right.top();
                right.pop();
                left.push(num);
            }
            else{
                int num=left.top();
                left.pop();
                right.push(num);                
            }
        }
    }
    
    double findMedian() {
        double num;
        if(left.size()==right.size()){
            num=(left.top()+right.top())/2.0;
        }
        else if(left.size()>right.size()){
            num=left.top();
        }
        else{
            num=right.top();
        }
        return num;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */