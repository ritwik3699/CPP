 #include <iostream>
using namespace std;
class Demo {
private:
    string name;
public:
    Demo(string n) {
        name = n;
        cout << "Constructor called for " << name << endl;
    }
    ~Demo() {
        cout << "Destructor called for " << name << endl;
    }
};
int main() {
    Demo obj1("Object1");
    Demo obj2("Object2");
    cout << "Inside main function" << endl;
    return 0;
}
