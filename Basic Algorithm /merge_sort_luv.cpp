const int N = 1e5+10;
int List[N];

void merge(int l, int r, int mid){
	int sizeL = mid-l+1;
	int sizeR = r - mid;
	int L[sizeL+1], R[sizeR+1];
	for(int i=0;i<sizeL;i++){
		L[i] = List[l+i];
	}
	for(int i=0;i<sizeR;i++){
		R[i] = List[mid+1+i];
	}

	L[sizeL] = R[sizeR] = INT_MAX;
	int indL = 0, indR = 0;
	for(int i=l;i<=r;i++){
		if(L[indL] <= R[indR]){
			List[i] = L[indL++];
		}else{
			List[i] = R[indR++];
		}
	}
}

void mergeSort(int l, int r){
	if(l==r) return;
	int mid = (l+r)/2;
	mergeSort(l, mid);
	mergeSort(mid+1, r);
	merge(l,r,mid);
}
 
void solve(){
	int n; cin>>n;
	for(int i=0;i<n;i++){
		cin>>List[i];
	}
	mergeSort(0, n-1);
	dbg(List, 5);
}