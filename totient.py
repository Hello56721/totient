from functools import cache
from functools import lru_cache
#import iostream :joy_cat:

@cache
def check(number, divisor):
    return True if number % divisor == 0 else False

@lru_cache(maxsize=6)
def isRelativePrime(num1, num2):
    for divisor in range(2,num1 + 1):
        if check(num1, divisor):
            if check(num2, divisor):
                return False
    return True

@lru_cache(maxsize=20)
def totient(num1):
    count = 0
    for num2 in range(1,num1 + 1):
        if isRelativePrime(num1,num2):
            count += 1
    return count

if __name__ == "__main__":
    for i in range(501):
        print(f"φ({i}) = {totient(i)}")