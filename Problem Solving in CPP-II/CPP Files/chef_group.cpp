#include <iostream>
using namespace std;

int main() {
	int t;
	int count=0;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
		if(s.size()==0)
		return 0;
	    if(s[0]=='1')
		count+=1;
	    for(int i=1;i<s.size();i++){
	        if(s[i]=='1'&&s[i]!=s[i-1])
	        count+=1;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
