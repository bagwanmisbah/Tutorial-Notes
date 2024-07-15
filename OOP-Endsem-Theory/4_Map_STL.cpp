//AUTHOR :  MISBAH BAGWAN 21487
//WAP to demonstrate MAP:
int main()
{
    int ch;
    map<int, char> m;
    map<int, char>::iterator it;
    int key;
    char val;

    char val;

    while (true)
    {
        cout << "-------------------------------------------------------------" << endl;

        cout << "1.Insert Element into Map: " << endl;
        cout << "2.Search for Element in Map: " << endl;
        cout << "3.Display Element in Map: " << endl;
        cout << "4.Get Map size: " << endl;
        cout << "5.Exit " << endl;
        cout << "Please enter your choice: " << endl;
        cin >> ch;
        cout << "-------------------------------------------------------------" << endl;
        switch (ch)
        {
        case 1:
        {
            cout << "Enter key value: " << endl;
            cin >> key;
            cout << "Enter map value: " << endl;
            cin >> val;
            m.insert(pair<int, char>(key, val));
            cout << "Element inserted: " << endl;
            break;
        }
        case 2:
        {
            int s;
            cout << "Enter key of element you want to search: " << endl;
            cin >> s;
            if (m.count(key) != 0)
            {
                cout << "Element " << m.find(key)->first << "," << m.find(key)->second << "  is present in map " << endl;
            }
            // cout << m[s] << endl;
            break;
        }
        case 3:
        {
            cout << "Elements of Map: " << endl;
            for (it = m.begin(); it != m.end(); it++)
            {
                cout << "[ " << it->first << "," << it->second << "]" << endl;
            }
            break;
        }
        case 4:
        {
            cout << "Map size: " << endl;
            cout << m.size() << endl;
            break;
        }
        case 5:
        {
            cout << "Exiting" << endl;
            break;
        }
        }
    }

    return 0;
}
// OUTPUT:
// -------------------------------------------------------------
// 1.Insert Element into Map:
// 2.Search for Element in Map:
// 3.Display Element in Map:
// 4.Get Map size:
// 5.Exit
// Please enter your choice:
// 1
// -------------------------------------------------------------
// Enter key value: 
// 1
// Enter map value: 
// a
// Element inserted: 
// -------------------------------------------------------------
// 1.Insert Element into Map: 
// 2.Search for Element in Map: 
// 3.Display Element in Map: 
// 4.Get Map size:
// 5.Exit
// Please enter your choice:
// 1
// -------------------------------------------------------------
// Enter key value:
// 2
// Enter map value: 
// b
// Element inserted: 
// -------------------------------------------------------------
// 1.Insert Element into Map:
// 2.Search for Element in Map:
// 3.Display Element in Map:
// 4.Get Map size:
// 5.Exit
// Please enter your choice:
// 1
// -------------------------------------------------------------
// Enter key value:
// 3
// Enter map value: 
// c
// Element inserted: 
// -------------------------------------------------------------
// 1.Insert Element into Map:
// 2.Search for Element in Map:
// 3.Display Element in Map:
// 4.Get Map size:
// 5.Exit
// Please enter your choice:
// 2
// -------------------------------------------------------------
// Enter key of element you want to search:
// 3
// Element 3,c  is present in map 
// -------------------------------------------------------------
// 1.Insert Element into Map:
// 2.Search for Element in Map:
// 3.Display Element in Map:
// 4.Get Map size:
// 5.Exit
// Please enter your choice:
// 3
// -------------------------------------------------------------
// Elements of Map:
// [ 1,a]
// [ 2,b]
// [ 3,c]
// -------------------------------------------------------------
// 1.Insert Element into Map:
// 2.Search for Element in Map:
// 3.Display Element in Map:
// 4.Get Map size:
// 5.Exit
// Please enter your choice:
// 4
// -------------------------------------------------------------
// Map size:
// 3
// -------------------------------------------------------------
// 1.Insert Element into Map:
// 2.Search for Element in Map:
// 3.Display Element in Map:
// 4.Get Map size:
// 5.Exit
// Please enter your choice:
