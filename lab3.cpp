
#include <iostream>
using namespace std;
void swapValues(int *a, int *b) {
    int temp = *b;
    *b = *a;
    *a = temp;
}

void printArray(int* arr, int size) {
    for(int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int findMax(int* arr, int size) {
    int best = *arr;

    for(int i = 1; i < size; i++) {
        if(*(arr + i) > best) {
            best = *(arr + i);
        }
    }
    return best;
}

void reverseArray(int* arr, int size) {
    for(int i = 0; i < size / 2; i++) {
        int temp = *(arr + i);
        *(arr + i) = *(arr + size - 1 - i);
        *(arr + size - 1 - i) = temp;
    }
}
int* createArray(int size) {
    int* arr = new int[size];
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    return arr;
}
void deleteArray(int* arr) {
    delete[] arr;
}

int main() {

    int *p1 , *p2;
    int a , b, size;
    int numbers[5]= {1,2,3,4,5};
    p1 = &a;
    p2 = &b;

    cout<<"enter the first int: "<<endl;
    cin >> a ;
    cout<<"enter the second int: "<<endl;
    cin >> b ;
    swapValues(p1, p2);

    cout << "Swaped value of first int:" << *p1 << endl;
    cout << "Swaped value of second int:" << *p2 << endl;

    cout<<"Array: ";
    printArray(numbers, 5);

    cout<< "Bigest number in array:";
    cout << findMax(numbers, 5) << endl;

    reverseArray(numbers, 5);
    cout<<"reversed array: ";
    printArray(numbers, 5);

    cout<< "Please enter the array size: ";
    cin >> size;
    int* myArray = createArray(size);
    cout<<"Your array:  ";
    printArray(myArray, size);

    deleteArray(myArray);

    return 0;
}
