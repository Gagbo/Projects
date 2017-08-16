#ifndef SRC_NUMBERS_MORTGAGE_H
#define SRC_NUMBERS_MORTGAGE_H
#include <iostream>
#include <cmath>

namespace numbers {

/* Gives the remaining sum to pay after having payed 'payment' from it, at
 * an interest rate of rate
 */
float calculate_remaining_capital(float before_capital, float rate,
                                  float payment);

/* Gives the number of terms to pay for a loan of value 'capital',
 * with rate of interest over terms, and with this payment
 * Naive implementation with a loop, but gives all sums to pay
 */
int calculate_number_of_terms(float capital, float rate, float payment);

/* Gives the minimum payment to make in order to reimburse a loan
 * in under a given number of terms
 * Smart implementation using geometric suites artihmetic
 */
float calculate_payment_for_terms(float capital, float rate, int terms);
}

#endif  // SRC_NUMEBRS_MORTGAGE_H
