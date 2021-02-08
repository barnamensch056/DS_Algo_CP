#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
void iter(vector<int>::iterator it1,vector<int>::iterator  it2)
{
for(auto i=it2-1;i>=it1;i--)
{
    cout<<*i<<" ";
}
}
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
     int x;
      cin>>x;
      v.push_back(x);
    }
    iter(v.begin(),v.end());
    return 0;
}