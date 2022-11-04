#include "question2.h"

int main()
{

    int num = 100;
    int num1 = 100;

    cout<<"First variable (num) = "<<num<<"\n";
    cout<<"Second variable (num1) = "<<num1<<"\n\n";
    cout<<"The set_zero function will attempt to assign a value of 0 to both variables.\n\n";
    set_zero(num, num1);

    cout<<"First variable post set_zero function = "<<num<<"\n";
    cout<<"Second variable post set_zero function = "<<num1<<"\n\n";
    cout<<"The first variable is unchanged because the value parameter passed only it's value to the set_zero function.\n"
          "The second variable is set to zero because the reference parameter passed it's address to the set_zero function.\n";

    return 0;
}