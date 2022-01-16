#include <iostream>

bool check(int number, int divisor){
    if (number % divisor == 0){
        return true;
    } else {
        return false;
    }
}

bool isRelativePrime(int num1, int num2){
    for (int divisor = 2; divisor < num1 + 1; divisor++){
        if (check(num1, divisor) == 1){
            if (check(num2, divisor) == 1){
                return false;
            }
        }
    }
    return true;
}

int totient(int num1){
    int count = 0;
    for (int num2 = 1; num2 < num1 + 1; num2++){
        if (isRelativePrime(num1,num2) == 1){
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