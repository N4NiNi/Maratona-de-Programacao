#include <bits/stdc++.h>

using namespace std;

const int maxn = 21;

int bad[maxn];

// usaremos uma lista de adjacência para armazenar as arestas
vector<int> grafo[maxn];

int main(void)
{
	int n, m;
	scanf("%d %d", &n, &m);

	for (int i = 1; i <= m; i++)
	{
		int u, v;
		scanf("%d %d", &u, &v);

		u--, v--; // usaremos vértices 0-indexados

		grafo[u].push_back(v);
		grafo[v].push_back(u);
	}

	// computamos de bad[]
	for (int i = 0; i < n; i++)
		for (auto v: grafo[i])
			bad[i] |= (1<<v);

	int ans = 0;

	// iteramos por cada bitmask S
	for (int S = 1; S < (1<<n); S++)
	{
		int aux = 0;

		for (int i = 0; i < n; i++)
			if (S&(1<<i)) // se o vértice i está em S
				aux |= bad[i];

		// S é válido se e somente se S e aux não possuem bits ligados em comum
		if (!(S&aux)) ans++;
	}

	printf("%d\n", ans);
}