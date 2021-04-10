#include <bits/stdc++.h>
using namespace std;
int minKey(int key[], bool Set[],int V)
{
	int min =INT_MAX,min_index;

	for (int v = 0; v < V; v++)
		if (Set[v] == false && key[v] < min)
			min = key[v], min_index = v;

	return min_index;
}
void prims(int* graph, int V)
{

	int parent[V];
	int key[V];
    bool Set[V];
    for (int i = 0; i < V; i++)
		key[i] = INT_MAX, Set[i] = false;
	key[0] = 0;
	parent[0] = -1; // First node is always root of MST

	for (int count = 0; count < V - 1; count++)
	{

		int u = minKey(key, Set,V);
		Set[u] = true;
		for (int v = 0; v < V; v++)
			if (*((graph+u*V)+v) && Set[v] == false && *((graph+u*V)+v) < key[v])
				parent[v] = u, key[v] = *((graph+u*V)+v);
	}
    int Weight=0;
	cout<<"Edge \tWeight\n";
	for (int i = 1; i < V; i++)
		cout<<parent[i]<<" --> "<<i<<" \t"<<*((graph+i*V)+parent[i])<<" \n";
	for (int i = 1; i < V; i++)
        Weight+=*((graph+i*V)+parent[i]);
    cout<<"total Weight ="<<Weight;
}


int main()
{
    int V,i,j;
    cout<<"enter the number of vertex = ";
    cin>>V;
    cout<<"enter the graph matrix \n";
    int graph[V][V];
    for (i=0;i<V;i++)
        for ( j=0;j<V;j++)
            cin>>graph[i][j];

	prims((int*)graph,V);

	return 0;
}
