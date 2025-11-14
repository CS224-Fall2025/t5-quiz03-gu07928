#include <iostream>

class employee {
    protected :
        string name;
        double salary;
        static int empCount = 0;
    
    public:
        employee(string n, double s) {name = n; salary = s; empCount++}
        virtual void distplayInfo() {std::cout << name << salary;}
        static void showTotalEmp() {std::cout << empCount << endl;}
        virtual ~employee();
};

class staff: public employee {
    private:
        string department = "Staff";
    public:
        void distplayInfo() override {
            std::cout << department << name << salary;
        }
};

class faculty: public employee {
    private:
        string department = "Faculty";
    public:
        void distplayInfo() override {
            std::cout << department << name << salary;
        }
};

int main() {
    int n;
    cin >> n;
    string t, m;
    int sal;
    for (int i = 0; i < n; i++) {
        cin >> t >> n >> sal;
        if (t == "Staff") {

        } else {

        }
    }
}