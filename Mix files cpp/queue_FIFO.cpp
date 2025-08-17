// Queue-> FIFO

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.pop();    //1st ele well be remove

    // while(!q.empty()) {
    //     cout << q.front() << " ";
    //     q.pop();
    // }

    //[privority_queue]
    // priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> pq; //for reverse(accending) order priority

    pq.push(5);
    pq.push(3);
    pq.push(10);
    pq.push(4);

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}