/***************************************************************************************************
Proiectul 1 - Tema 2
Author: Pirvu Constantin-Catalin
***************************************************************************************************/

#include <bits/stdc++.h>
#include "Rational.h"


int main()
{
    Rational num1, num2, num3;
    int var = 2; //folosit in majoritatea operatiilor ca numar intreg
    bool var2; //folosit la operatorii relatioanli
    double var3; //folosit la operatorul de conversie double
    std::string fraction; //folosit la operatorul de conversie std::string si la functia toString

    std::cout<<"Introduceti doua numare rationale... \n";
    std::cin>>num1>>num2;

    std::cout<<"\nnum1 = "<<num1<<", num2 = "<<num2<<'\n';

    std::cout<<"\n\n * * * Testarea operatorilor compusi de atribuire: \n\n";
    std::cout<<num1<<"  += "<<num2<<" => "; num1+=num2; std::cout<<num1<<'\n';
    std::cout<<num1<<"  += "<<var<<"   => "; num1+=var; std::cout<<num1<<'\n';
    std::cout<<num1<<" -= "<<num2<<" => "; num1-=num2; std::cout<<num1<<'\n';
    std::cout<<num1<<"  -= "<<var<<"   => "; num1-=var; std::cout<<num1<<'\n';
    std::cout<<num1<<"  *= "<<num2<<" => "; num1*=num2; std::cout<<num1<<'\n';
    std::cout<<num1<<"  *= "<<var<<"   => "; num1*=var; std::cout<<num1<<'\n';
    std::cout<<num1<<" /= "<<num2<<" => "; num1/=num2; std::cout<<num1<<'\n';
    std::cout<<num1<<"  /= "<<var<<"   => "; num1/=var; std::cout<<num1<<'\n';

    std::cout<<"\n\n * * * Testarea operatorilor aritmetici unari: \n\n";
    std::cout<<"+"<<num1<<" => "; +num1; std::cout<<num1<<'\n';
    std::cout<<"-"<<num1<<" => "; -num1; std::cout<<num1<<'\n';

    std::cout<<"\n\n * * * Testarea operatorilor aritmetici binari: \n\n";
    std::cout<<num1<<" + "<<num2<<" => "; num3 = num1 + num2; std::cout<<num3<<'\n';
    std::cout<<var<<"    + "<<num2<<" => "; num3 = var + num2; std::cout<<num3<<'\n';
    std::cout<<num1<<" + "<<var<<"   => "; num3 = num1 + var; std::cout<<num3<<'\n';
    std::cout<<num1<<" - "<<num2<<" => "; num3 = num1 - num2; std::cout<<num3<<'\n';
    std::cout<<var<<"    - "<<num2<<" => "; num3 = var - num2; std::cout<<num3<<'\n';
    std::cout<<num1<<" - "<<var<<"   => "; num3 = num1 - var; std::cout<<num3<<'\n';
    std::cout<<num1<<" * "<<num2<<" => "; num3 = num1 * num2; std::cout<<num3<<'\n';
    std::cout<<var<<"    * "<<num2<<" => "; num3 = var * num2; std::cout<<num3<<'\n';
    std::cout<<num1<<" * "<<var<<"   => "; num3 = num1 * var; std::cout<<num3<<'\n';
    std::cout<<num1<<" / "<<num2<<" => "; num3 = num1 / num2; std::cout<<num3<<'\n';
    std::cout<<var<<"    / "<<num2<<" => "; num3 = var / num2; std::cout<<num3<<'\n';
    std::cout<<num1<<" / "<<var<<"   => "; num3 = num1 / var; std::cout<<num3<<'\n';
    std::cout<<num1<<" ^ "<<var<<"   => "; num1 = num1^var; std::cout<<num1<<'\n';

    std::cout<<"\n\n * * * Testarea functiei toString: \n\n";
    fraction = toString(num1); std::cout<<"[string] fraction = "<<fraction<<'\n';

    std::cout<<"\n\n * * * Testarea operatorilor relationali: \n\n";
    std::cout<<num1<<" == "<<num2<<" => "; var2 = (num1 == num2); std::cout<<var2<<'\n';
    std::cout<<var<<"   == "<<num2<<" => "; var2 = (var == num2); std::cout<<var2<<'\n';
    std::cout<<num1<<" == "<<var<<"   => "; var2 = (num1 == var); std::cout<<var2<<'\n';
    std::cout<<num1<<" != "<<num2<<" => "; var2 = (num1 != num2); std::cout<<var2<<'\n';
    std::cout<<var<<"   != "<<num2<<" => "; var2 = (var != num2); std::cout<<var2<<'\n';
    std::cout<<num1<<" != "<<var<<"   => "; var2 = (num1 != var); std::cout<<var2<<'\n';
    std::cout<<num1<<" <  "<<num2<<" => "; var2 = (num1 < num2); std::cout<<var2<<'\n';
    std::cout<<var<<"   <  "<<num2<<" => "; var2 = (var < num2); std::cout<<var2<<'\n';
    std::cout<<num1<<" <  "<<var<<"   => "; var2 = (num1 < var); std::cout<<var2<<'\n';
    std::cout<<num1<<" <= "<<num2<<" => "; var2 = (num1 <= num2); std::cout<<var2<<'\n';
    std::cout<<var<<"   <= "<<num2<<" => "; var2 = (var <= num2); std::cout<<var2<<'\n';
    std::cout<<num1<<" <= "<<var<<"   => "; var2 = (num1 <= var); std::cout<<var2<<'\n';
    std::cout<<num1<<" >  "<<num2<<" => "; var2 = (num1 > num2); std::cout<<var2<<'\n';
    std::cout<<var<<"   >  "<<num2<<" => "; var2 = (var > num2); std::cout<<var2<<'\n';
    std::cout<<num1<<" >  "<<var<<"   => "; var2 = (num1 > var); std::cout<<var2<<'\n';
    std::cout<<num1<<" >= "<<num2<<" => "; var2 = (num1 >= num2); std::cout<<var2<<'\n';
    std::cout<<var<<"   >= "<<num2<<" => "; var2 = (var >= num2); std::cout<<var2<<'\n';
    std::cout<<num1<<" >= "<<var<<"   => "; var2 = (num1 >= var); std::cout<<var2<<'\n';

    std::cout<<"\n\n * * * Testarea operatorilor de conversie: \n\n";
    std::cout<<"(double) "<<num1<<" => "; var3 = (double) num1; std::cout<<var3<<'\n';
    std::cout<<"(int)    "<<num1<<" => "; var2 = (int) num1; std::cout<<var2<<'\n';
    std::cout<<"(string) "<<num1<<" => "; fraction = (std::string) num1; std::cout<<fraction<<'\n';

    return 0;
}
