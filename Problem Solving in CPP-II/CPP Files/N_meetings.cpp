#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
        struct meeting{
            int start;
            int end;
            int pos;
        };
       
            
        static bool comparator(struct meeting m1,struct meeting m2){
            if(m1.end<m2.end)return true;
            else if(m1.end>m2.end)return false;
            else if(m1.pos<m2.pos)return true;
            else return false;}     

        int maxMeetings(int start[], int end[], int n) {
        struct meeting meet[n];
        
        for(int i=0;i<n;i++){
            meet[i].start=start[i];meet[i].end=end[i];meet[i].pos=i+1;
        }
        sort(meet, meet+n, comparator);
        int timelimit=meet[0].end;
        int count=0;
        for(int i=0;i<n;i++){
            if(timelimit<meet[i].end){
                timelimit=meet[i].end;
                count++;
            }
        }
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends