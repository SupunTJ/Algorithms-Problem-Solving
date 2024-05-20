#include<iostream>
#include<cstdio>

using namespace std;

template<class T>
class Node{
    public:
        T data;
        Node* next;

        Node(){
            this->data = nullptr;
            this->next = nullptr;
        }

        Node(T data, Node* next){
            this->data = data;
            this->next = next;
        }
};

template<class T>
class Queue{
    public:
        Node<T>* start;
        Node<T>* end;
        int count;

        Queue(){
            start = nullptr;
            end = nullptr;
            count = 0;
        }
        void enqueue(T data){
            Node<T>* x = new Node<T>(data, nullptr);
            if (start == nullptr && end == nullptr){
                start = x;
                end = start;
            }else{
                end->next = x;
                end = x;
            }
            count++;
        }

        void dequeue(){
            if(start == nullptr){
                cout << "Queue is Empty" << endl;
                return;
            }
            Node<T>* temp = start;
            start = start->next;
            count--;
            delete temp;
        }

        void print(){
            Node<T>* p = start;
            while (p != nullptr)
            {
                cout << p->data << " -->";
                p = p->next;
            }
            cout << endl;
        }

        T peek(){
            if(start != nullptr)
                return start->data;
            else
                throw exception();
        }
};

int main(){

    Queue<int> queue;

    queue.enqueue(23);
    queue.enqueue(34);
    queue.enqueue(23);
    queue.enqueue(12);
    queue.enqueue(67);

    cout << "Peek : " << queue.peek() << endl;
    queue.print();

    cout << queue.count << endl;

    queue.dequeue();
    queue.dequeue();

    queue.print();
    cout << "Peek : " << queue.peek() << endl;

    cout << queue.count << endl;

    return 0;
}