#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS
#include<hash_map>
#include<string>
#include<iostream>
using namespace std;
class lightMat
{
public: 
protected:
private:
};
int main()
{
	hash_map<int,string> mymap;
	mymap[0] = "肖申克的救赎";
	mymap[1] = "了不起的盖茨比";
	mymap[2] = "战狼2";
	if (mymap.find(0)!=mymap.end())
	{
		cout << mymap[0]<<endl;
		//printf(mymap[0])
	}

}