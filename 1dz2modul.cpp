//это я долги сдаю
#include <iostream>

using namespace std;

int* sum(int n, int* a, int* b){ 
    int* sarr = new int[n];
    
    for (int i = 0; i<n; i++)
    sarr[i] = a[i] + b[i];
    
    for (int i = 0; i<n; i++)
    cout << sarr[i] << " ";
    
    return 0;
}

int* vichet(int n, int* a, int* b){ 
    int* varr = new int[n];
    
    for (int i = 0; i<n; i++)
    varr[i] = a[i] - b[i];
    
    for (int i = 0; i<n; i++)
    cout << varr[i] << " ";
    
    return 0;
}

int main(){
    
    int n;
    cout << "Введите кол-во элементов массива:" << endl;
    cin >> n;
    
    cout << "Введите элементы первого массива:" << endl;
    
    int arr[n];
    for (int i = 0; i<n; i++)
    cin >> arr[i];
    
    cout << "Введите знак:" << endl;
    char x;
    cin >> x;
    
    cout << "Введите элементы второго массива:" << endl;
    
    int brr[n];
    for (int i = 0; i < n; i++)
    cin >> brr[i];
    
    cout << "Полученный массив:" << endl;
    
    if (x == '+')
    *sum(n, arr, brr);
    
    if (x == '-')
    vichet(n, arr, brr);
    
    return 0;
}
