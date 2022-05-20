#ifndef POlY_CLASS_H
# define POlY_CLASS_H

class Poly {

	public :
		Poly(void);
		~Poly(void);

	void bar(char const c)const;
	void bar(int const n)const;
	void bar(float const f)const;
	void bar(Poly const & l)const;
};

#endif
