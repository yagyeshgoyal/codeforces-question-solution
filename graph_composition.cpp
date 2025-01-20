#include <bits/stdc++.h>
using namespace std;

class DisjointSet
{

public:
    vector<int> rank, parent, size;

    DisjointSet(int n)
    {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1, 1);
        for (int i = 0; i <= n; i++)
        {
            parent[i] = i;
        }
    }

    int findPar(int node)
    {
        if (parent[node] == node)
            return node;

        return parent[node] = findPar(parent[node]);
    }

    void unionByRank(int u, int v)
    {
        int ulp_u = findPar(u);
        int ulp_v = findPar(v);

        if (ulp_u == ulp_v)
            return;

        if (rank[ulp_u] < rank[ulp_v])
        {
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_u] > rank[ulp_v])
        {
            parent[ulp_v] = ulp_u;
        }
        else
        {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }

    void unionBySize(int u, int v)
    {

        int ulp_u = findPar(u);
        int ulp_v = findPar(v);

        if (ulp_u == ulp_v)
            return;

        if (size[ulp_u] <= size[ulp_v])
        {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else
        {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};

int main()
{

    int t;
    cin >> t;
    while (t >0)
    {

        int n, m1, m2;
        cin >> n >> m1 >> m2;

       
        
        
        

            DisjointSet df(n + 1);
            DisjointSet dg(n + 1);

            set<pair<int, int>> vf, vg;
            for (int i = 0; i < m1; i++)
            {
                int u, v;
                cin >> u >> v;
                vf.insert({u, v});
                df.unionBySize(u, v);
            }

            for (int i = 0; i < m2; i++)
            {
                int u, v;
                cin >> u >> v;
                vg.insert({u, v});
                dg.unionBySize(u, v);
            }

            if(m1==0){
                cout<<m2<<endl;
                t--;
                continue;
            }
            else if(m2==0){
                cout<<m1<<endl;
                t--;
                continue;
            }
            
            int cnt = 0;

            for (auto i : vf)
            {
                int u = i.first;
                int v = i.second;

                if (dg.findPar(u) != dg.findPar(v))
                {
                    cnt++;
                    vf.erase({u, v});
                }
            }

            DisjointSet ffm(n + 1);
            for (auto i : vf)
            {
                int u = i.first;
                int v = i.second;
                ffm.unionBySize(u, v);
            }

            for (auto i : vg)
            {
                int u = i.first;
                int v = i.second;
                if (ffm.findPar(u) != ffm.findPar(v))
                {
                    cnt++;
                }
            }

            cout << cnt << endl;
                //  << endl;
        

        t--;
    }

    return 0;
}