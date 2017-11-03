// Own cpp / h file
#include <visainstrument.h>
class FunctionGen : public VisaInstrument
{

	float freq;
	
	public:
	
	FunctionGen(ViSession);

	void sin(float, float, float);
	void idn();
	void sweep(float StartFreq, float EndFreq);
};

