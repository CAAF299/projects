#include <iostream>
#include <cstdio>

int main()
{
    
    std::string a;  //this string will recieve data.
    double a1;  //this double value will be used to convert.

    std::cout<<"Enter a value:";
    std::getline(std::cin, a);  //input
    try{
        a1= std::stod(a);   //converts our string "a" to a double value with "a1"

    }catch(const std::invalid_argument e){
        std::cerr<<"ERROR : Not a valid value. Try again.";/*if the value entered is
                                                            a non numeric value.*/
        return 0;               
    }
    catch(const std::out_of_range e){
        std::cerr<<"The value is too big !"; //if the value is exceeds the types size limit.
        return 0;

    } 

        //print the result on screen with the float specifier.
        printf("Congratulations ! Your value is : %.2f \n",a1);
       

return 0;

}