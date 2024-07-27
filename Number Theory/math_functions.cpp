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


//Prime Factorization Using Sieve
const int N=10000000;
int pf[N+1];

void pfs(){
	for(int i=1;i<=N;i++) pf[i]=-1;

	for(int i=2;i<=N;i++){
		if(pf[i]==-1){
			for(int j=i;j<=N;j+=i){
				if(pf[j]==-1){
					pf[j]=i;
				}
			}
		}
	}
}



