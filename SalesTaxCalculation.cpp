#include<iostream>
using namespace std;
int main()
{
 double Sales = 95000;
 double StateTax = (Sales * 4) / 100;
 double CountyTax = (Sales * 2) / 100;
 double Balance = Sales - (StateTax + CountyTax);
 cout<<"Your Total Sales is:"<<Sales<<endl;
 cout<<"Your State Tax is:"<<StateTax<<endl;
 cout<<"Your County Tax is:"<<CountyTax<<endl;
 cout<<"Your balance is: "<<Balance<<endl;

 return 0;
}
