#include <iostream>
using namespace std;
int main()
{
int noRows,noCols;
cout<<"Enter array size: ";
cin>>noRows>>noCols;
int items[noRows][noCols],rotatedItems[noRows][noCols];
for (int i=0;i<noRows;i++)
{ cout<<"Enter row#"<<(i+1)<<"items : ";
for (int j=0;j<noCols;j++){
cin>>items[i][j];
rotatedItems[i][j]=items[i][j];
}
}
int direction,columnNo;
cout<<"Enter column number to be rotated (0-->Size-1) : ";
cin>>columnNo;
cout<<"Enter rotation direction (1 down -1 up): ";
cin>>direction;
int no;
cout<<"Enter number of cells to rotate: ";
cin>>no;
int newIndex;
for (int i=0;i<noRows;i++)
{
if (direction>0)
{
newIndex=i+no;
if (newIndex>=noRows)
newIndex=newIndex%noRows;

}
else
{
newIndex=i-no;
if (newIndex<0){
newIndex=newIndex%noRows;
if (newIndex<0)
newIndex=newIndex+noRows;

}
}
rotatedItems[newIndex][columnNo]=items[i][columnNo];
}
cout<<"\nItems before rotation : \n";
for (int i=0;i<noRows;i++)
{
for (int j=0;j<noCols;j++)
cout<<items[i][j]<<"\t";
cout<<"\n";
}
cout<<"\n";
cout<<"\nItems after rotation : \n";
for (int i=0;i<noRows;i++)
{
for (int j=0;j<noCols;j++)
cout<<rotatedItems[i][j]<<"\t";
cout<<"\n";
}
return 0;
}