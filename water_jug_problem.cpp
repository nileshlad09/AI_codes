#include <bits/stdc++.h>
using namespace std;

int fillJug_4(pair<int,int> &p){
    if(p.first < 4){
    	p.first=4;
    	return 0;
	}
	else{
	 return -1;    		
	}
}
int fillJug_3(pair<int,int> &p){
    if(p.second < 3){
    	p.second=3;
    	return 0;
	}
	else{
	 return -1;    		
	}
}
int transferFrom4To3(pair<int,int> &p){
    if(p.first + p.second <= 3  && p.first>0){
    	p.second= p.first + p.second;
    	p.first=0;
    	return 0;
	}
	else{
	 return -1;    		
	}
}
int transferSomeFrom4To3(pair<int,int> &p){
    if(p.first + p.second >= 3  && p.second<3){
    	p.first = p.first - 3 + p.second;
    	p.second=3;
    	return 0;
	}
	else{
	 return -1;    		
	}
}
int transferFrom3To4(pair<int,int> &p){
    if(p.first + p.second <= 4  && p.second>0){
    	p.first=p.first + p.second;
    	p.second=0;
    	return 0;
	}
	else{
	 return -1;    		
	}
}
int transferSomeFrom3To4(pair<int,int> &p){
    if(p.first + p.second >= 4  && p.first<4){
    	p.second=p.second - 4 + p.first;
    	p.first =4;
    	return 0;
	}
	else{
	 return -1;    		
	}
}
int Empty3G(pair<int,int> &p){
    if(p.second>0){
    	p.second=0;
    	return 0;
	}
	else{
	 return -1;    		
	}
}
int Empty4G(pair<int,int> &p){
    if(p.first>0){
    	p.first=0;
    	return 0;
	}
	else{
	 return -1;    		
	}
}
int main(){
	int jug1=4,jug2=3,target=2;
	pair<int,int> p;
	p.first=0;
	p.second=0;
	int ch;
	while(true){
	   if(p.first == target){
	   	 cout<<"-------------------"<<endl;
	   	 cout<<"--------Done-------"<<endl;
	   	 cout<<"-------------------"<<endl;
	   	 break;
	   }
	   cout<<"1: Fill 4G jug 2: Fill 3G jug 3:Transfer all water from 4G to 3G"<<endl; 
	   cout<<"4:Transfer all water from 3G to 4G 5:Transfer some water from 4G to 3G 6:Transfer some water from 3G to 4G"<<endl;
	   cout<<"7:Empty 4G jug 8: Empty 3G jug 9:Exit"<<endl;
	   cout<<"Enter choice: ";
	   cin>> ch;
	   if(ch==9){
	   	break;
	   }
	   else{
	   	 switch (ch) {
		  case 1:
		    if(fillJug_4(p)==-1){
		    	cout<<"Not possible"<<endl;
			}
			else{
			 cout<<p.first<<" "<< p.second<<endl;	
			}		    
		    break;
		  case 2:
		    if(fillJug_3(p)==-1){
		    	cout<<"Not possible"<<endl;
			}
			else{
			 cout<<p.first<< " " << p.second<<endl;	
			}
		    break;
		  case 3:
		    if(transferFrom4To3(p)==-1){
		    	cout<<"Not possible"<<endl;
			}
			else{
			 cout<<p.first<< " " << p.second<<endl;	
			}
		    break;
		  case 4:
		    if(transferFrom3To4(p)==-1){
		    	cout<<"Not possible"<<endl;
			}
			else{
			 cout<<p.first<< " " << p.second<<endl;	
			}
		    break;
		  case 5:
		    if(transferSomeFrom4To3(p)==-1){
		    	cout<<"Not possible"<<endl;
			}
			else{
			 cout<<p.first<< " " << p.second<<endl;	
			}
		    break;
		  case 6:
		    if(transferSomeFrom3To4(p)==-1){
		    	cout<<"Not possible"<<endl;
			}
			else{
			 cout<<p.first<< " " << p.second<<endl;	
			}
		    break;
		  case 7:
		    if(Empty4G(p)==-1){
		    	cout<<"Not possible"<<endl;
			}
			else{
			 cout<<p.first<< " " << p.second<<endl;	
			}
		    break;
		   case 8:
		    if(Empty3G(p)==-1){
		    	cout<<"Not possible"<<endl;
			}
			else{
			 cout<<p.first<< " " << p.second<<endl;	
			}
		    break;
		  }
	   }
		 	
	}
	
	
	
	
	return 0;
}
