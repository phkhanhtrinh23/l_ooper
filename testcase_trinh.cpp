BusSystem* bs = new BusSystem();
    cout << bs->query("SQ 500") << endl;// 1
    cout << bs->query("INS 50 50D1-23342 1234 5678") << endl;// 1
    cout << bs->query("INS 50 50D1-12346 1 1235 5678") << endl;// 2
    cout << bs->query("INS 50 50D1-12347 1235 5678") << endl;// 3
    cout << bs->query("DEL 50") << endl;// 3
    cout << bs->query("INS 50 50D1-12345 1 1234 6789") << endl;// 1
    cout << bs->query("INS 51 50D1-54321 0 1234 6789") << endl;// 1
    cout << bs->query("DEL 51 1235 1444") << endl;//0
    cout << bs->query("CS 50 4444 1") << endl;// 1
    cout << bs->query("CS 50 4444 0") << endl;// 0
    cout << bs->query("CS 50 4444") << endl;// 1
    cout << bs->query("CE 50 6799 1") << endl;// 1
    cout << bs->query("CE 50 6799 0") << endl;// 0
    cout << bs->query("CE 50 6799") << endl;// 1
    cout << bs->query("GE 50 6799") << endl;// 50D1-54321
    cout << bs->query("GE 50 6799 0") << endl;// -1
    cout << bs->query("GE 50 6799 1") << endl;// 50D1-12345
    cout << bs->query("GS 50 1444") << endl;// 50D1-12345
    cout << bs->query("GS 50 1444 0") << endl;// -1
    cout << bs->query("GS 50 1444 1") << endl;// 50D1-12345
    cout << bs->query("CS 51 4444 1") << endl;// 0
    cout << bs->query("CS 51 4444 0") << endl;// 1
    cout << bs->query("CS 51 4444") << endl;// 1
    cout << bs->query("CE 51 6799 1") << endl;// 0
    cout << bs->query("CE 51 6799 0") << endl;// 1
    cout << bs->query("CE 51 6799") << endl;// 1
    cout << bs->query("GE 51 6799") << endl;// 50D1-54321
    cout << bs->query("GE 51 6799 0") << endl;// 50D1-54321
    cout << bs->query("GE 51 6799 1") << endl;// -1
    cout << bs->query("GS 51 1444") << endl;// 50D1-54321
    cout << bs->query("GS 51 1444 0") << endl;// 50D1-54321
    cout << bs->query("GS 51 1444 1") << endl;// -1
    cout << bs->query("INS 51 51D1-65432 1 1234 6789") << endl;// 2
    cout << bs->query("GS 51 1444") << endl;// 50D1-54321
    cout << bs->query("GE 51 6799") << endl;// 50D1-54321

    delete bs;
