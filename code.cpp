
#include<bits/stdc++.h>
using namespace std;


int main() {
    int n,m;
    cin>>n>>m;
    int a=n+m;
    vector<int> u;
    vector<int> v;
    vector<int> x(a);
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        u.push_back(a);
    }
    for(int i=0;i<m;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    merge(u.begin(), u.end(), v.begin(), v.end(), x.begin());
    for (int i = 0; i < x.size(); i++)
        cout << x[i] << " ";
}
