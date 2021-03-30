#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<int> sieveOfEratosthenes(int N)
    {
        vector<int>v1(N+1);
        vector<int>v2;
        for(int i=0;i<N;i++)
        v1[i]=1;
        v1[0]=0;
        v1[1]=0;
        for(int j=2;j*j<=N;j++){
            if(v1[j]==1){
                for(int k=j*j;k<=N;k+=j){
                    v1[k]=0;
                }
            }
        }
       for(int j=0;j<N;j++){
           if(v1[j]==1)
           v2.push_back(j);
       }
       return v2;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> primes  = ob.sieveOfEratosthenes(N);
        for(auto prime : primes) {
            cout<< prime <<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends