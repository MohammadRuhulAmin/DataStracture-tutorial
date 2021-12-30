#include<bits/stdc++.h>
using namespace std;
#define rng 1000
int tree[rng];
int arr[rng];
void init(int node,int b, int e){
	if(b == e){
		tree[node] = arr[b];
		return;
	}
	int left = node*2;
	int right = node*2+1;
	int mid = (b+e)/2;
	init(left,b,mid);
	init(right,mid+1,e);
	tree[node] = tree[left]+tree[right];
}
int main(){
	int range;
	cin >> range;
	for(int i = 1;i<=range;i++)cin >> arr[i];
	init(1,1,range); 
	cout << endl;
	for(int i = 1;i<=range*2+1;i++)cout << tree[i] << " ";
	cout << endl;
	
	
	return 0;
}
