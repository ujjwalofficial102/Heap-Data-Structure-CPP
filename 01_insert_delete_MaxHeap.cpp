#include <iostream>
using namespace std;

class MaxHeap{
    int *arr;
    int size, total_size;

    public:
    MaxHeap(int n){
        arr = new int[n];
        size = 0;
        total_size = n;
    }

    void insert(int val){ // O(NlogN)
        if(size == total_size){
            cout << "Heap Overflow\n";
            return;
        }
        arr[size] = val;
        int index = size;
        size++;

        while(index > 0 && arr[(index-1)/2] < arr[index]){
            swap(arr[(index - 1) / 2], arr[index]);
            index = (index - 1) / 2;
        }

        cout << val << " is Inserted into the Heap\n";
    }

    void Heapify(int index){ // O(logN)
        int largest = index;
        int left = index * 2 + 1;
        int right = index * 2 + 2;

        if(left < size && arr[left] > arr[largest]){
            largest = left;
        }
        if(right < size && arr[right] > arr[largest]){
            largest = right;
        }

        if(largest != index){
            swap(arr[largest], arr[index]);
            Heapify(largest);
        }
    }

    void Delete(){ // O(logN)
        if(size == 0){
            cout << "Heap Underflow\n";
            return;
        }
        cout << arr[0] << " is Deleted from the Heap\n";
        arr[0] = arr[size - 1];
        size--;

        if(size == 0 || size == 1) return;

        Heapify(0);
    }

    void print(){
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    MaxHeap H1(6);
    H1.insert(2);
    H1.insert(4);
    H1.insert(9);
    H1.insert(14);
    H1.insert(144);
    H1.insert(114);
    H1.print();
    H1.Delete();
    H1.print();
    H1.Delete();
    H1.Delete();
    H1.Delete();
    H1.Delete();
    H1.Delete();
    H1.print();
    H1.Delete();

    return 0;
}