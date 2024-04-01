#include <iostream>
using namespace std;

int addNumber(int num1, int num2)
{
    int result = num1 + num2;
    return result;
}

int minusNumber(int num1, int num2)
{
    int result = num1 - num2;
    return result;
}

int multiplyingNumbers(int num1, int num2)
{
    int result = num1 * num2;
    return result;
}

int dividingNumbers(int num1, int num2)
{
    int result = num1 / num2;
    return result;
}

int main()
{
    {
        int num1 = 10;
        int num2 = 5;
        
        int result = addNumber(num1, num2);
        cout<<result<<endl;
    }
    
    {
        int num1 = 10;
        int num2 = 5;
        
        int result = minusNumber(num1, num2);
        cout<<result<<endl;
    }
    
    {
        int num1 = 10;
        int num2 = 5;
        
        int result = multiplyingNumbers(num1, num2);
        cout<<result<<endl;
    }
    
    {
        int num1 = 10;
        int num2 = 5;
        
        int result = dividingNumbers(num1, num2);
        cout<<result<<endl;
    }

}
