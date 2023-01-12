#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numbers = {4, 1, 3, 2, 5};
    std::sort(numbers.begin(), numbers.end());
    // numbers is now {1, 2, 3, 4, 5}
  
    for (auto x: numbers)
    {
      std::cout << x << '\t'; 
    }
    std::cout << std::endl;
  
    return 0;
}
