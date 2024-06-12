#include "MorseCode.h"

MorseCode::MorseCode()
{
    
}

std::map<char, std::string> MorseCode::createMorseCodeMap()
{
    std::map<char, std::string> morse_code_map;
    morse_code_map['A'] = ".-";
    morse_code_map['B'] = "-...";
    morse_code_map['C'] = "-.-.";
    morse_code_map['D'] = "-..";
    morse_code_map['E'] = ".";
    morse_code_map['F'] = "..-.";
    morse_code_map['G'] = "--.";
    morse_code_map['H'] = "....";
    morse_code_map['I'] = "..";
    morse_code_map['J'] = ".---";
    morse_code_map['K'] = "-.-";
    morse_code_map['L'] = ".-..";
    morse_code_map['M'] = "--";
    morse_code_map['N'] = "-.";
    morse_code_map['O'] = "---";
    morse_code_map['P'] = ".--.";
    morse_code_map['Q'] = "--.-";
    morse_code_map['R'] = ".-.";
    morse_code_map['S'] = "...";
    morse_code_map['T'] = "-";
    morse_code_map['U'] = "..-";
    morse_code_map['V'] = "...-";
    morse_code_map['W'] = ".--";
    morse_code_map['X'] = "-..-";
    morse_code_map['Y'] = "-.--";
    morse_code_map['Z'] = "--..";
    morse_code_map['1'] = ".----";
    morse_code_map['2'] = "..---";
    morse_code_map['3'] = "...--";
    morse_code_map['4'] = "....-";
    morse_code_map['5'] = ".....";
    morse_code_map['6'] = "-....";
    morse_code_map['7'] = "--...";
    morse_code_map['8'] = "---..";
    morse_code_map['9'] = "----.";
    morse_code_map['0'] = "-----";
    morse_code_map[' '] = " ";  // Space between words

    return morse_code_map;
}

std::string MorseCode::MorseToText(const std::string& morse)
{
    
}

std::string MorseCode::textToMorse(const std::string& text) {
    std::map<char, std::string> morse_code_map = createMorseCodeMap();
    std::string morseCode = "";

    for (char c : text) {
        // Convert character to uppercase
        char upperChar = toupper(c);

        // Check if character is in Morse code map
        if (morse_code_map.find(upperChar) != morse_code_map.end()) {
            morseCode += morse_code_map[upperChar] + " ";
        } else {
            // If character is not found, add a space
            morseCode += " ";
        }
    }

    return morseCode;
}
