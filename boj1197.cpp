#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class list {
public:
	int x, y, cost;
	bool operator()(list i, list j) { return i.cost < j.cost; }
};

int disjoint(int x, vector<int> &uf) {
	return (x != uf[x]) ? uf[x] = disjoint(uf[x], uf) : x;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n, m;

	cin >> n >> m;

	vector <int> uf(n + 1);
	vector <list> v(m);

	for (int i = 1; i <= n; i++) uf[i] = i;

	for (int i = 0; i < m; i++)
		cin >> v[i].x >> v[i].y >> v[i].cost;

	sort(v.begin(), v.end(), list());

	int ans = 0;

	for (int i = 0; i < m; i++)
		if (disjoint(v[i].y, uf) != disjoint(v[i].x, uf)) {
			uf[disjoint(v[i].y, uf)] = uf[v[i].x];
			ans += v[i].cost;
		}

	cout << ans;
}