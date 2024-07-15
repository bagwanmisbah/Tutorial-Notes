//AUTHOR :  MISBAH BAGWAN 21487
//WAP to demonstrate all functions of VECTOR 
#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector<int> v;
    vector<int>::iterator it;
    int item;
    cout << "Enter elements for Vector: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> item;
        v.push_back(item);
    }
    cout << "Elements in Vector: " << endl;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }
    cout << "Size of Vector: " << v.size() << endl;
    cout << "Capacity of Vector: " << v.capacity() << endl;
    cout << "Maximum Size of Vector: " << v.max_size() << endl;
    if (v.empty() == false)
    {
        cout << "Vector is not empty" << endl;
    }
    else
    {
        cout << "Vector is  empty" << endl;
    }
    cout << "Reversing elements from Vector" << endl;
    for (auto i = v.rbegin(); i != v.rend(); i++)
    {
        cout << *i << endl;
    }
    cout << "Element at v[2]: " << v.at(2) << endl;
    cout << "First element: " << v.front() << endl;
    cout << "Last element: " << v.back() << endl;

    return 0;
}
// OUTPUT:
// Enter elements for Vector: 
// 1
// 2
// 3
// Elements in Vector: 
// 1
// 2
// 3
// Size of Vector: 3
// Capacity of Vector: 4
// Maximum Size of Vector: 1073741823
// Vector is not empty
// Reversing elements from Vector    
// 3
// 2
// 1
// Element at v[2]: 3
// First element: 1
// Last element: 3


