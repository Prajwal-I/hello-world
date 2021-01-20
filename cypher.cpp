#include<iostream>
#include<string.h>
using namespace std;

string Ecaesar(string m, int k){
	string c = "";
	int temp;
	for(int i=0;i<m.size() && m[i]!='\0';i++){
		if(m[i]!=' '){
		temp = int(m[i])-97;
		c += char(((temp+k)%26)+97);
		}
		else
		c += m[i];
	}
	return c;
}

string Dcaesar(string c, int k){
	string m;
	int temp;
	for(int i=0;i<c.size() && c[i]!='\0';i++){
		if(c[i]!=' '){
		temp = int(c[i])-97;
		m += char(((temp-k+26)%26)+97);
		}
		else
		m += c[i];
	}
	return m;
}

int main()
{
	string input;
	int key;
	while(1){
	cout<<endl<<endl<<"enter lower case string to encrypt and key"<<endl;
	cin>>input;
	cin>>key;
	cout<<endl<<"encrypted -: "<<Ecaesar(input,key)<<" size"<<Ecaesar(input,key).size()<<" ,ip_size- "<<input.size();
	cout<<endl<<"decrypted -: "<<Dcaesar(Ecaesar(input,key),key)<<" size"<<Dcaesar(Ecaesar(input,key),key).size();
}
	return 0;
}
