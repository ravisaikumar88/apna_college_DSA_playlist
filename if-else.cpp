//FINDING MAXIMUM FROM THREE GIVEN NUMBERS
#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int maxNum = max(a, max(b, c));

    cout << maxNum << endl;

    return 0;
}