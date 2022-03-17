#include <iostream>
#include <string>
using namespace std;

int main()
{
 cout « "ввод числа:\n";
 string s;
 getline(cin, s);

 bool ans = true;
 while (s.length() != 0)
{
  int n = stoi(s); // convert string to number (int)
  ans &= n > 0;
  getline(cin, s);
}

 if (ans)
 cout « "вывод: все числа положительны\n";
 else
 cout « "вывод: не все числа положительны\n";

return 0;
}
