// This program prints the elements from any words, if available.
// For example, Rakin -> Radium, Potassium, Iodine, Nitrogen.
// Radium comes from "Ra" in "Rakin", Potassium comes from 'K' in "Rakin".
// You get the idea.

// TODO(rakin406):

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#include "./elements.h"

// Print the elements from given vector
void print_elements(std::vector<std::string> *vec) {
    if (vec->empty()) {
        std::cout << "No elements\n";
    } else {
        for (const auto &elem : *vec) {
            // Separate elements with comma because it looks better
            if (elem == vec->back()) {
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

        // Convert word to lowercase because it's easier to parse. Check
        // the elements from the periodic table header, they are lowercase and
        // so the word has to be lowercase too.
        std::transform(word.begin(), word.end(), word.begin(), ::tolower);

        for (const auto &elem : ELEMENTS) {
            if (word.find(elem.first) != std::string::npos) {
                elements_in_word.push_back(elem.second);
            }
        }

        // Sort elements alphabetically for better look?
        std::sort(elements_in_word.begin(), elements_in_word.end());

        print_elements(&elements_in_word);

        // Clear the vector or else elements of previous word will be appended
        elements_in_word.clear();
    }

    return 0;
}
