#include "mortgage.h"

namespace numbers {

float calculate_remaining_capital(float before_capital, float rate,
                                  float payment) {
    float result;
    result = (1 + rate) * before_capital - payment;
    return result;
}

int calculate_number_of_terms(float capital, float rate, float payment) {
    float remaining_capital(capital);
    int terms(0);
    while (remaining_capital > payment) {
        remaining_capital =
            calculate_remaining_capital(remaining_capital, rate, payment);
        ++terms;
        std::cout << "Term " << terms << " : still " << remaining_capital
                  << "to pay\n";
    }
    if(remaining_capital != 0) {
      ++terms;
      std::cout << "Last term " << terms << " : pay " << remaining_capital
                << "\n";
    }
          return terms;
}

float calculate_payment_for_terms(float capital, float rate, int terms) {
  return capital * rate / (1 - std::pow(1+rate, -1*terms));
}

}
