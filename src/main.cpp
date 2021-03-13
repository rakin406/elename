#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#include "./elements.h"

void print_elements(std::vector<std::string> vec) {
  if (vec.empty()) {
    std::cout << "No elements\n";
  } else {
    for (const auto &elem : vec) {
      if (elem == vec.back()) {
        std::cout << elem << "\n";
      } else {
        std::cout << elem << ", ";
      }
    }
  }
}

int main() {
  std::string word;
  std::vector<std::string> elements_in_word;

  while (true) {
    std::cout << ">> ";
    std::getline(std::cin, word);
    std::transform(word.begin(), word.end(), word.begin(), ::tolower);

    for (const auto &elem : ELEMENTS) {
      if (word.find(elem.first) != std::string::npos) {
        elements_in_word.push_back(elem.second);
      }
    }

    std::sort(elements_in_word.begin(), elements_in_word.end());
    print_elements(elements_in_word);
    elements_in_word.clear();
  }

  return 0;
}
