#include "SkipList.h"
#include <iostream>
#include <time.h>
#include <unistd.h>
using namespace std;

int main()
{
    srand(getpid());
    SkipList s;
    s.insertN(5);
    s.insertN(2);
    s.insertN(7);
    s.insertN(30);
    s.printSkipA();
    cout <<endl;
    cout << "Search for 2 -> " << s.searchN(2) << endl;
    cout << "Search for 30 -> " << s.searchN(30)<< endl;
    cout << "Search for 7 -> " << s.searchN(7)<< endl;
    cout << "Search for 15 -> " << s.searchN(15)<< endl;
    cout <<"Search for 5 -> " << s.searchN(5)<< endl;
    cout <<endl;
    s.deleteN(30);
    s.printSkipA();
    s.deleteN(2);
    s.printSkipA();
    s.insertN(12);
    s.printSkipA();
    s.deleteN(21);

    cout << " Print layer 2"<< endl;
    s.printLayer(2);
    cout <<endl;
    cout <<endl;
    cout << " Print layer 3"<< endl;
    s.printLayer(3);
    cout <<endl;
    cout <<endl;

    s.getLayers();
    cout << "Print skip another approach" <<endl;
    s.printSkip();
    return 0;
}
