/*Title - Vertical Order Traversal of a Binary Tree

Prints the vertical order traversal of a binary tree

Time complexity -  0(n)

*/

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	
	
	int t;
	cin>>t;
	int n[t];
	vector<int> a[t];
	for(int j=0;j<t;j++)
	{
	    cin>>n[j];
	    for(int k=0;k<n[j];k++)
	    {
	        int x;
	        cin>>x;
	        a[j].push_back(x);
	    }
	    
	}
	
	int i=0;
	while(i<t)
	{
	    vector<int> v;
	    for(int j=0;j<n[i]-1;j++)
	       {
	        int sum=a[i].at(j);
	        for(int k=0;k<n[i];k++)
		  {
	            sum=sum+a[i].at(k);
	            v.push_back(sum);
	           }
	        }
	    int max=v.at(0);
	    int p=0;
	    for(int j=0;j<v.size();j++)
	        {
	        if(a[i].at(j)>max)
		   {
	            max=a[i].at(j);
	            }
	        }
	    cout<<max<<endl;
	}
	return 0;
}