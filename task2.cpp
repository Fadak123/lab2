#include <iostream>
using namespace std;
int main()
{
int size;
cout<<"Enter array size: ";
cin>>size;
int items[size],shiftedItems[size];
for (int i=0;i<size;i++)
{ cout<<"Enter item#"<<(i+1)<<": ";
cin>>items[i];
}
int direction;
cout<<"Enter shifting direction (1 Right -1 Left): ";
cin>>direction;
int no;
cout<<"Enter number of cells to shift: ";
cin>>no;
int newValue;
cout<<"Enter value you want to replace discarded cells : ";
cin>>newValue;
int newIndex;
for (int i=0;i<size;i++)
{
if (direction>0)
{
newIndex=i+no;
if (newIndex>=size){
newIndex=newIndex%size;
shiftedItems[newIndex]=newValue;
}
else
shiftedItems[newIndex]=items[i];

}
else
{
newIndex=i-no;
if (newIndex<0){
newIndex=newIndex%size;
if (newIndex<0)
newIndex=newIndex+size;
shiftedItems[newIndex]=newValue;
}
else
shiftedItems[newIndex]=items[i];

}
}
cout<<"\nItems before shifting : \n";
for (int i=0;i<size;i++)
cout<<items[i]<<"\t";
cout<<"\n";
cout<<"\nItems after shifting : \n";
for (int i=0;i<size;i++)
cout<<shiftedItems[i]<<"\t";
cout<<"\n";
return 0;
}