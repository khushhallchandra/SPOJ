#include <iostream>
#include <set>

using namespace std;

int main(){
	int T,N,R,I,C,r;
	cin>>T;
	for(int i =1;i<=T;i++){
		cin>>N>>R;
		r=R;
		set< pair< int,int > > s;
		while(R--){
			cin>>I>>C;
			s.insert(make_pair(I,C));
		}
		cout<<"Scenario #"<<i<<": "<<(s.size( ) == r?"possible\n":"impossible\n");
	}
	return 0;
}