#include <iostream>
using namespace std;
int main() 
//{ 
//int n, a[n];
//double sum=0, avg;
//cout <<"enter the number of elements of array"<<endl;
//cin>>n;
//
//
//	for (int i=0;i<n;i++)
//	{
//		cout <<"enter the number"<<i+1<<endl;
//		cin>>a[i];
//		sum=sum+a[i];	
//	}
//    avg=sum/n;
//    cout<<"so average is "<<avg;
//}
//	{
//	int x, a[5] ;
//	cout<<"enter the numbers for bubble sorting"<<endl;
//	for(int i =0; i<5;i++) {
//		cout <<" enter number " <<i+1<<endl;
//		cin>>a[i];
//		cout<<endl;
//		
//	}
//	for (int i =0; i<4; i++) {
//		for ( int j=0; j<4;j++) {
//			if (a[j+1]<a[j]) {
//				x=a[j];
//				a[j]=a[j+1];
//				a[j+1] =x;
//			}
//		}
//	}
//	cout<<" bubble sort : ";
//	for ( int i=0;i<5;i++) 
//	cout<<a[i]<<" ";
//	
//}



{
int b, num, P, temp, min, ar[5];
	cout<<"Enter the number of elements: ";
	cin>>num;
	cout<<"Enter the elements: "<<endl;
	
	for(int a=0;a<num;a++)
	{
		cin>>ar[a];
	}
	for (int a = 0; a<num-1;a++)
	{
		min=ar[a];
		P=a;
		for (b=a+1;b<num;b++) {
			if (min>ar[b])
			{
				min=ar[b];
				P=b;
			}
		}
		temp=ar[a];
		ar[a]=ar[P];
		ar[P]=temp;
	}
	cout<<"Sorted elements: "<<endl;
	for(int a=0;a<num;a++) {
		cout<<ar[a]<<" ";
	}}
