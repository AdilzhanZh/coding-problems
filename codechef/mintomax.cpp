#include <bits/stdc++.h>
using namespace std;

int countNonMinimum(vector<int>& nums) {
	int mn = 101;
	for(int i = 0; i < nums.size(); i++){
		mn = min(mn, nums[i]);
	}
	int c = 0;
	for(int i = 0; i < nums.size(); i++){
		if(mn < nums[i]) c++;
	}
	return c;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int tt; cin >> tt;
	while(tt--){
		int n; cin >> n;
		vector<int> v(n);
		for(int i = 0; i < n; i++){
			cin >> v[i];
		}
		cout << countNonMinimum(v) << "\n";
	}
}
