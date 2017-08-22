#include "bindec.h"

namespace numbers {
std::string bin2dec(std::string binaryValue) {
    std::string binPrefix = "0b";
    if (std::strncmp(binaryValue.c_str(), binPrefix.c_str(),
                     binPrefix.size())) {
        // Cut the 2 first characters of the chain
    }
    // Loop over the figures to obtain the correct value
    // with successive integer multiplication by 2
}

std::string dec2bin(std::string decimalValue) {
    // Loop over the figures to obtain the correct value
    // With successive integer divisions by 2
}
}
