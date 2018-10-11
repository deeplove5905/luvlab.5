#include <iostream>
#include <math.h>
#include <fstream>

int main()
{
    int p,q;
    std::cout<<"enter the width and height of a triangle";
    std::cin >>p>>q;
    auto r = sqrt(pow(p,2)+pow(q,2));
    std::cout<<"The answer is "<<r;
    std:: ofstream myfile;
    myfile.open ("example.txt");
    myfile<<"writing this to a file.\n "<< r;
    myfile.close();
    return 0;
}