#ifndef _TREE
#define _TREE

class Tree {
private:
	double height;
	bool evergreen;
public:
	Tree();
	Tree(double h, bool ever);
	~Tree();
	void draw();
	void info();
};

#endif
