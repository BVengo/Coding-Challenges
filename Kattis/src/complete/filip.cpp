#include <iostream>

int reverse3(int n) {
    int dig1 = n%10;;
    int dig2 = (n/10)%10;
    int dig3 = n/100;
    
    return dig1*100 + dig2*10 + dig3;
}

int main() {
    int A, B;
    
    std::cin >> A >> B;
    
    A = reverse3(A);
    B = reverse3(B);

    std::cout << (A > B ? A : B) << std::endl;
}
