#include<bits/stdc++.h>
using namespace std;

int main(){
    int v, e;
    cin >> v >> e;
    vector<int> adj[v+1];

    for(int i=0; i<e; i++) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    //print list
    for(int i=1; i<=v; i++) {
        cout << i << "-->   ";
        for(auto x : adj[i]) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}