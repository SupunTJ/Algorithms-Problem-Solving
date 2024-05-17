#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

class DynamicArray
{
private:
    int* _data;
    int _capacity;
    int _size;
    void _copy(int* source, int* target, int size){
        for (int i = 0; i < size; i++)
        {
            target[i] = source[i];
        }
        
    }
    
public:
    DynamicArray(int initialcapacity){
        _data = new int[initialcapacity];
        _capacity = initialcapacity;
        _size = 0;
    }

    int get(int index){

    }

    int capacity(){
        return _capacity;
    }

    int size(){
        return _size;
    }

    void remove(){
        if (_size == 0)
        {
            return;
        }
        
        _data[_size - 1] = 0;
        _size--;
    }

    void insert(int data){
        if (_size == _capacity)
        {
            int* _temp = _data;
            _capacity = _capacity * 2;
            _data = new int[_capacity];
            _copy(_temp, _data, _size);
        }
        

        _data[_size] = data; // here we use size as the index of the array, initial size is 0
        _size++; // after inserting size increase by 1
    }

    void print(){
        for (int i = 0; i < _size; i++)
        {
            cout << _data[i] << " " ;
        }
        cout << endl;
    }
    
};



int main(){

    DynamicArray darray(4);
    // cout << darray.capacity() << " " << darray.size() << endl;
    // darray.insert(10);
    // darray.insert(20);
    // darray.insert(30);
    // darray.insert(40);
    // cout << darray.capacity() << " " << darray.size() << endl;
    // darray.insert(34);

    for (int i = 0; i < 4; i++)
    {
        // cout << darray.capacity() << " " << darray.size() << endl;
        darray.insert((i+1) * 10);
    }
    
    
    // cout << darray.capacity() << " " << darray.size() << endl;

    darray.remove();
    darray.print();


    return 0;
}