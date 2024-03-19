#include <iostream>
#include "lib_test.h"

using namespace std;

static void print_counters(Counter *c){
    cout << "Private = " << c->get_private() << "\tPublic = " << c->count << "\n";
}


int main(){

    cout << "In main function\n";
    Counter c1 = Counter();
    print_counters(&c1);

    cout << "INCREMENT\n\n";
    c1.increment_private();
    c1.increment_public();

    print_counters(&c1);

    cout << "DECREMENT\n\n";

    c1.decrement_private();
    c1.decrement_public();

    print_counters(&c1);



    return 0;
}
