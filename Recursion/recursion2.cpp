/ { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    long long toh(int N, int from, int to, int aux) {
        long long moves=011;
        if(N>=1){
            moves+=toh(N-1,from,aux,to);
            cout<<"moves disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
            moves++;
            moves+=toh(N-1,aux,to,from);
        // Your code here
    }
    return moves;
}
};

// { Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        long long moves = 0;
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        moves = ob.toh(N, 1, 3, 2);
        cout << moves << endl;
    }
    return 0;
}


//Position this line where user code will be pasted.  // } Driver Code Ends
