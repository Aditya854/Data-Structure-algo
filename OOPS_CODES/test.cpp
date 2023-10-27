#include <bits/stdc++.h>
using namespace std;

class test{
    private:
    int x = 10;
    public:
    int x = 20;
    test(){
        cout<<"constructor"<<x<<endl;
    }

    void helper()
    {
        cout<<"this is x"<<x<<endl;
    }
};

int main()
{
    test t1;
    t1.helper();
}
