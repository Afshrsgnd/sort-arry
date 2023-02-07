#include <iostream>
using namespace std;
int main()
{
	int array_size;
	
	int arr[array_size];
	
	cout<<"enter array size : ";
	
	cin>> array_size;
	
	for (int i=1 ; i<=array_size ; i++)
	     
	{     cout<<"enter "<<i <<"th element : ";
	      
		  
		  cin>>arr[i];
	
    }
	
		for (int i=1 ; i<array_size ; i++)
	{
		for (int j=1 ; j<array_size  ; j++)
		{
			if (arr[j]< arr[j+1])
			{
				int tmp = arr[j];
			
				arr[j] = arr [j+1];
				
				arr[j+1] = tmp;
			}
		}
	}
		 
		 cout<<"sorted array : ";
		  
		 		for (int i=1 ; i<=array_size ; i++)
	    
		 cout<<arr[i]<<" ";
	
	     cout<<endl;
	
}
