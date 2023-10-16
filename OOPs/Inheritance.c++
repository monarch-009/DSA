#include <iostream>
using namespace std;
// Human Class
class Humam
{
public:
    float height;
    float weight;
    int age;

public:
    void setHeight(float h)
    {
        this->height = h;
    }
    float getHeight()
    {
        return this->height;
    }
    void setWeight(float w)
    {
        this->weight = w;
    }
    float getWeight()
    {
        return this->weight;
    }
    void setAge(int a)
    {
        this->age = a;
    }
    int getAge()
    {
        return age;
    }
};
// Male Class
class Male : public Humam // inInheritance from Human Class
{
public:
    string name;
    void setName(string s)
    {
        this->name = s;
    }
    string getName()
    {
        return name;
    }
    void saying()
    {
        cout << "Hi...!" << endl;
    }
};
int main()
{
    Male m1;
    m1.setName("Aditya");
    m1.setAge(21);
    m1.setHeight(6.4);
    m1.setWeight(72.45);
    m1.saying();
    cout << "Name : " << m1.getName() << endl;
    cout << "Age : " << m1.getAge() << endl;
    cout << "Height : " << m1.getHeight() << endl;
    cout << "Weight : " << m1.getWeight() << endl;
    
    return 0;
}