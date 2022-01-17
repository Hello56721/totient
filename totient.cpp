#include <iostream>

bool check(int number, int divisor){
    if (number % divisor == 0){
        return true;
    } else {
        return false;
    }
    
    // You can replace the entire function body with this if you want, though
    // this is less obvious.
    //return !(number % divisor)
}

bool isRelativePrime(int num1, int num2){
    for (int divisor = 2; divisor < num1 + 1; divisor++){
        // Checking if the result is 1 is uneccesary, you can simply put it in the if statement
        if (check(num1, divisor)){
            // Checking if the result is 1 is uneccesary, you can simply put it in the if statement
            if (check(num2, divisor)){
                return false;
            }
        }
    }
    return true;
}

int totient(int num1){
    int count = 0;
    for (int num2 = 1; num2 < num1 + 1; num2++){
        // Checking if the result is 1 is uneccesary, you can simply put it in the if statement
        if (isRelativePrime(num1,num2)){
            count++;
        }
    }
    return count;
}

int main(){
    for (int i = 1; i < 501; i++){
        std::cout << "φ(" << i << ") = " << totient(i) << std::endl;
    }
    return 0;
}