#include<stdio.h>
#include<conio.h>
#include<string>
#include<iostream>
#include <bits/stdc++.h> 

using namespace std;

int main()
{
	string s;
  long long int sum=0,ct=0,rem,n,l=0;

	cin>>s;
	if(s.length()==1)
	{
		ct=0;
	}
	else
	{
	do
	{
		l=0;
	for(long long int i=0;i<s.length();i++)
	{
		l+=(s[i]-'0');
	}
	 ct++;
	 stringstream ys;
    ys << l;
     s=ys.str();
		
	}while(l>=10);
    }
	cout<<ct<<endl;
	
	return 0;
}
