#ifndef CHEMISTRYATOM_H
#define CHEMISTRYATOM_H

#include<string>
class ChemistryAtom
{
	private:
		std::string name;
        double atomicWeight;
        int atomicNumber;
		
	public:
		//mutator (setter functions)
		void setName(std::string);
		void setWeight(double);
        void setNumber(int);

		//accessor (getter functions)
		std::string getName() const; 
		double getWeight() const;
		int getNumber() const;
};

#endif
