#include<iostream>
using namespace std;
int main()
{
 double Sales = 95000;
 const double StateTaxRate = .04; 
 const double CountyTaxRate = .02;
 double StateTax = Sales * StateTaxRate ;
 double CountyTax = Sales * CountyTaxRate;
 double Balance = Sales - (StateTax + CountyTax);
 cout<<"Your Total Sales is:"<<Sales<<endl;
 cout<<"Your State Tax is:"<<StateTax<<endl;
 cout<<"Your County Tax is:"<<CountyTax<<endl;
 cout<<"Your balance is: "<<Balance<<endl;

 return 0;
}
