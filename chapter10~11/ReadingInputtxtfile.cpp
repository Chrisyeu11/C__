#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main() {
    std::ifstream inputFile("input.txt");
    if (!inputFile) {
        std::cerr << "Error opening file." << std::endl;
        return 1;
    }

    std::string line;
    int totalWords = 0;
    int totalLines = 0;

    while (std::getline(inputFile, line, '*')) {
        std::istringstream iss(line);
        std::string word;
        int wordsInLine = 0;

        while (iss >> word) {
            ++wordsInLine;
            ++totalWords;
        }

        std::cout << "Number of words in line " << totalLines + 1 << ": " << wordsInLine << std::endl;
        ++totalLines;
    }

    std::cout << "Total number of lines: " << totalLines << std::endl;
    std::cout << "Total number of words in the file: " << totalWords << std::endl;

    inputFile.close();

    return 0;
}