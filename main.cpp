//Author: Rashed Ebrahim Alnuaimi
#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
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

 if (numItems<5)
 {
 list[numItems] = item;
 numItems++;
} else { cout<<"You'll need a bigger list!"<<endl;}

 }

} while (input!='q'&&input!='Q');

  cout<<"==ITEMS TO BUY==\n";
 for( int numItems=0; numItems<5; numItems++)
 {
  cout<<endl<< numItems+1<< " ";

   if(list[numItems]!="")
   {
    cout<<" "<<list[numItems]<<endl;
   }
    }    


return 0;
}
