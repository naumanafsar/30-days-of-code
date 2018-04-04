/*
Day 1 Challenge: DataTypes
The Objects of this challenge
- Add two Integers
- Add two Double exactly upto 1 precision
- Concatenate two strings
*/
#include <iostream>
#include <iomanip>
using namespace std;



int main() {
  int i = 4;
  double j = 4.0;
  string s = "HackerRank ";

  int x = 8;
  double y = 4;
  string h = "is the best practice website!";


  // cin >> x >> y;  You may want to add these commented lines
  // cin.ignore();
  // getline(cin,h);

  std::cout << i + x << '\n';

  std::cout << setprecision(1) << fixed << j + y << '\n';

  std::cout << s << h << '\n';

  return 0;
}
