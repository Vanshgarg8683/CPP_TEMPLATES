class Disjoint_Set{
private:
    vector<int> parent;
    vector<int> size;
    int c;
public:
    Disjoint_Set(int n){
        parent.resize(n);
        for(int i = 0; i < n; i++) parent[i] = i;
        size.resize(n, 1);
        c = n;
    }
    int Find_Parent(int u){
        if(parent[u] == u) return u;
        return parent[u] = Find_Parent(parent[u]);
    }
    void Union(int u, int v){
        int pu = Find_Parent(u);
        int pv = Find_Parent(v);
        if(pu == pv) return ;
        else if(size[pu] >= size[pv]){
            size[pu] += size[pv];
            size[pv] = 0;
            parent[pv] = pu;
        }
        else{
            size[pv] += size[pu];
            size[pu] = 0;
            parent[pu] = pv;
        }
        c--;
        return ;
    }
    bool Connected(){
        return (c == 1);
    }
};
