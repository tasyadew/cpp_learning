#ifndef CHEMISTRYATOM_H
#define CHEMISTRYATOM_H

#include<string>
class ChemistryAtom
{

	private:
		string name;
        double atomicWeight;
        int atomicNumber;
		
	public:
		void setName(string);
		void setWeight(double);
        void setNumber(int);
		string getName() const;
		double getWeight() const;
		int getNumber() const;
};

#endif
