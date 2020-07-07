#include <iostream>

//Explanation the ‹•”HH

template<class Float=double,class Int = long long int>//[Int] is your Infinity for OneThing.it is fuse number.‹”B
class Imaginary {
public:
	Imaginary() = delete;
	Imaginary(const Int& Max):I(Max) {}

	operator Float& () const{
		return F;
	}

	operator Float& (){
		return F;
	}
	/**/
	Float operator =(const Float In) {
		F = In;
		return In;
	}
	/**/
	Float Map() const{
		return F * I;
	}

	bool SetMax(const Int& In) {
		I = In;
		return true;
	}
	const Int& GetInt() const{
		return I;
	}
	const Float& GetFloat() const{
		return F;
	}
	Float& GetFloat(){
		return F;
	}
protected:
	Float F=0;
	Int I=0;
};

int main() {

	Imaginary<> i = 256;

	i = 1.9;

	std::cout << i.Map()<<':'<<i.GetInt()<<':'<<i.GetFloat() << std::endl;

	return 0;

}