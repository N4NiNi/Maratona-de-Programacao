#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

class Grafo
{
    int valor;
    int V;
    list<int> *adj;

public:
    Grafo(int V);
    void adicionarAresta(int v1, int v2);

    void dfs(int v, vector<bool> &visited, vector<int> &component_label, int current_label);
    int countConnectedComponents();
    void adicionavalor(int x);
};

void Grafo::adicionavalor(int x){
    this->valor = x;
}

Grafo::Grafo(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Grafo::adicionarAresta(int v1, int v2)
{
    adj[v1].push_back(v2);
    adj[v2].push_back(v1);  // Para grafos não-direcionados
}

void Grafo::dfs(int v, vector<bool> &visited, vector<int> &component_label, int current_label)
{
    visited[v] = true;
    component_label[v] = current_label;

    for (int neighbor : adj[v])
    {
        if (!visited[neighbor])
        {
            dfs(neighbor, visited, component_label, current_label);
        }
    }
}

int Grafo::countConnectedComponents()
{
    vector<bool> visited(V, false);
    vector<int> component_label(V, -1);
    int num_components = 0;

    for (int v = 0; v < V; ++v)
    {
        if (!visited[v])
        {
            num_components++;
            dfs(v, visited, component_label, num_components);
        }
    }

    return num_components;
}

int main()
{
    int N, M;
    int i, j;
    
    cin >> N >> M;
    
    Grafo grafo(N);

    for (int k = 0; k < M; k++)
    {
        cin >> i >> j;
        grafo.adicionarAresta(i - 1, j - 1);
    }

    int num_components = grafo.countConnectedComponents();
    cout << num_components << endl;

    return 0;
}
