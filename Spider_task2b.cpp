#include<stdio.h>
#include<conio.h>
#include<string>
#include<iostream>
#include <bits/stdc++.h> 

using namespace std;

int main()
{
    long int n,q;
   // cout<<"Enter array size:"<<endl;
    
    cin>>n;
    long int a[n];
    for(long int i=1;i<=n;i++)
    {
    	a[i]=i;
	}
//	cout<<"Enter the no of queries:";
	cin>>q;
	long int b[q][3];
//	cout<<"Enter the queries:";
	for(long int i=0;i<q;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>b[i][j];
		}
	}
	
	for(long int i=0;i<q;i++)
	{
		for(long int z=b[i][0];z<=b[i][1];z++)
		{
			a[z]=a[z]+b[i][2];
		}
	}
	long int big=a[1];
	
	for(long int i=1;i<=n;i++)
	{
		if(a[i]>big)
		{
			big=a[i];
		}
		
	}
	cout<<big;
//	cout<<"The largest element is:"<<big<<endl;
	return 0;
	
}
