#include <iostream>
using namespace std;

struct employee {
    int eID;
    char favchar;
    float salary;
};


int main () {

    struct employee khushi;
    khushi.eID;
    khushi.favchar = 'c';
    khushi.salary =1900;
    cout <<khushi.salary <<endl;
    return 0;

}