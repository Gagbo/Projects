#include "fibonacci.h"

namespace numbers {

/* Finding the value of F(n) mod m quickly using the Pisano period
 *
 * This function looks for the length of the Pisano period for given m,
 * and then uses this period to call recursively the function to find the result
 */
int fibonacciFast_modm(long long n, int m){
    if(n <= 1)
        return n;
    int F[3];
    long pisanoPeriod;
    F[0] = 0;
    F[1] = 1;

    for (int i = 2; i<=n; ++i){
        F[i%3] = (F[(i-1)%3] + F[(i-2)%3]) %m;
        if (F[i%3] <0){
            break;
        }
        if (F[i%3] == 1 && F[(i-1)%3] == 0){
            pisanoPeriod = i-1;
            return fibonacciFast_modm(n%pisanoPeriod,m);
        }
    }
    return F[n%3];
}

/* Naive Fibonacci implementation
 * Very costly because the count of recursive calls doubles
 * at each step. So the complexity is exponential
 */
long long fibonacci(int n){
  if (n <= 1)
    return n;
  else
    return fibonacci(n-1) + fibonacci(n-2);
}

/* Faster resolution of Fibonacci, filling the table
 * progressively.
 */
long long fibonacciFast(int n){
  if(n <= 1)
    return n;
  if (n > 4000) {
    std::cerr << "n cannot be bigger than 4000 \n";
    return -1;
  }
  long long F[4001];
  F[0] = 0;
  F[1] = 1;
  for (int i = 2; i<=n; ++i){
    F[i] = F[i-1] + F[i-2];
  }
  return F[n];
}

}
