#include <iostream>
using namespace std;

int divide(int c, int d) {
    if (d == 0) throw "division by zero!";
    return c / d;
}

int main() {
    int a, b;
    cout << "введите делимое и делитель" << endl;
    cin >> a >> b;
    try {
        cout << divide(a, b) << endl;
        
    }
    catch (const char* exception) {
        cout << "Конец" << exception << endl;
        
    }
    return 0;
}
