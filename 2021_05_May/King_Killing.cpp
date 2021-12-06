/**
 * Author  : BurningTiles
 * Created : 2021-05-17 05:03:56
 * Link    : BurningTiles.github.io
 * File    : King_Killing.cpp
**/

#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
#define endl '\n'
using namespace std;

struct TreeNode {
	int data, level;
	vector<TreeNode *> child;
	TreeNode(int x) {
		data = x;
		level = 0;
	}
};

void createTree(TreeNode *root, vector<vector<int>> &adjacent, vector<bool> &visited){
	visited[root->data] = 1;
	for(int i=0; i<adjacent[root->data].size(); i++){
		if(!visited[adjacent[root->data][i]]){
			TreeNode *temp = new TreeNode(adjacent[root->data][i]);
			root->child.push_back(temp);
		}
	}
	for(int i=0; i<root->child.size(); i++)
		createTree(root->child[i],adjacent,visited);
}

void DepthForSearch(TreeNode *root, int l) {
	root->level=l;
	for(int i=0; i<root->child.size(); i++){
		TreeNode *current = root->child[i];
		DepthForSearch(current, l+1);
	}
}

vector<pair<int, int>> leaves;
void DepthForSearchSecond(TreeNode *root){
	for(int i=0; i<root->child.size(); i++) {
		TreeNode *current = root->child[i];
		DepthForSearchSecond(current);
	}
	if(root->child.size()==0)
		leaves.push_back({root->level,root->data+1});
}

void solve() {
	int n;
	cin >> n;
	vector<vector<int>> adjacent(n);
	for(int i=0; i<n-1; i++){
		int u, v;
		cin >> u >> v;
		u--;
		v--;
		adjacent[u].push_back(v);
		adjacent[v].push_back(u);
	}
	
	TreeNode *root = new TreeNode(0);
	vector<bool> visited(n,0);
	createTree(root,adjacent,visited);
	DepthForSearch(root, 0);
	vector<pair<int,int>> ans;
	
	for(int i=0; i<root->child.size(); i++){
		DepthForSearchSecond(root->child[i]);
		vector<pair<int,int>> v;
		pair<int,int> p;
		bool f = 0;
		sort(leaves.begin(), leaves.end());
		p = leaves[0];
		v.push_back(p);
		int val = p.first;
		int j=1;
		while(j < leaves.size()) {
			while(j<leaves.size() && leaves[j].first==val){
				if(f)
					v.push_back({p.first+1, leaves[j].second});
				else 
					v.push_back(leaves[j]);
				j++;
			}
			if (j<leaves.size()){
				v.clear();
				f = 1;
				p.second = leaves[j].second;
				v.push_back({p.first + 1, leaves[j].second});
				val = leaves[j].first;
				j++;
			}
		}
		leaves.clear();
		for(auto x: v)
			ans.push_back(x);
	}
	sort(ans.begin(), ans.end());
	int day = ans[0].first;
	vector<int> storeans;
	for(int i=0; i<ans.size(); i++){
		if(ans[i].first==day) {
			storeans.push_back(ans[i].second);
		}
		else {
			break;
		}
	}
	cout << storeans.size() << " " << day << endl;
	for(auto x:storeans) {
		cout << x << " ";
	}
	cout << endl;
}

signed main() {
	if(ifstream("input.txt")) {
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	}

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0); 

	int tt;
	cin >> tt;

	while(tt--) {
		solve();
	}

	return 0;
}

/**

Question :
https://www.codechef.com/MAY21C/problems/KKLING

**/