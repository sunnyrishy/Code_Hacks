Find all divisors of a number using SQRT method

for(int i = 1; i*i <= n; i++) {
  if(n%i == 0){
    if(i != n/i){
      cout<<i<<" "<<n/i<<" "<<endl;
    }
    else cout<<i<<" "<<endl;
  }
}
