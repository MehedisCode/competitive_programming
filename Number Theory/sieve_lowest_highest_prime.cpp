// Sieve_prime_factors_using_lowest_highest_prime

const int N = 1e7 + 10;
vector<bool> isPrimeArr(N, 1);
vector<int> lowPrime(N, 0), highPrime(N, 0);

void getPrimeArr(){
	isPrimeArr[0]=isPrimeArr[1]=false;

	for(int i=2;i<N;i++){
		if(isPrimeArr[i]){
			lowPrime[i]=highPrime[i]=i;
			for(int j=2*i;j<N;j+=i){
				isPrimeArr[j]=false;
				highPrime[j]=i;
				if(lowPrime[j]==0) lowPrime[j]=i;
			}
		}
	}
}
 
void solve(){
	getPrimeArr();

	vector<int> factors;
	int n = 100;
	while(n>1){
		dbg(n);
		int f = lowPrime[n];
		while(n%f==0){
			factors.push_back(f);
			n/=f;
		}
	}
	cout<<factors<<endl;
}