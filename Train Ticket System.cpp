// The prices are as follows (From Rawalpindi):
// to Lahore: 1500 Rs.
// to Karachi: 5000 Rs.
// to Quetta: 4500 Rs.
// to Peshawar: 2000 Rs.

// The prices for different cabins are:
// Economy = 1x
// Economy Sleeper = 1.2x
// Lower A/C = 1.3x
// First Class Sleeper = 1.5x
// Executive Class = 2x 

// Tax is 15% of gross total price.


#include <iostream>
#include <cmath>

using namespace std;

int cityprice(int a)
{
    if (a==1)
    {
        return 1500;
    }
    else if (a==2)
    {
        return 5000;
    }
    else if (a==3)
    {
        return 4500;
    }
    else if (a==4)
    {
        return 2000;
    }
}

float bogieprice(int a)
{
    if (a==1)
    {
        return 2;
    }
    else if (a==2)
    {
        return 1.3;
    }
    else if (a==3)
    {
        return 1;
    }
    else if (a==4)
    {
        return 1.5;
    }
    else if (a==5)
    {
        return 1.2;
    }
}

float pricecal(int a,int b)
{
    float price = cityprice(a) * bogieprice(b);
    return price;
}

float taxcal(float a)
{
    float net = a + ((a*15)/100);
    return net;
}

int main ()
{
  int a,b;
  cout << "Welcome to the Rawalpindi Railway Station." << endl;
  
  jump:
  cout << "Where do you want to go? (reply with 1 to 4)" << endl;
  cout << "1. Lahore" << endl;
  cout << "2. Karachi" << endl;
  cout << "3. Quetta" << endl;
  cout << "4. Peshawar" << endl;
  cin >> a;
  
  if (a==1)
  {
    cout<<"The available bogies are:"<<endl;
    cout<<"1. Executive Class"<<endl;
    cout<<"2. Lower A/C"<<endl;
    cout<<"3. Economy"<<endl;
    cin>>b;
  }
  
  else if (a==2)
  {
    cout<<"The available bogies are:"<<endl;
    cout<<"1. Executive Class"<<endl;
    cout<<"2. Lower A/C"<<endl;
    cout<<"3. Economy"<<endl;
    cout<<"4. First Class Sleeper"<<endl;
    cout<<"5. Economy Sleeper"<<endl;
    cin>>b;  
  }
  
  else if (a==3)
  {
    cout<<"The available bogies are:"<<endl;    
    cout<<"4. First Class Sleeper"<<endl;
    cout<<"5. Economy Sleeper"<<endl; 
    cin>>b;
  }
  
  else if (a==4)
  {
    cout<<"The available bogies are:"<<endl;      
    cout<<"1. Executive Class"<<endl;
    cout<<"2. Lower A/C"<<endl;
    cout<<"3. Economy"<<endl;
    cin>>b;
  }
  
  else
  {
    cout<<"Please give a valid input."<<endl;
    goto jump;
  }
  
  cout<<endl;
  cout<<"Your total ticket price exclusive of tax is: "<<pricecal(a,b)<<"Rs."<<endl;
  cout<<endl;
  cout<<"Your total with 15% tax is: "<<taxcal(pricecal(a,b))<<"Rs."<<endl;


  return 0;
}
