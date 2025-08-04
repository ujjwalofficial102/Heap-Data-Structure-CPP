#include <bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> pq; //maxHeap

    priority_queue<int, vector<int>, greater<int>> pq_min; //minHeap

    pq.push(10);
    pq.push(20);
    pq.push(11);
    pq.push(18);
    pq.push(15);
    pq.push(1);

    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    pq.pop();
    
    cout << pq.size() << endl;

    return 0;
}