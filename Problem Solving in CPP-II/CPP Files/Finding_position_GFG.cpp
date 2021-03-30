#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int findPosition(vector<long long>&v){
    if(v.size()==1){
    return v[0];}
    if(v.size()==2){
    return v[1];}
    vector<long long> temp;
    for(int i=0;i<v.size();i++){
        if((i+1)%2==0)
        {
            temp.push_back(v[i]);
        }
    }
    return findPosition(temp);
}
int main() {
	int t;
	cin>>t;
	while(t>0){
	    long long int n;
	    cin>>n;
	    vector<long long>v1;
	    for(long long int i=1;i<=n;i++){
	        v1.push_back(i);
	    }
	    int result;
	    result=findPosition(v1);
	    cout<<result<<endl;
	    t--;
	}
	return 0;
}