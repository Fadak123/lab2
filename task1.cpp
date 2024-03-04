#include <iostream>
using namespace std;
int main()
{
int size;
cout<<"Enter array size: ";
cin>>size;
int items[size],rotatedItems[size];
for (int i=0;i<size;i++)
{ cout<<"Enter item#"<<(i+1)<<": ";
cin>>items[i];
}
int direction;
cout<<"Enter rotation direction (1 Right -1 Left): ";
cin>>direction;
int no;
cout<<"Enter number of cells to rotate: ";
cin>>no;
int newIndex;
for (int i=0;i<size;i++)
{
if (direction>0)
{
newIndex=i+no;
if (newIndex>=size)
newIndex=newIndex%size;

}
else
{
newIndex=i-no;
if (newIndex<0){
newIndex=newIndex%size;
if (newIndex<0)
newIndex=newIndex+size;

}
}
rotatedItems[newIndex]=items[i];
}
cout<<"\nItems before rotation : \n";
for (int i=0;i<size;i++)
cout<<items[i]<<"\t";
cout<<"\n";
cout<<"\nItems after rotation : \n";
for (int i=0;i<size;i++)
cout<<rotatedItems[i]<<"\t";
cout<<"\n";
return 0;
}