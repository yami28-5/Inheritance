#include<iostream>
using namespace std;

class Vehicle	//Транспортное средство
{
	int speed;
public:
	virtual void move() = 0;
};
//Наземное транспортное средство
class GroundVehicle :public Vehicle {};

class Car :public GroundVehicle
{
public:
	void move()override
	{
		cout << "Машина едет на 4-х колесах" << endl;
	}
};

void main()
{
	setlocale(LC_ALL, "");
	cout << "AbstractBaseClass" << endl;
	//Vehicle v;	//E0322: Object of abstract class type 'Vehicle' is not allowed (Объекты абстрактного класса 'Vehicle' НЕ допускаются).
				//C2259: Cannot instantiate abstract class.
				//Instance - экземпляр. Instantiate - создать экземпляр.
	//GroundVehicle gv;
	Car bmw;
	bmw.move();
}