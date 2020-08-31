#include<stdio.h>
#include<conio.h>
#include<string>
#include<iostream>
#include <bits/stdc++.h> 

using namespace std;

long int noOfPrime(long int n) 
{ 
     long int ct=0;
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        {  
         
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  
   for (int p=2; p<=n; p++) 
       if (prime[p]) 
       {
       	ct++;
	   }
	   
	   return ct;
} 
  
int main() 
{ 
   long int n;
   cin>>n;
   long int k=noOfPrime(n); 
   cout<<(k*(k+1)/2);
    return 0; 
}

