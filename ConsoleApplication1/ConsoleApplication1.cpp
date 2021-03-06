// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
#include "stdafx.h"
#include <iostream>
using namespace std;

struct tree {                      // realisation of structures;
	           int leaf;
	           int branch;
	           int root;
	           int bird_on_branch;
};
tree dub;                          // creation of an objects based on a structure
tree klion;                        //
tree buk;                          //
tree nut;                          ////
class space_and_time;              // initialisation of friend classes before realisation
class fruit;                       ////
class vegetable 
{
	friend class space_and_time;                                         // realisation of friend classes
	friend int chta(vegetable, fruit);                                   // realisation of friend functions,
	friend void chta(vegetable, fruit, space_and_time);                  // and (friend) functions overloading within a class
private:
	int date_of_creation, shelf_life;
	int tr;
	bool boklozhan_li;

public:
	vegetable() {														 // it's class constructor
		date_of_creation = 988;
		shelf_life = 2018;
		boklozhan_li = 1;
		tr = 7;
	}
	vegetable(int date_of_creation, int shelf_life, bool boklozhan_li) { // at start, it was overloaded class constructor,
		this->date_of_creation = date_of_creation;                       // which was realisation of ~access to public variables,
		this->shelf_life = shelf_life;                                   // but later, I have knowed about "this" 
		this->boklozhan_li = boklozhan_li;
	}
	void set(int date_of_creation, int shelf_life, bool boklozhan_li) {  // funtion, that now initialises public variables initialisation
		this->date_of_creation = date_of_creation;
		this->shelf_life = shelf_life;
		this->boklozhan_li = boklozhan_li;
	}
	void get() {                                                         // output of is vegetable the "boklozhan"
		cout << "date of creation of this vegetable is " << date_of_creation << endl << "shelf life of this vegetable is " << shelf_life << endl;
		if (boklozhan_li) {
			cout << "it's is a the boklozhan" << endl;
		}
		else {
			cout << "it's is not a the boklozhan" << endl;
		}

	}
	~vegetable() {                                                       // it should have been class destructor
		cout << "huatit" << endl;
	}
protected:                                                               // variable for realisation of daughter classes
	int pt;
};

class fruit
{
	friend int chta(vegetable, fruit);                                   // go to 24'th line
	friend void chta(vegetable, fruit, space_and_time);                  // 
private:
	int pr;
public:
	fruit() {
		pr = 8;
 }
};

class space_and_time {                                                   // go to 24'th line    
	friend class vegetable;
	friend void chta(vegetable, fruit, space_and_time);
public:
	void time_flow(vegetable &boklozhan) {
		while (boklozhan.date_of_creation != boklozhan.shelf_life){
			boklozhan.date_of_creation++;
		};
		if (boklozhan.date_of_creation == boklozhan.shelf_life)
		{
			cout << "shelf flife of boklozhan have been reached, now is = " << boklozhan.date_of_creation << " = shelf life of boklozhan = " << boklozhan.shelf_life << endl;
		};
	};
};

class root_crop : public vegetable {                                     // realisation of daughter classes (to 64'th line)
public:
	root_crop(int pt) {
		this->pt = pt;
		cout << "potato value = " << pt << endl;
	}
};

vegetable boklozhan;                                                     // creation of objects of classes above
vegetable ohurcheg(1861, 2018, 1);                                       //
fruit ovoshh;                                                            //
space_and_time time;                                                     //
root_crop potatoe(31);                                                   ////

int chta(vegetable boklozhan, fruit ovoshh) {                            // realisation of friend funtions (overloaded)
	cout << "iiyyaa!" << endl;
	return (boklozhan.tr + ovoshh.pr);
}

void chta(vegetable boklozhan, fruit ovoshh, space_and_time) {           // realisation of friend funtions (overloaded)
	cout << "uuaaa!" << boklozhan.tr + ovoshh.pr << endl;
	;
}



int main(void) // MAIN
{
	dub.leaf = 383;
	dub.branch = 31;
	dub.root = 63;
	dub.bird_on_branch = 19;
	klion.branch = 47;
	buk.root = 35;
	nut.bird_on_branch = 143;
	int br[]{ dub.leaf, klion.branch, buk.root, nut.bird_on_branch };
	int *ptrdub_leaf = &dub.leaf;
	int &ref_dub_branch = dub.branch;
	cout << "kosven drevo = " << *ptrdub_leaf <<endl<< "kosvenent drevo = " << ref_dub_branch << endl;
	for (int j = 0; j < 4; j++)
	{
		cout << "ot dreva = " << br[j] << endl;
	};
	boklozhan.set(988, 2018, 1);
	ohurcheg.set(1861, 2018, 0);
	boklozhan.get();
	ohurcheg.get();
	cout<< chta(boklozhan, ovoshh)<<endl;
	chta( boklozhan,  ovoshh, time);
	time.time_flow(boklozhan);
	system("pause");
	return 0;
}