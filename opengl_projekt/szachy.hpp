#pragma once

class figura {
protected:
	bool wasMoved;
	bool white;
	// model

public:
	virtual bool colour() = 0;
	virtual bool moveStatus() = 0;
	virtual void move() = 0;
};

class krol : public figura {


};