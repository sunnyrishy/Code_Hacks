Check if the given number is prime or not (composite)

====================================================================================================

Brute Force : 

bool is_prime(int n){
  for(int i = 2; i < n; i++){
    if(n % i == 0) return false;
  }
  return n > 1;
}
// T = O(n)

  ==================================================================================================

  Square Root Method : 

Say n = A x B
then if A >= sqrt(n) and B must be < sqrt(n) vice versa
So If we could find a factor withint sqrt(n) range then we can find the other factor as well.

  bool is_prime(int n){
    for(int i = 2; i*i <= n; i++) {
      if(n % i == 0) return false;
    }
    return n > 1;
  }

// T = O(sqrt(n))
