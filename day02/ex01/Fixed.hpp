
#ifndef FIXED_H
# define FIXED_H

class Fixed
{
	private:
		int v;
		static const int f = 8;
	public:
		void operator=(Fixed &f)	;
		int getRawBits();
		Fixed();
		Fixed(Fixed &a);
		~Fixed();
};

#endif
