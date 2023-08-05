#pragma once
#include<map>

class Piece
{
public:
	enum Type
	{
		Node,
		Line,
		Curve,
		TripleJunction,
		QuadrupleJunction
	};
	enum Face
	{
		Top,
		Right,
		Bottom,
		Left
	};
	Piece(const Type type);
	void Rotate();
	bool CheckFace(Face face);
private:
	Type pieceType;
	Face facing;
};
