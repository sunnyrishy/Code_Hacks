Prime factorization is the process of breaking down a composite number into smaller numbers that are prime numbers, 
such that when multiplied together, they give the original number. 
Prime numbers are numbers greater than 1 that have no divisors other than 1 and themselves.
============================================================================================================================

Trial Division Method : 
  
vector<int> factor(int n){
  vector<int> factors;
  for(int d = 2; d*d<= n; d++){
    while(n % d == 0){
      factors.push_back(d);
      n = n/d;
    }
  }
  if(n > 1) factors.push_back(n);
  return factors;
}

=============================================================================================================================
