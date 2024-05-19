#include<iostream>
#include<cstdio>

using namespace std;


class Stack
{
private:
    int _size;
    int _head;
    int* _data;

public:
    Stack(int size){
        _size = size;
        _head = -1;
        _data = new int[size];
    }

    void push(int data){
        if(_head == _size - 1){
            cout << "Stack is Full!" << endl;
            return;
        }
        _data[++_head] = data;
    }

    int& head(){
        if (_head == -1)
        {
            throw exception();
        }
        return _data[_head];
        
    }

    int& pop(){
        // int& last = _data[_head];
        // _head--;
        // return last;
        if (_head == -1)
        {
            throw exception();
        }
        
        return _data[_head--];
    }

    void print(){
        for (int i = 0; i <= _head; i++)
        {
            cout << _data[i] << " ";
        }
        cout << endl;
    }

    bool isEmpty(){
        return _head == -1;
    }
    
};

int main(){

    Stack s(10);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    s.pop();
    s.pop();

    cout << s.head() << endl;
    s.print();
    return 0;
}