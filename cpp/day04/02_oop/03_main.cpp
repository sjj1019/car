#include <iostream>
#include <string>

using namespace std;

// ���ʶ����еĳ�Ա

class student{
public:
    string name;
    int age ;

    void run(){
        cout << age <<" ��� " << name << " ���ܲ�~" <<endl;
    }
};


int main() {

    //1. ջ�ڴ淽ʽ��������
    student s;
    s.name = "����";
    s.age = 18;
    s.run();


    //2. ���ڴ�ķ�ʽ �����������һ����һ��ָ����գ�ʹ��ָ�������ʶ���ĳ�Ա���򵥵Ĳ�������ʹ�� ->
    student *s2 = new student();
    s2->name = "����";
    s2->age = 19 ;
    s2->run();

    return 0;
}
