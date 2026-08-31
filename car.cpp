#include<iostream>
#include<string>
using namespace std;
class Car
{
    public:
    string brand;
    string model;
    float max_speed;
    string color;
};
int main()
{
    Car Car1;
    Car1.model = "RS6";
    Car1.brand = "audi";
    Car1.color = "black";
    Car1.max_speed = 220;

    
    cout<<"the model of the the car is "<<Car1.model<<endl;
    cout<<"the brand is "<<Car1.brand<<endl;
    cout<<"the color of the car is "<<Car1.color<<endl;
    cout<<"the max speed of the car is "<<Car1.max_speed<<endl;
    return 0;
}