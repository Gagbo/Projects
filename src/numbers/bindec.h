#ifndef SRC_NUMBERS_BINDEC_H
#define SRC_NUMBERS_BINDEC_H
#include <cstring>
#include <string>

namespace numbers {

/* Gives the decimal representation of a binary value in string
 * Strings are used to force devs out of using built it tools here
 */
std::string bin2dec(std::string binaryValue);

/* Gives the binary representation of a decimal value in string
 * Strings are used to force devs out of using built it tools here
 */
std::string dec2bin(std::string decimalValue);
}

#endif  // SRC_NUMBERS_BINDEC_H
