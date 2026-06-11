/**
 * @file ZadPrzeciazaniePole.cc
 * @author Ewa Morga
 * @date 2026.05.08 v0.01
 
 * @version v0.01
 * @brief Przeciazanie funkcji do obliczania pola figur.
 *
 */

 #include <iostream>
 #include <cmath>

 using namespace std; 

 double pole(double a){ 
    return a * a; 
 }

 double pole(double a, double b){
    return a * b; 
 }
double pole(double a, double b, double c){
    return (a+b+c)/2;
}
double pole(int r){
    const double PI = 3.14159;
    return PI * r * r;
}

int main(){
    double bok1 = 5.0;
    double bok2 = 4.0;
    double bok3 = 3.0;
    int promien = 3;
    
    cout << "Pole kwadratu: " << pole(bok1) << endl;
    cout << "Pole prostokata: " << pole(bok1, bok2) << endl;
    cout << "Pole trojkata: " << pole(bok1, bok2, bok3) << endl;
    cout << "Pole kola: " << pole(promien) << endl;
    
    return 0;
}