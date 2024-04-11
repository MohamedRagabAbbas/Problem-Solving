class DynamicArray {
public:

    int* _arr;
    int _capacity;
    int _size = 0;
    DynamicArray(int capacity) {
        _capacity = capacity;
        _arr = new int[_capacity];
    }

    int get(int i) {
        return _arr[i];
    }

    void set(int i, int n) {
        _arr[i] = n;
    }

    void pushback(int n) {
        if(_capacity==_size)
            resize();
        _arr[_size] = n;
        _size +=1;
    }

    int popback() {
        if(_size>0)
             _size-=1;
        return _arr[_size];
    }

    void resize() {
        _capacity *=2;
        int* newArr = new int[_capacity];
        for(int i = 0 ; i < _size ; i++)
        {
            newArr[i] = _arr[i];
        }
        delete[] _arr;
        _arr = newArr;
    }

    int getSize() {
        return _size;
    }

    int getCapacity() {
        return _capacity;
    }
};
