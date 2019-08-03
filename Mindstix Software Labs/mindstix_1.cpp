/* mindstix 

input :  index ->  0,1,2,3,4
         values -> 4,3,1,2,0
         
output : index ->  0,1,2,3,4
         values -> 0,4,9,1,16
         
 solution by uddesh
 
 */
 
 #include<iostream>
 using namespace std;
 
 int main()
 {
 
 	int array[]={4,3,1,2,0};
 	
 	cout<<"Input array is : ";
 	for(int i=0;i<5;i++)
 		cout<<array[i]<<"\t";
 	
 	int output_array[5];
 	for(int i=0;i<5;i++)
 	{
 		int temp1;
 		temp1=array[i];
 		temp1=array[temp1];
 		temp1=temp1*temp1;
 		output_array[i]=temp1;
 	}
 	
 	cout<<"\nOutput array is : ";
 	for(int i=0;i<5;i++)
 		cout<<output_array[i]<<"\t";
 return 0;
 }
 
 /*
 sample output
 
 Input array is : 4	3	1	2	0	
Output array is : 0	4	9	1	16	
 
 
 */
