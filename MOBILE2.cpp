#include <iostream>

using namespace std;
int MAX = 200000;

int main() {
	int T, i, n, count, l, r;
	int L[MAX], R[MAX], lo[MAX], hi[MAX];
	cin>>T;
	while(T--) {
		cin>>n;

		for(i = 1; i <= n; i++) {
			cin>>L[i]>>R[i];
			if(L[i] == -1) 
				L[i] = 0;
			if(R[i] == -1)
				R[i] = 0;
		}

		count = 0;
		for(i = n; i >= 1; i--) {
			l = L[i], r = R[i];
			if(hi[r] > lo[l])
				count++;
			lo[i] = (lo[l] < lo[r] ? lo[l] : lo[r]) + 1;
			hi[i] = (hi[l] > hi[r] ? hi[l] : hi[r]) + 1;

			if((lo[l] != hi[l] && lo[r] != hi[r]) || (hi[i] - lo[i] > 1)) {
				cout<<"-1\n";
				break;
			}
		}
		if(i == 0)
			cout<<count<<"\n";
	}
	return 0; 
}