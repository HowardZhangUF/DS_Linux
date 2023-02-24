#include <iostream>
#include <map>

int main() {
  // Create an empty map
  std::map<std::string, int> myMap;

  // Add some key-value pairs to the map
  myMap["John"] = 25;
  myMap["Mary"] = 30;
  myMap["Bob"] = 20;

  // Access the value associated with a key
  std::cout << "John's age is " << myMap["John"] << std::endl;

  // Iterate over the map
  for (auto it = myMap.begin(); it != myMap.end(); ++it) {
    std::cout << it->first << " is " << it->second << " years old." << std::endl;
  }

  return 0;
}