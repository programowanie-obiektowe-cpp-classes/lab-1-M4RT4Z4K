class Wektor2D
{
  public:
	Wektor2D(int a = 3, int b = 4) {
		x = a;
		y = b;
		std::cout << "stworzylem wektor[" << x << "," << y << "]\n";
	}
	~Wektor2D() {
		std::cout << "zniszczylem wektor ["<<x<<","<<y<<"]\n";
	}
	void print()
	{
		std::cout << " x= " << x << '\n' << " y= " << y << '\n';
	}
	void setX(int a) { x = a; }
	void setY(int b) { y=b; }
	int getX() { return x; }
	int getY() { return y; }

private:
	int x;
	int y;
};
