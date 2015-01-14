#ifndef ARRAY_H
# define ARRAY_H

# include <cstdlib>
# include <stdexcept>

template <typename T>
class Array
{
	public:
		Array() { _tab = NULL; _n = 0;};
		Array(int n) { _tab = new T[n]; _n = n; };
		~Array() { delete[] _tab; };
		Array(const Array & src) {
			*this = src;
 		};

		T & operator[](int i) {
			if (i >= _n || i < 0)
				throw std::out_of_range("index");
			return _tab[i];
		};

		Array & operator=(const Array & rhs) {
			delete[] _tab;
			_tab = NULL;
			_n = rhs.size();
			if (_n)
			{
				_tab = new T[_n];
				for (int i = 0; i < _n; i++)
				{
					_tab[i] = rhs[i];
				}
			}
			else
				_tab = NULL;
			return *this;
		};




		int size() const { return _n; };
	private:
		T * _tab;
		int _n;
};

#endif
