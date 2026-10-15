struct Key { unsigned int value; };
bool KeyLess(const Key& a, const Key& b) { return a.value < b.value; }
