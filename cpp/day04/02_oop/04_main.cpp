#include <iostream>
#include <string>

using namespace std;

/*
 �൱�еķ������η�
    private :  Ĭ�Ͼ���privateȨ�ޡ�  ����ⲿ�޷����ʡ�

    public:  �������κεط������Է��ʣ�ֻҪ�ж��󼴿�

    protected: ���� �� �����Լ�������| ��Ԫ�� |��Ԫ���� ���Է���֮�⣬�����ط����ܷ��ʡ�
*/
class student{

protected:
    string name;
private:
    int age ;

public:
    void read(){
        age = 19;
    }
};


int main() {

    student s;
    s.name = "aa";
    s.age  = 19;



    return 0;
}
