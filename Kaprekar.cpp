#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, num, a, b, count;
    
    cin >>n;
    num = n;
    while (num != 6174) {
        int digits[4], i;
        for (i = 0; i < 4; i++) {
            digits[i] = num % 10;
            num /= 10;
        }
        sort(digits, digits + 4);
        a = 0;
        for (i = 0; i < 4; i++) {
            a = a * 10 + digits[i];
        }
        reverse(digits, digits + 4);
        b = 0;
        for (i = 0; i < 4; i++) {
            b = b * 10 + digits[i];
        }
        num = b - a;
       
        count++;
    }
    cout<<count;
    return 0;
}