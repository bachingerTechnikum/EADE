#include "EADE.h"

class Landbox : public EADE::Application
{
public:
	Landbox(){}
	~Landbox(){}

};

EADE::Application* EADE::createApplication()
{
	return new Landbox();
}