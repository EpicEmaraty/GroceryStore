//Author: Rashed Ebrahim Alnuaimi
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
  vector<string> list; //array of 5 strings
  int numItems = 0;
  char input;
  string item;
do {  
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
  if (input == 'a' || input == 'A')
{
 cout<<"What is the item?"<<endl;
 cin>>item;
 list.push_back(item);
 }

} while (input!='q'&&input!='Q');

if (list.size() != 0) 
{
  cout<<"==ITEMS TO BUY==";
 for( int numItems=0; numItems < list.size() ; numItems++)
 
 {
  cout<<endl<<numItems+1 << " "<< list[numItems];
 } cout<<endl;

} else
{
 cout<<"No items to buy!"<<endl;
}

return 0;
}
