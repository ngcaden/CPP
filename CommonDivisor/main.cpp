#include <iostream>

using namespace std;

int greatest_common_divisor(int m, int n);

int main()
{
    int m=1, n=1;
    cout << "Enter the smaller number: ";
    cin >> m;
    cout << "Enter the bigger number: ";
    cin >> n;

    if (n < m)
    {
      cout << "Sorry, you entered the numbers incorrectly";
    }

    else
    {
      cout << "Greatest common divisor: ";
      cout << greatest_common_divisor(m,n) << endl;
    }
    return 0;
}

int greatest_common_divisor(int m, int n)
{
    if (m==n)
      return m;

    int subtract;
    subtract = n - m;

    if (subtract <= m)
      return greatest_common_divisor(subtract, m);
    else
      return greatest_common_divisor(m, subtract);

}
