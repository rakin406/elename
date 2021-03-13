#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#include "./elements.h"

void printElements(std::vector<std::string> vec) {
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
  std::vector<std::string> elementsInWord;

  while (true) {
    std::cout << ">> ";
    std::getline(std::cin, word);
    std::transform(word.begin(), word.end(), word.begin(), ::tolower);

    for (const auto &elem : ELEMENTS) {
      if (word.find(elem.first) != std::string::npos) {
        elementsInWord.push_back(elem.second);
      }
    }

    std::sort(elementsInWord.begin(), elementsInWord.end());
    printElements(elementsInWord);
    elementsInWord.clear();
  }

  return 0;
}
