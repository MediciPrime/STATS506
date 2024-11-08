#include <Rcpp.h>

// [[Rcpp::export]]
int gcd(int a, int b) {
  if (b == 0) {
    return a;
  } else {
    return gcd(b, a % b);
  }
}

// [[Rcpp::export]]
int lcm(int a, int b) {
  return (a * b) / gcd(a, b);
}