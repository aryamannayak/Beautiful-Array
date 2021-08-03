#include<bits/stdc++.h>
using namespace std;			
#define int long long int
#define rep(i,k,n) for(int i=k;i<n;i++) 
#define all(a) a.begin() , a.end()
void solve(){

	int n;
	cin >> n;
	int a[n];
	rep(i,0,n) cin >> a[i];

	map<int,int> cnt;

	vector <int> possible = {-1,0,1};

	int nums = 0;
	for(auto x : a){
		cnt[x]++;
		nums += !binary_search(all(possible),x);
	}


	if(nums>=2){
		cout << "no\n";
		return;

	}
	if (cnt[-1]==0){
		cout << "yes\n";
	}
	else{
		if(nums==1){
			cout << "no\n";
			return;
		}

		if(cnt[-1]>1 and cnt[1]==0){
			cout << "no\n";
		}

		else cout << "yes\n";
	}



}

signed main(){
	ios ::sync_with_stdio(0);
  cin.tie(0);

	int T;
	cin >> T;
	while(T--) solve();
}
