#include "Vectors.h"
void Vectors::gets()
{
    setlocale(LC_ALL, "Russian");
    cout << endl;
    cout << "������� ���������� x: " << endl;
    cin >> x;
    cout << "������� ���������� y:  " << endl;
    cin >> y;
    cout << "������� ���������� z:  " << endl;
    cin >> z;
}

void Vectors::module() {
    setlocale(LC_ALL, "Russian");
    cout << endl;
    cout << "������ ������� : " << x * x + y * y + z * z << endl;

}

void Vectors::sum(Vectors n1)
{
    setlocale(LC_ALL, "Russian");
    cout << "����� ��������: ";
    cout << "(" << this->x + n1.x << "; " << this->y + n1.y << "; " << this->z + n1.z << ")";
}

void Vectors::scalar(Vectors n2)
{
    setlocale(LC_ALL, "Russian");
    cout << endl;
    cout << "��������� ������������ ��������: " << (this->x) * n2.x + (this->y) * n2.y + (this->z) * n2.z << endl;
}

void Vectors::vector(Vectors n3)
{
    setlocale(LC_ALL, "Russian");
    cout << "��������� ������������ ��������: ";
    cout << "(" << this->y * n3.z - this->z * n3.y << "; " << this->z * n3.x - this->x * n3.z << "; " << this->x * n3.y - this->y * n3.x << ")";
}
