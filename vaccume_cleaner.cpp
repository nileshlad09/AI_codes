#include<bits/stdc++.h>
using namespace std;

void pushInQueue(int x,int y,int p,vector<int>ans,queue<vector<int> > &q){
	ans.push_back(x);
	ans.push_back(y);
    ans.push_back(p);
    q.push(ans);
    ans.clear();
}

void solve(int Ra,int Rb,int Vp,queue<vector<int> > &q){
    int x=Ra,y=Rb;
    int p=Vp;
    while(true){
        vector<int> ans;
        if(x==0 && y==0){
            break;
        }
        if(p==1){
            x=0;
            pushInQueue(x,y,p,ans,q);
            if(x==0 && y==0){
             break;
            }
            p=2;
            pushInQueue(x,y,p,ans,q);
        }
         if(p==2){
            y=0;
            pushInQueue(x,y,p,ans,q);
            if(x==0 && y==0){
             break;
            }
            p=1;
            pushInQueue(x,y,p,ans,q);
        }    
    }
}
int main() {
	int Ra,Rb,Vp;
    queue<vector<int> > q;
    cout<<"0: room is clean, 1:room is not clean"<<endl;
    cout<< "Status Of Room A:";
	cin>>Ra;
	cout<< "Status Of Room B:";
	cin>>Rb;
	cout<<"1: vaccume cleaner in room A, 2:vaccume cleaner in room A"<<endl;
	cout<< "Position of vaccume cleaner:";
	cin>>Vp;
	if((Ra!=0 && Ra!=1 ) || (Rb!=0 && Rb!=1) || (Vp!=1 && Vp!=2)){
		cout<<"Invalid"<<endl;
	}
	else{
	   vector<int> ans;
    ans.push_back(Ra);
    ans.push_back(Rb);
    ans.push_back(Vp);
    q.push(ans);
	solve(Ra,Rb,Vp,q);
	cout<<endl;
    while(!q.empty()){
		vector<int> a = q.front();
        cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
		q.pop();
	}	
	}
	
	return 0;
}

