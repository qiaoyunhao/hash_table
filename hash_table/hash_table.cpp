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
	mymap[0] = "Ф��˵ľ���";
	mymap[1] = "�˲���ĸǴı�";
	mymap[2] = "ս��2";
	if (mymap.find(0)!=mymap.end())
	{
		cout << mymap[0]<<endl;
		//printf(mymap[0])
	}

}