#include <iostream>
using namespace std;
#include <string>
int main(){
	int n,c=0;
	string s;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		if(s=="X++"||s=="++X")
			c++;
		else if(s=="X--"||s=="--X")
			c--;
	}
	cout<<c;
	return 0;
}