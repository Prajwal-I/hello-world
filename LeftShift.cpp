#include<iostream>
using namespace std;
int * LeftShift(int arr[], int len, int sh){
	int swhold = 0;
	int temp = arr[len-1];
	int indx = len-1;
	
	for(int i = 0; i<len; i++){
		indx -= sh;
		if(indx<0)
		indx += len;
		swhold = arr[indx];
		arr[indx] = temp;
		temp = swhold;
	}
	return arr;
	
}
int main(){
	int len,sh;
	cout<<"enter array length ";
	cin>>len;
	int arr[len];
	cout<<endl<<"enter array \n";
	for(int i=0; i<len; i++){
		cin>>arr[i];
	}
	cout<<endl<<"enter shift ";
	cin>>sh;
	int *a = LeftShift(arr,len,sh);
	for(int i=0; i<len; i++){
		cout<<*(a+i)<<",";
	}
	return 0;
}
