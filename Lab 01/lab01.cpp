// #include <iostream>
// using namespace std;

// int main() {
//     cout << "The Size of int: " << sizeof(int) << " B" << endl;
//     cout << "The Size of long: " << sizeof(long) << " B" << endl;
//     cout << "The Size of double: " << sizeof(double) << " B" << endl;
//     cout << "The Size of float: " << sizeof(float) << " B" << endl;
//     cout << "The Size of char: " << sizeof(char) << " B" << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     long x;
//     long* p = &x;

//     cout << "Start: " << p << endl;

//     p++;
//     cout << "After p++: " << p << endl;

//     p += 3;
//     cout << "After p+3: " << p << endl;

//     p--;
//     cout << "After p--: " << p << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     long x;
//     long* p = &x;

//     cout << "Address in p: " << p << endl;
//     cout << "p * 2 (invalid use): " << p * 2 << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int list[5] = {3, 6, 9, 12, 15};
//     int *pArr = list;  
//     cout << "Array values using pointer: " << endl;

//     for (int i = 0; i < 5; i++) {
//         cout << *(pArr + i) << " ";   
//     }
//     cout << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void swapSingle(int *x, int *y) {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }

// int main() {
//     int a = 5, b = 10;
//     int *pa = &a, *pb = &b;

//     cout << "Before swap: a=" << a << " b=" << b << endl;
//     swapSingle(pa, pb);
//     cout << "After swap:  a=" << a << " b=" << b << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

void swapDouble(int **x, int **y) {
    int temp = **x;
    **x = **y;
    **y = temp;
}

int main() {
    int a = 15, b = 100;
    int *pa = &a, *pb = &b;
    int **ppa = &pa, **ppb = &pb;

    cout << "Before swap: a=" << a << " b=" << b << endl;
    swapDouble(ppa, ppb);
    cout << "After swap:  a=" << a << " b=" << b << endl;

    return 0;
}
