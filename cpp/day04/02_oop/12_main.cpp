#include <iostream>
#include <string>

using namespace std;

/*
  ǳ��������������
*/

class student{
public:
    //string * name; //Ұָ�룬����ָ��
    string * name = nullptr;
    student (string name ) : name(new string(name)){
        cout << "�вι��캯��" <<endl;
    }
    student (const student & s){
        name = s. name;
    }
    ~student (){
        cout << "��������" << endl;
    }
};
int main() {
    student s1("����");
    student s2 = s1;


    cout <<"s1.name=" << *s1.name <<endl;
    cout <<"s2.name=" << *s2.name <<endl;

    *s2.name = "����";


    cout <<"====s1.name=" << *s1.name <<endl;
    cout <<"====s2.name=" << *s2.name <<endl;


    return 0;
}
