//This testcase is made by Nguyen Chinh Khoi!

    int a = 5, n = 16;
    FragmentLinkedList<int> fList(a);
    for(int i = 0; i < n ; i++)
    {
        fList.add(i*i);
    }
    cout << "- Add i*i to list (i from 0 to " << n - 1 << "): " << endl;
    cout << fList.toString() << endl;

    fList.add(4, 7);
    cout << "- Add 7 to index 4:" << endl << fList.toString() << endl;

    cout << "- Remove item 4, return: " << fList.removeAt(4) << endl;
    cout << fList.toString() << endl;

    cout << "- Remove item last, return: " << fList.removeAt(fList.size() - 1)  << endl;
    cout << fList.toString() << endl;

    cout << "- Remove item 5, return: " << fList.removeAt(5) << endl;
    cout << fList.toString() << endl;

    fList.set(4, 69);
    cout << "- Set index 4 to 69:" << endl << fList.toString() << endl;

    cout << "- Check index 6: " << fList.indexOf(6) << endl << endl;
    cout << "- Check index 10: " << fList.indexOf(10) << endl << endl;
    cout << "- Check item with value of 6: " << fList.contains(6) << endl << endl;
    cout << "- Check item with value of 64: " << fList.contains(64) << endl << endl;
    cout << "- Get value of index 5: " << fList.get(3) << endl << endl;


    using iterator = FragmentLinkedList<int>::Iterator;

    cout << "Original list:     " << fList.toString() << endl;
    cout << "Iterator checking: " << "[";
    string x = ", ";
    for (iterator i = fList.begin(); i != fList.end(); i++)
        {
            if (*i == fList.get(fList.size() - 1))
            {
                i.set(96);
                x = "";
            }
            cout << *i << x;
        }
    cout << "]" << endl << endl;


    iterator it = fList.begin();
    cout << "Prefix checking: " << *(it++) << " = " << *it << endl << endl;

    it = fList.begin();
    it.remove();
    it++;
    cout << "List after modified: " << endl << fList.toString() << endl;
    cout << "Remove & Increase the first node checking: " << *it;
    if (*it == fList.get(0)) cout << "   --TRUE--"; else cout << "  --FALSE--";
    cout << endl << endl;


    //Problem M
    it = fList.begin();
    fList.add(0, 69);
    it.remove();
    it++;
    cout << "List after modified: " << endl << fList.toString() << endl;
    cout << "Remove & Increase the first iterator points node checking: " << *it;
    cout << endl << endl;

    //Problem M repeat
    it = fList.begin();
    fList.add(0, 6969);
    it.remove();
    it++;
    cout << "List after modified: " << endl << fList.toString() << endl;
    cout << "Remove & Increase the first iterator points node checking: " << *it;
    cout << endl << endl;

    fList.clear();
    cout << "Check clear:  " << fList.toString() << endl << endl;
