#include <iostream>
#include <vector>
#include<math.h>



using namespace std;

void subsetSums(long long int arr[], long long int l, long long int r,vector<long long int> & subset,
                long long int sum=0)
{
    if (l > r)
    {
        subset.push_back(sum);
        return;
    }    
	subsetSums(arr, l+1, r, subset,sum);
    subsetSums(arr, l+1, r,subset,sum+arr[l]);
}


int main()
{
	
	long long int n,m,sum=0;
    cin>>n>>m; 
    long long int v[m];
    for ( long long int i=0; i<m; ++i )
    {
        cin>>v[i];
        sum += v[i];
    }
    if(n==1)
    {
    	cout<<sum<<endl;
	}
	else{
		long long int variance = sum,actual=sum;
    vector<long long int> subset;
    subsetSums(v, 0, m-1,subset);
    for (long long int i=0;i<subset.size();i++) 
    {
       long long int temp = abs(subset[i]-sum/2);
        variance = temp < variance?temp:variance;
        if(temp==variance)
            actual = subset[i];
    }
    actual = actual>sum/2?sum-actual:actual;
    cout<<actual<<endl;
	}
  
    return 0;
}
