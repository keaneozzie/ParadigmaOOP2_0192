#include <iostream>
using namespace std;

class seseorang {
public:
    virtual void pesan() = 0; // pure virtual function
    // virtual void pesan() {
    //     cout << "Hallo saya seseorang\n" << endl;
    // }

};

class joko : public seseorang {
public:
    void pesan() {
        cout << "Pesan dari joko\n" << endl;
    }

};

