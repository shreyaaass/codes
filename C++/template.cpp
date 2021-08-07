#include <iostream>
using namespace std;

template <class T>
class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T(size);
    }
    T dot(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            // cout << this->arr[i] << v.arr[i] << endl;
            d += this->arr[i] * v.arr[i];
            // cout << d << endl;
        }
        return d;
    }
};
int main()
{
    vector<int> v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 2;
    v1.arr[2] = 1;
    vector<int> v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 5;
    v2.arr[2] = 0;
    cout << v1.dot(v2);
}