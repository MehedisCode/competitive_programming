// store_divisior_of_all_numbers_and_sum 

const int N = 1e5 + 10;
vector<int> divisors[N];
int sum[N];

void getDivisors(){
	for(int i=2;i<N;i++){
		for(int j=i;j<N;j+=i){
			divisors[j].push_back(i);
			sum[j]+=i;
		}
	}
}
 
void solve(){
	getDivisors();
	for(int i=1;i<=10;i++){
		cout<<divisors[i]<<endl;
	}

}