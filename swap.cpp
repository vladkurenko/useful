void Swap(int &a, int &b)
{
	a ^= b;
	b ^= a;
	a ^= b;
}
//solution without buffer variable
