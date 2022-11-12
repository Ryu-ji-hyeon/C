#include <iostream>

using namespace std;

class Vector {
private:
	float x, y, z;
public:
	Vector() {};
	Vector(float x, float y, float z) :x{ x }, y{ y }, z{ z }{}

	void print() {
		cout << x << " " << y << " " << z << endl;
	}
	//1. ���׿����� +
    Vector operator+()const
	{
		return Vector(+x, +y, +z);
	}
	//2. ���׿����� -
	Vector operator-()const
	{
		return Vector(-x, -y, -z);
	}
	//3. ���׿����� +
	Vector operator+(const Vector& v)const
	{
		return Vector(x + v.x, y + v.y, z + v.z);
	}
	//4. ���׿����� -
	 Vector operator-(const Vector& v)const
	{
		return Vector(x - v.x, y - v.y, z - v.z);
	}
	//5. ���׿����� * (���� ���)
	float operator*(const Vector& v)const
	{
		float dot = (x * v.x) + (y * v.y) + (z* v.z);
		return dot;
	}
	//5. ���׿����� * (��� ���ϱ�)
	Vector operator*(float n)const
	{
		return Vector{ x * n,y * n,z * n };
	}
	//6. ���׿����� /
	Vector operator/(float n)const
	{
		return Vector{ x / n,y / n,z / n };
	}
	//7. ���� ������ ++
	Vector operator++()
	{
		
		++x;
		++y;
		++z;
		return *this;
	}
	//7. ���� ������ --
	Vector operator--()
	{

		--x;
		--y;
		--z;
		return *this;
	}
	//8. ���� ������ ++
	Vector operator++(int)
	{
		Vector tmp = *this;
		++x;
		++y;
		++z;
		return tmp;
	}
	//8. ���� ������ --
	Vector operator--(int)
	{
		Vector tmp = *this;
		--x;
		--y;
		--z;
		return tmp;
	}
};
int main() {

	Vector v0{ 0,1,2 };
	Vector v1{ 1,2,3 };

	Vector v2 = v0 + v1;//v0.operator+(v1);
	v2.print();

	Vector v3 = -v1;
	v3.print();

	float v4 = v0 * v1;
	cout << v4 << endl;

	Vector v5 = v1 * 3.0f;
	v5.print();

	Vector v6 = ++v1;
	v6.print();
	Vector v7 = v1++;
	v7.print();
	v1.print();

	//
}