#include <iostream>
#include <stdexcept>
#include <string>

namespace phonetic{
	std::string find(std::string text, std::string s2);
};

std::string getWord(size_t i, std::string text);

bool ifWordsMatch(std::string str1, std::string str2);

bool ifLettersMatch(char ch1, char ch2);