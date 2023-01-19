#include <iostream>
using namespace std;

void reachHome(int src, int dest) {

    //base case
    if (src == dest) {
        cout << "Pahuch gya" << endl;
        return ;
    }

    //processing - ek step age badh
    src++;

    //recursive call
    reachHome(src, dest);
}

int main() {

    int src = 1;
    int dest = 5;

    reachHome (src, dest);

    return 0;

}