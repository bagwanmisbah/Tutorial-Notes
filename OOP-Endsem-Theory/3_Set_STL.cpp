//AUTHOR :  MISBAH BAGWAN 21487
//WAP to demonstrate ASSOCIATIVE CONTAINER -SET
int main()
{
    set<int> s;
    set<int>::iterator it;
    int item;

    // cout << "Enter element to insert in Set: " << endl;
    for (int i = 1; i <= 10; i++)
    {
        // cin >> item;
        s.insert(i * 10);
    }
    cout << "Elements before erasing: " << endl;
    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }

    // cout << s.find(12);
    set<int>::iterator itlow, itup;
    itlow = s.lower_bound(30);
    itup = s.upper_bound(50);
    s.erase(itlow, itup);

    cout << "Elements after erasing using upper and lower bound: " << endl;

    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }

    cout << "Number of times 20 appeared: " << s.count(20) << endl;
    cout << "size: " << s.size() << endl;

    return 0;
}
OUTPUT:
Elements before erasing: 
10
20
30
40
50
60
70
80
90
100
Elements after erasing using upper and lower bound:
10
20
60
70
80
90
100
Number of times 20 appeared: 1
size: 7
