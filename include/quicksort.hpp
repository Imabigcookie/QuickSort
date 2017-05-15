#include <iostream>

template <typename Iterator>
void q_Sort(Iterator first, Iterator last)
{
	Iterator f = first, l = last;
	int x = *(first+(last-first)/2);
	while (f <= l)
	{
		while (*f < x) f++;
		while (*l > x) l--;
		if (f <= l)
		{
			std::iter_swap(l, f);
			f++;
			l--;
		}
	}
	if (f < last)
		q_Sort( f, last);
	if (first< l)
		q_Sort( first, l);
}
