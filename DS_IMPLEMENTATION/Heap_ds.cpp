#include<bits/stdc++.h>
using namespace std;


class heap_ds{
    private:
      int heap_size;
      int capacity;
      vector<int> arr;

    public:
    heap_ds(int cap){
        heap_size=0;
        capacity=cap;
        arr.resize(capacity);
    }  

    int parent(int i)
    {
        return (i-1)/2;
    }

    int left_child(int i)
    {
        return 2*i + 1;
    }

    int right_child(int i)
    {
        return 2*i + 2;
    }

    void swap(int *x, int *y)
    {
        int temp = *x;
        *x = *y;
        *y = temp;
    }
 


// insert into heapds
// TC:- O(logN)
    void insert(int k)
    {
       if(heap_size==capacity)
       {
        cout<<"Overflow"<<endl;
        return;
       }

       heap_size++;
       int i=heap_size-1;
       arr[i]=k;

       while(i!=0 && arr[i]<arr[parent(i)])
       {
         swap(&arr[i],&arr[parent(i)]);
         i =  parent(i);
       }
    }


// get the minimum element from min heapds
// TC :- log(N)
    int extract_min()
    {
        if(heap_size<=0)
        {
            cout<<"Uderflow"<<endl;
            return INT_MAX;
        }

        if(heap_size==1)
        {
            heap_size--;
            return arr[0];
        }

        int root = arr[0];
        arr[0] = arr[heap_size-1];
        heap_size--;
        heapify(0);

        return root;
    }

// return the min element without deleting it from the ds
// TC :-O(1)
    int get_min()
    {
        return arr[0];
    }


//to heapify a subtree whith root at given index
// TC :-O(N)
    void heapify(int i)
    {
        int l = left_child(i);
        int r = right_child(i);

        int smallest = i;

        if(l<heap_size && arr[i] > arr[l])
        {
            smallest=l;
        }

        if(r<heap_size && arr[smallest] > arr[r])
        {
            smallest=r;
        }

        if(smallest!=i)
        {
            swap(&arr[smallest],&arr[i]);
            heapify(smallest);
        }
    }


// delete the key stored at index i
// TC:- O(logn)
    void delkey(int i)
    {
       decrease_key(i,INT_MIN);
       extract_min();
    }

    void decrease_key(int i,int new_val)
    {
        arr[i]=new_val;

        while(i!=0 && arr[parent(i)] > arr[i])
        {
            swap(&arr[parent(i)],&arr[i]);
            i=parent(i);
        }
    }

    void print()
    {
        for(int i=0;i<heap_size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<< "wait"<<endl;
    }
};






int main()
{
     heap_ds  h(11);
    h.insert(3);
    h.insert(2);
    h.print();
    h.delkey(1);
    h.print();
    h.insert(15);
    h.insert(5);
    h.insert(4);
    h.insert(45);
    h.print();
    cout << h.extract_min() << " "<<endl;
    h.print();
    cout << h.get_min() << " "<<endl;
    h.print();
    h.decrease_key(2, 1);
    h.print();
    cout << h.get_min()<<endl;
    h.print();
    return 0;
}

