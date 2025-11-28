#include <bits/stdc++.h>
using namespace std;

class Queue {
private:
int* arr;
int capacity ;
int front;
int rear;

public:
    //contructor of queue

    Queue(int size){
        capacity = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    bool isEmpty(){
        // if forn not containing the value
        return front == -1;
    }

    bool isFull(){
        // submission of the react and the front
        return (rear+1) % capacity == front;
    }


    // and foor thhe enque the task
    bool enqueue(int val){
        // agar fulll hai to not possible
        if(isFull()){
            return false;    
        }

        // agar emply hai to front me enqueue hona chahiye
        if(isEmpty()){
            front = rear = 0;
        }else{
            rear =(rear +1) % capacity;
        }


        // and in the last
        arr[rear] = val;
        return true;
    }

    int dequeue(){

        if(isEmpty()){
            // que willl be overflow
            return -1;
        }

        int result = arr[front];

        if(front == rear){
            // remove the element from the last because it is added to the last
            front = rear -1;
        }else{
            front = (front +1 ) % capacity;
        }

        return result;
    }

    int peek(){
        if(isEmpty()){
            // kahli hai to kahe hi karana hai age ka return karke
            return -1;
        }

        return arr[front];
    }

    int size(){
        if(isEmpty()) return 0;
        if(rear>= front) return rear- front +1;
        return capacity - (rear - front -1);
    }

    ~Queue(){
        delete[] arr;
    }



    
};

int main() {
    // Solution sol;
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    // removing the first enque value
    cout  << q.dequeue() << endl;

    // last value who have been enqueue
    cout << q.peek() << endl;

    // total size
    cout << q.size() << endl;

    return 0;
}