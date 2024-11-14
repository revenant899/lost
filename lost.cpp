//#include <iostream>
//#include <stdexcept>
//
//using namespace std;
//
//class Fraction {
//private:
//    int numerator;
//    int denominator;
//
//public:
//    Fraction(int num = 0, int denom = 1) : numerator(num), denominator(denom) {
//        if (denom == 0) {
//            throw invalid_argument("Знаменник не може бути нулем");
//        }
//    }
//
//    Fraction add(const Fraction& other) const {
//        int num = numerator * other.denominator + other.numerator * denominator;
//        int denom = denominator * other.denominator;
//        return Fraction(num, denom);
//    }
//
//    Fraction subtract(const Fraction& other) const {
//        int num = numerator * other.denominator - other.numerator * denominator;
//        int denom = denominator * other.denominator;
//        return Fraction(num, denom);
//    }
//
//    Fraction multiply(const Fraction& other) const {
//        int num = numerator * other.numerator;
//        int denom = denominator * other.denominator;
//        return Fraction(num, denom);
//    }
//
//    Fraction divide(const Fraction& other) const {
//        if (other.numerator == 0) {
//            throw invalid_argument("Cannot divide by zero.");
//        }
//        int num = numerator * other.denominator;
//        int denom = denominator * other.numerator;
//        return Fraction(num, denom);
//    }
//
//    void display() const {
//        cout << numerator << "/" << denominator << endl;
//    }
//};
//
//int main() {
//    Fraction frac1(3, 4), frac2(2, 5);
//
//    Fraction result = frac1.add(frac2);
//    cout << "Додавання: ";
//    result.display();
//
//    result = frac1.subtract(frac2);
//    cout << "Віднімання: ";
//    result.display();
//
//    result = frac1.multiply(frac2);
//    cout << "Множення: ";
//    result.display();
//
//    result = frac1.divide(frac2);
//    cout << "Ділення: ";
//    result.display();
//
//    return 0;
//}