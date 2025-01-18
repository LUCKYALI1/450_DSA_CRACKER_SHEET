void reverseArray(vector<int> &arr) {
    stack<int> s;
    for(int i =0 ; i < arr.size() ; i++){
        s.push(arr[i]);
    }
    for(int i = 0 ; i < arr.size() ; i++){
        arr[i] = s.top();
        s.pop();
    }
    
    }