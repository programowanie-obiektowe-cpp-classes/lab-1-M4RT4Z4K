class Wektor2D
{
  public:
	Wektor2D(double a = 0, double b = 0) {
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
	void setX(double a) { x = a; }
	void setY(double b) { y=b; }
	double getX() { return x; }
	double getY() { return y; }

private:
	double x;
	double y;
};

Wektor2D operator+(Wektor2D u, Wektor2D v) {
	double x = u.getX()+ v.getX();
	double y = u.getY() + v.getY();
	return Wektor2D(x, y);
}

double operator*(Wektor2D u, Wektor2D v) {
	double il=u.getX() * v.getX()+ u.getY() * v.getY();
	return il;
}
