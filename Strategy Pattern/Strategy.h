#pragma once
class Strategy
{
public:
	Strategy(void);
	virtual ~Strategy(void);
	virtual void MyStrategy(void) = 0;
private:

};
Strategy::Strategy(void)
{

}
Strategy::~Strategy(void)
{

}