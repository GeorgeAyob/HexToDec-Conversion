#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>
#include <string>
using namespace std;

int HextoDec(char[]);

int main()
{
    char num1[40],num2[40];
    int num3,num4,decvalue;
    
    ifstream infile;
    infile.open("hex.txt");
    if(!infile)
        cout<<"Error opening file";

    infile>>num1>>num2;

    cout<<"Decmial Value of Hex number 1: "<<(num3=HextoDec(num1))<<endl;
    cout<<"Decmial Value of Hex number 2: "<<(num4=HextoDec(num2))<<endl;
    cout<<"Sum in Decimal: "<<(decvalue=num3+num4)<<endl;
    
}
int HextoDec(char a[])
{
    int sum=0,counter=0;
    float sl=strlen(a);
    
    for(int i=0;i<40;i++)
    {
       if ((a[i]>='0')&&(a[i]<='9'))
            sum+=(a[i]-48)*pow(16,(sl-counter-1));
        
       else if((a[i]>='A')&&(a[i]<='Z'))
            sum+=(a[i]-'A'+10)*pow(16,(sl-counter-1));
        
       else if((a[i]>='a')&&(a[i]<='z'))
            sum+=(a[i]-'a'+10)*pow(16,(sl-counter-1));
                          
                            counter++;
    }
        return sum;
}

    /*
     Text File:
     45AF 12B3
     
     OutPut File:
     Decmial Value of Hex number 1: 17839
     Decmial Value of Hex number 2: 4787
     Sum in Decimal: 22626
     Program ended with exit code: 0
     */
    


