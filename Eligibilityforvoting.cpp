#include<iostream>
using namespace std;
int countDigit(long int n)
    {
      string num = to_string(n);
      int num_size=num.size();
      return num_size;
    }
int main()
{
    int age,num_size;
    long int voter_idno;
    cout<<"Enter Age of a user:";
    cin>>age;
    cout<<"Enter your voter id number:";
    cin>>voter_idno;
    num_size=countDigit(voter_idno);
    if(num_size==10)
    {
        if(age>=18)
        {
            cout<<"\nYou are eligible for voting";
        }
        else
        {
        cout<<"\nYou are not eligible for voting";
        }
    }
    else{
        cout<<"Please enter valid voter_idno(make sure it's of 10 digits and numeric)";
    }
    return 0;
}
