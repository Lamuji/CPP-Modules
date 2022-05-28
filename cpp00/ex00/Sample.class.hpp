#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{

public:
	Sample(char p1, int p2, float p3); // constructeur
	~Sample(void); // destructeur

	int		publicVar;
	void	yoPublic(void);

private:

	int		_privateVar;
	void	_yoPrivate(void);
};

#endif
