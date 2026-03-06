#include <iostream>
using namespace std;
void digitsummer(int value) {
    int counter = 0;
    int sum = 0;

    if (value > 9) {
        while (value/10 > 0) {
            counter++;
            sum = sum + value%10;
            value = value/10;
        }
        sum = sum + value;
        cout << "Sum of the digits is: " << sum << endl << "Steps: "<< counter << endl;
    }
    else {
        cout << "Please enter an positive integer greater than 9" << endl;
    }
}
void FizzBuzz(int value) {
    for (int i = 1; i <= value; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "Fizz Buzz" << endl;
        }
        else if (i % 5 == 0) {
            cout << "Buzz" << endl;
        }
        else if (i % 3 == 0) {
            cout << "Fizz" << endl;
        }
        else if (i % 7 == 0) {
            continue;
        }else {
            cout << i << endl;
        }
    }
}
void pattern(int value) {
    if (value >= 3 && value <= 9) {
        for (int i = 1; i <= 2 * value - 1; i++) {

            int k;
            if (i <= value)
                k = i;
            else
                k = 2 * value - i;

            for (int j = 1; j <= k; j++) {
                cout << j << " ";
            }

            cout << endl;
        }
    }else {
        cout << "number must be in between 3 and 9" << endl;
    }
}
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    int temp_data;
    cout << "Please enter the number for digit counter: " << endl;
    cin >> temp_data;
    digitsummer(temp_data);
    cout << "Please enter a number between 10 and 100 number for FizzBuzz: " << endl;
    cin >> temp_data;

    while (!temp_data >= 10 && temp_data <= 100) {
        cout << "Number must be in between 10 and 100 " << endl;
        cin >> temp_data;
    }
    FizzBuzz(temp_data);
    cout <<"Please enter a number between 3 and 9 : "<< endl;
    cin >> temp_data;
    pattern(temp_data);

    return 0;
}


    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
