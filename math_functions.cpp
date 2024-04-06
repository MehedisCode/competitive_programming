#include<bits/stdc++.h>
using namespace std;

// Prime Factorization
vector<int> primeFactorization(int n){
	vector<int> facts;
	for(int i=2;i*i<=n;i++){
		while(n%i==0){
			facts.push_back(i);
			n/=i;
		}
	}
	if(n>1)
		facts.push_back(n);
	return facts;
}


// Binary Exponentiation
long long binpow(long long a, long long n){
	long long res=1;
	while(n){
		if(n&1)
			res=res*a;
		a=a*a;
		n/=2;
	}
	return res;
}
