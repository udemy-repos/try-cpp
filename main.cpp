// #include <iostream>

// using namespace std;

// int main() {
//     cout << "Hello Testing" << endl;
//     return 0;
// }


// Example program
#include <iostream>
#include <string>

int main()
{
  std::string name;
  std::cout << "What is your name? ";
  getline (std::cin, name);
  std::cout << "Hello, " << name << "!\n";
}