#include <iostream>
using namespace std;

int hw2_part1(int n)
{
 int result = n % 10;
 while (n != 0)
{
  n = n / 10;
  if (n > 0)
  result = result * 10 + n % 10;
}
 return result;
}

int main()
{
 int n;
 cout « "ввод n: "; cin » n;

 int ans = hw2_part1(n);
 cout « "перевернутое число будет " « ans « endl;
return 0;
}
