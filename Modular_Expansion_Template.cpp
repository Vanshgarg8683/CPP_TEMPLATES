const long long mod=1000000007;
long long modexp(long long base, long long expo){
    long long res=1;
    while(expo>0){
      if(expo&1) res=(res*base)%mod;
      base=(base*base)%mod;
      expo/=2;
    }
    return res;
}
