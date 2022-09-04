#include <iostream>
using namespace std;

int main() 
{
  
  int divisor;
  int dividend;
  int quo;
  int remain;

  cout << "What is the dividend?" << endl;
  cin >> dividend;
  
  cout << "What is the divisor? " << endl;
  cin >> divisor;

  quo = dividend / divisor;
  remain = dividend % divisor;

  cout << " " << endl;
  
  cout << "          " << quo << " " << "r" << " " <<  remain << endl;
  cout << "   " << "───────────" << endl;
  cout << "  " << divisor << "│" << "  " << dividend << endl;
  cout << "     " << -divisor*quo << "" << endl;
  cout << "   " << "───────────" << endl;
  cout << "      " << remain << endl;

    return 0;
}
