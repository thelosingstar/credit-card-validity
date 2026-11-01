#include <iostream>
int getEvenNum(std::string number);
int getOddNum(std::string number);
int getNum(int number);
int main(){
    //credit card number
    std::string cardNum = "\0";
    std::cout << "Enter your credit card number: " << std::endl;
    std::cin >> cardNum;

    int result = getEvenNum(cardNum) + getOddNum(cardNum);
    if(result % 10 == 0){
        std::cout << "The Credit Card Number: " << cardNum << std::endl;
        std::cout << "Valid";
    }
    else{
        std::cout << "The Credit Card Number: " << cardNum << std::endl;
        std::cout << "Not Valid";
    }

}
int getEvenNum(std::string number){
    int sum = 0;
    for(int i = number.size() - 2; i >= 0; i -= 2){ /*starting from the end looking at even numbers*/
        int evenNum = getNum((number[i] - '0') * 2); //doubles every number we substract '0' because of string notations
        sum += evenNum;
    }
    return sum;
}
int getOddNum(std::string number){
    int sum = 0;
    for(int i = number.size() - 1; i >= 0; i -= 2){
        int oddNum = getNum(number[i] - '0');
        sum += oddNum;
    }
    return sum;
}
int getNum(int number){
    return (number % 10) + (number / 10); //made for both sigle digit numbers and double digit numbers
}
