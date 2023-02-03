#include<bits/stdc++.h>
using namespace std;
bool canMeasureWater(int m, int n, int d) {
    if(m + n < d) return false;
    if(m == d || n == d || m + n == d) return true;
    return d%(__gcd(m, n)) == 0;
}
int solve(int m,int n,int d){
    int x1=0,y1=0;
    while(x1!=d && y1!=d){
        if(y1==0){
            y1=n;
            cout<<x1<<" "<<y1<<endl;
        }
        else if(x1==m){
            x1=0;
            cout<<x1<<" "<<y1<<endl;
        }
        else{
            if(x1+y1<=m){
                x1=y1+x1;
                y1=0;
            }
            else{
                y1=y1-(m-x1);
                x1=m;
            }
            cout<<x1<<" "<<y1<<endl;
        }
    }
    return 0;
}
int main() {
	int m,n,d;
	cin>>m>>n>>d;
	if(canMeasureWater(m,n,d)){
	    solve(m,n,d);
	}
	else{
	    cout<<"Not possible"<<endl;
	}
	return 0;
}
