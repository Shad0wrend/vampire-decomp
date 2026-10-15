class CThing { public: void sub_10010c1c(void* data, int size); void Receive(int value); };
void CThing::Receive(int value) { sub_10010c1c(&value, 32); }
