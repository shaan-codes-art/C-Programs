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

    void getinfo()
    {
        cout<<"enter the brand name:"<<endl;
        cin>>brand;
        cout<<"enter the model name:"<<endl;
        cin>>model;
        cout<<"enter the max speed:"<<endl;
        cin>>max_speed;
        cout<<"enter the color of the car:"<<endl;
        cin>>color;
    }
    void showinfo()
    {
        cout<<"brand name:"<<brand<<endl;
        cout<<"model name:"<<model<<endl;
        cout<<"color of the car:"<<color<<endl;
        cout<<"max speed:"<<max_speed<<endl;
    }
};

int main()
{
    Car c1,c2,c3;
    cout<<"enter information of car1:"<<endl;
    c1.getinfo();
    cout<<"showing information of car1:"<<endl;
    c1.showinfo();

    cout<<"enter information of car2:"<<endl;
    c2.getinfo();
    cout<<"showing information of car2:"<<endl;
    c2.showinfo();

    cout<<"enter information of car3:"<<endl;
    c3.getinfo();
    cout<<"showing information of car3:"<<endl;
    c3.showinfo();

    return 0;
}
