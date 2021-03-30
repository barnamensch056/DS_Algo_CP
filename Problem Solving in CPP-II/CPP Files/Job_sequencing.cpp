#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


 // } Driver Code Ends
// Prints minimum number of platforms reqquired 

class Solution {
  public:
   static bool comparator(struct Job j1,struct Job j2){
        return (j1.profit>j2.profit);
    }
 
    vector<int> JobScheduling(Job arr[], int n) 
    { 
          struct Job jobs[n];
          for(int i=0;i<n;i++){
              jobs[i].id=arr[i].id;
              jobs[i].dead=arr[i].dead;
              jobs[i].profit=arr[i].profit;
          }
          sort(jobs,jobs+n,comparator);
          bool v1[n]={0};
          
          int countjobs=0;
          int profits=0;
          for(int i=0;i<n;i++){
              for(int j=min(n,jobs[i].dead-1);j>=0;j--){
              if(v1[j]==0){
                  profits+=jobs[i].profit;
                  countjobs++;
                  v1[j]=1;
                  break;
              }
          }
          }
          vector<int>v2;
          v2.push_back(countjobs);
          v2.push_back(profits);
         return v2; 
          
    } 
};

// { Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}


  // } Driver Code Ends