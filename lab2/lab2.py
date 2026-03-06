def digitsummer(value):
    counter = 0
    sum_ = 0

    if value > 9:
        while value // 10 > 0:
            counter += 1
            sum_ += value % 10
            value //= 10
        sum_ += value
        print("Sum of the digits is:", sum_)
        print("Steps:", counter)
    else:
        print("Please enter a positive integer greater than 9")

def FizzBuzz(value):
    for i in range(1, value + 1):
        if i % 3 == 0 and i % 5 == 0:
            print("Fizz Buzz")
        elif i % 5 == 0:
            print("Buzz")
        elif i % 3 == 0:
            print("Fizz")
        elif i % 7 == 0:
            continue
        else:
            print(i)

def pattern(value):
    if 3 <= value <= 9:
        for i in range(1, 2 * value):
            if i <= value:
                k = i
            else:
                k = 2 * value - i

            for j in range(1, k + 1):
                print(j, end=" ")
            print()
    else:
        print("number must be in between 3 and 9")

def main():
    temp_data = int(input("Please enter the number for digit counter: "))
    digitsummer(temp_data)

    temp_data = int(input("Please enter a number between 10 and 100 number for FizzBuzz: "))
    while not (10 <= temp_data <= 100):
        print("Number must be in between 10 and 100")
        temp_data = int(input())
    FizzBuzz(temp_data)

    temp_data = int(input("Please enter a number between 3 and 9 : "))
    pattern(temp_data)

if __name__ == "__main__":
    main()
