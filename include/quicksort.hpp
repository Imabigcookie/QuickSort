#include <iostream>

template <typename Iterator>
void q_Sort(Iterator right, Iterator left)
{
	Iterator i = left;
	Iterator j = right;
	Iterator center = left;
	while (i <= j)
	{
		while (*i < *center) i++;
		while (*j > *center) j--;
		if (i <= j)
		{
			swap(*i, *j);
			i++;
			j--;
		}
	} 
	if (left < j) q_Sort(j, left);
	if (right > i) q_Sort(right, i);
}
