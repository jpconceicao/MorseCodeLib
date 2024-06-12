#include <iostream>
#include "MorseCode.h"


int main() {
    MorseCode obj;
    std::string inputText;
    
    std::cout << "Digite uma frase para converter em codigo Morse: ";
    std::getline(std::cin, inputText);

    std::string morseCode = obj.textToMorse(inputText);
    std::cout << "Codigo Morse: " << morseCode << std::endl;
    return 0;
}