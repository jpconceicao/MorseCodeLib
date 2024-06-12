#ifndef MORSECODE_H
#define MORSECODE_H

#include <iostream>
#include <map>
#include <string>

class MorseCode 
{
public:
    MorseCode();
    std::string textToMorse(const std::string& text);
    std::string MorseToText(const std::string& morse);
    

private:  
    std::map<char, std::string> createMorseCodeMap();
};

#endif //MORSECODE_HPP