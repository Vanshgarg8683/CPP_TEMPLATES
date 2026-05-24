vector<int>sieve(100001, 1);
sieve[0]=0;
sieve[1]=0;
for(int i=2;i*i<=100000;i++){
    if(sieve[i]){
      for(int j=i*i;j<=100000;j+=i) sieve[j]=0;
    }
}
