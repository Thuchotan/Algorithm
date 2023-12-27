#include<iostream>
#include<string>

void HelloWorld(std::string x){
    std::cout << x;
}

int main()
{
    //question 1
    std::cout << "Hello World\n";

    //question 2
    std::string a("Hello World");
    std::cout << a << "\n";

    //question 3
    std::string b("Hello ");
    std::string c("World");
    std::string d = b + c;
    std::cout << d << "\n";

    //question 4
    HelloWorld(d);
    return 0;
}
