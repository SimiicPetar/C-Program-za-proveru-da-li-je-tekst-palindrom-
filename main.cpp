#include <iostream>

using namespace std;

int main()
{
string vslova="QWERTYUIOPASDFGHJKLZXCVBNM";
string mslova="qwertyuiopasdfghjklzxcvbnm";
string a;
string c;
getline (cin, a);
string b;
string e;

for(int i=0;i<a.length();i++){
		for(int y=0;y<vslova.length();y++){
			if(a[i]==vslova[y]){
				a[i]=mslova[y];
			}
}
}
for(int i=0;i<a.length();i++){
		for(int y=0;y<mslova.length();y++){
			if(a[i]==mslova[y]){
				c=c + a[i];
			}
}
}
for(int y=c.length()-1;y>=0;y--){
		b=b + c[y];
}

for(int i=0;i<c.length();i++){	
			if(c[i]==b[i]){
				e=e+c[i];	
}
}
//cout<<c<<endl<<b<<endl<<e;
if(e.length()>=b.length()){
	cout<<"da";	
}
if(e.length()<b.length()){
	cout<<"ne";
}
}
