#include <iostream>
using namespace std;

int main() {
  int N;

  if(N % 2 == 0) {
    if(N > 1 && N < 5) std::cout << "Weird!" << '\n';
    else if(N >= 6 && N <= 20) std::cout << "Not Weird!" << '\n';
    else if(N > 20) std::cout << "Weird!" << '\n';
    }
  else std::cout << "Not Weird!" << '\n';

  return 0;
}
