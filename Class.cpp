#include <iostream>
#include <sstream>
using namespace std;

class Student
{
    private:
        int age,stand;
        string f_name,l_name;
    public:
        void get_age()
        {
            cin>>age;
        }
        void set_age()
        {
            cout<<age;
        }
        void get_first_name()
        {
            cin>>f_name;
        }
        void set_first_name()
        {
            cout<<f_name;
        }
        void get_last_name()
        {
            cin>>l_name;
        }
        void set_last_name()
        {
            cout<<l_name;
        }
        void get_standard()
        {
            cin>>stand;
        }
        void set_standard()
        {
            cout<<stand;
        }
};
int main()
{
    Student obj;
    obj.get_age();
    obj.get_first_name();
    obj.get_last_name();
    obj.get_standard();
    obj.set_age();
    cout<<"\n";
    obj.set_last_name();
    cout<<", ";
    obj.set_first_name();
    cout<<"\n";
    obj.set_standard();
    cout<<"\n\n";
    obj.set_age();
    cout<<",";
    obj.set_first_name();
    cout<<",";
    obj.set_last_name();
    cout<<",";
    obj.set_standard();
    
}
