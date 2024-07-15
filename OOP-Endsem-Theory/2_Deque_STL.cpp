//AUTHOR :  MISBAH BAGWAN 21487
//WAP to demonstrate  DEQUE
int main()
{
    deque<int> dq;
    deque<int>::iterator it;
    int item, n;
 
    cout << "Enter elements to push into front end of deque: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> item;
        dq.push_front(item);
    }

    /*for (int i = 0; i < 3; i++)
    {
        cout << dq.at(i) << endl;
    }*/
    cout << "Enter elements to push into back end of deque: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> item;
        dq.push_back(item);
    }

    cout << "Elements after inserting at both front and back of deque: " << endl;
    for (it = dq.begin(); it != dq.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}
// OUTPUT:
// Enter elements to push into front end of deque: 
// 1
// 2
// 3
// Enter elements to push into back end of deque:
// 4
// 5
// 6
// Elements after inserting at both front and back of deque:
// 3
// 2
// 1
// 4
// 5
// 6
