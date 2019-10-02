#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> vec={1,2,3,5,6};

    cout<<*(begin(vec )+ 1);

    return 0;
}