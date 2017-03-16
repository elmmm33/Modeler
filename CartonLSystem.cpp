#include "LSystem.h"
#include "CartonLSystem.h"
#include <list>
#include <map>
#include <vector>

using namespace std;

vector<LSystem*>* CartonLSystems = nullptr;

void CartonLSystemSetup()
{
	if (CartonLSystems != nullptr)
	{
		return;
	}

	CartonLSystems = new vector<LSystem*>;

	map<int, list<int> > oneMap;
	map<int, pair<int, int> > oneOpMap;
	oneMap[0] = list<int> { 2, 1, 3, 0, 3, 1, 2 };
	oneMap[1] = list<int> { 3, 0, 2, 1, 2, 0, 3 };
	oneOpMap[0] = make_pair(CT_FORWARD, 1);
	oneOpMap[1] = make_pair(CT_FORWARD, 1);
	oneOpMap[2] = make_pair(CT_ROTATE_LEFT, 60);
	oneOpMap[3] = make_pair(CT_ROTATE_RIGHT, 60);
	list<int> oneInitOP = list <int> { 0 };
	LSystem* oneLSys = new LSystem(oneMap, oneInitOP, oneOpMap);
	CartonLSystems->push_back(oneLSys);

	oneMap[0] = list<int> { 1, 2, 0, 3, 0 };
	oneMap[1] = list<int> { 1, 1 };
	oneOpMap[0] = make_pair(CT_FORWARD, 1);
	oneOpMap[1] = make_pair(CT_FORWARD, 1);
	oneOpMap[2] = make_pair(CT_ROTATE_LEFT_AND_PUSH, 45);
	oneOpMap[3] = make_pair(CT_POP_AND_ROTATE_RIGHT, 45);
	oneLSys = new LSystem(oneMap, oneInitOP, oneOpMap);
	CartonLSystems->push_back(oneLSys);
}