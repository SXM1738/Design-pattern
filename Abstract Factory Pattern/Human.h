#pragma once
class Human
{
public:
	Human();
	virtual ~Human();
	virtual void character() = 0;
	virtual void Sex() = 0;
private:

};

Human::Human()
{
}

Human::~Human()
{
}
