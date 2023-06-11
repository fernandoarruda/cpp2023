#include <iostream>

int main() {
    // comment in single line
    /* multiline 
    comment */
    int x; //declaration
    x = 5;  //assignment
    int y = 6;
    int sum = x + y; 
    //Data types;

    // integer (whole number);
    int age = 38;
    int year = 2023;
    int days = 7;

    //double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    //char (single character)
    char grad = 'A';
    char initial = 'B';
    char currency = '$';

    //boolean (true or false)
    bool student = true;
    bool power = true;
    bool forSale = true;

    //string (objects that represent a sequence of text)
    std::string name = "Fernando";
    std::string day = "Friday";
    std::string month = "July";
    std::string game = "Final Fantasy 7 Rebirth";

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';
    std::cout << price << '\n';
    std::cout << initial << '\n';
    std::cout << name << '\n';
    std::cout << power << '\n';
    std::cout << game << '\n';
    std::cout << "Hello " << name << "," <<  '\n';
    std::cout <<"Your age is: " <<age << '\n';


    return 0;
}