#include<iostream>
using namespace std ;
void read(int arr[20][20],int row,int column)
{
 int i,j;
 for(i=0;i<row;i++)
 {
 for (j=0;j<column;j++)
 {
  cout<<i<<j<<"element= ";
  cin >> arr[i][j];
 }
 }
 }
void dspl(int arr[20][20],int row,int column)
{
 int i,j;
 for(i=0;i<row;i++)
{
 for(j=0;j<column;j++)
{
 cout << arr[i][j] << "\t";
}
cout << endl;
}
}
int main()
{
 int row,column;
 int arr[20] [20] ;
 cout << "Enter no. of rows= ";
   cin >> row;
  cout<<"Enter no. of column =";
  cin>> column;

   cout<<"matrix is ::"<<"\n";

 read(arr,row,column);
   cout<<"matrix is ::"<<"\n";
   dspl(arr,row,column);
   return 0;
}
