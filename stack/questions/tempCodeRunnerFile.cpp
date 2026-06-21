
    //base 
    if(s.empty()){
        return;
    }
    int top=s.top();
    s.pop();
    //recurseive call
    sort(s);
    sortedinsert(s,top);

}
int main() {
    stack <int> s;
    s.push(5); // Push initial values onto the stack
    s.push(1);
    s.push(6);
    s.push(110);
     cout<<"before reversed stack is :"<<endl;
    stack<int>f=s;
    while(!f.empty()){
    cout<<f.top()<<" ";
    f.pop();
    }
cout<<endl;
    sort(s);
    cout<<"the reversed stack is :"<<endl;
    stack<int>d=s;
    while(!d.empty()){
    cout<<d.top()<<" ";
    d.pop();
    }
}