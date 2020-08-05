#include <algorithm>
#include <assert.h>
#include <bitset>
#include <chrono>
#include <cstring>
#include <functional>
#include <iostream>
#include <istream>
#include <map>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
#include <array>
#include <complex>

#define ll long long
#define reg register int

using namespace std;

struct segmentTree{
    int size;
    vector<long long> sums;
    void init(int n){
        size = 1;
        while(size < n){
            sums.assign(2 * size, 0LL);
        }
    }
    void set(int i, int v, int x,int lx, int rx){
        if(lx - rx == 1){
            sums[x] = v;
            return; 
        }
        int m = (lx + rx)/2;
        if(i < m){
            set(i, v, 2 * x + 1, lx, m); 
        }
        else{
             set(i, v, 2 * x + 2, m, rx); 
        }
        sums[x] = sums[2 * x + 1] + sums[2 * x + 2];
    }

    void set(int i, int v){
        set(i, v, 0, 0, size);
    }

    void build(vector<int> &t, int x, int lx, int rx){
        if(lx - rx == 1){
            if(lx < (int)t.size()){
                sums[x] = t[lx];
            }
            return;
        }
        int m = (lx + rx)/2;
        build(t, 2 * x + 1, lx, m);
        build(t, 2 * x + 2,m, rx);
        sums[x] = sums[2 * x + 1] + sums[2 * x + 2];
    }
    void build(vector<int> &t){
        build(t, 0, 0, size);
    }

    long long sum(int l,int r, int x, int lx, int rx){
        if(lx >= r || l >= rx){
            return 0;
        }
        if(lx >= l && rx <= r){
            return sums[x];
        }
        int m = (lx + rx)/ 2;
        ll s1 = sum(l, r, 2* x + 1, lx,m);
        ll s2 = sum(l, r, 2* x + 2,m, rx);
        return s1 + s2;
    }
    long long sum(int l, int r){
       return sum(l, r, 0, 0, size);
    }
};


int main(){
    ios::sync_with_stdio(false);
    segmentTree st;
    int n, m;
    cin >> n >> m;
    st.init(n);
    vector<int> tree(n);
    for(int i=0;i<n;i++){
        cin>> tree[i];
    }
    st.build(tree);
    while(m--){
        int op;
        cin >> op;
        if(op == 1){
            int i, v;
            cin >> i>> v;
            st.set(i, v);
        }
        else{
            int l, r;
            cin >> l >> r;
            cout<<st.sum(l, r)<<endl;  
        }
    }
    return 0;
}
