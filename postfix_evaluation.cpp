#include<iostream>
#include<stack>
#include<string.h>
using namespace std;

int main()
{

int i,val1=0,val2=0,res;

char str[100];
	cout<<"enter string"<<endl;
	cin>>str;
	stack<int> s1;
	for(i=0;i<strlen(str);i++){
		if(isdigit(str[i])!=0){
			//cout<<str[i]<<endl;
			s1.push(str[i] - '0');
		}
		else {
			val2=s1.top() ;
			s1.pop();
			val1=s1.top() ;
			s1.pop();
			//cout<<val1<<" "<<val2<<endl;
            switch(str[i]){
             	case '+':  
                        res=0;
             	        res=val1+val2;
                        
                        s1.push(res);
			   			break;
			 
			  
             	case '-': 
                        res=0;
			 			res=val1-val2;
			 			
			 			s1.push(res);
			  			break;
			  			
             	case '*':  
                        res=0;
			 			res=val1*val2;
			 		
						 s1.push(res);
						break;
						
             	case '/':  
			            res=0; 
			 			res=val1/val2;
			 			
						 s1.push(res);
						 break;
				default: 
			           cout<<"invalid operator"<<endl;
			           break;
            }
        }
	}
	cout<<s1.top();
	return 0;
}
