
#include <visatype.h>
#include <windows.h>

class VisaInstrument
{

protected:
ViSession session;
ViStatus status;


	public:




		VisaInstrument(ViSession session);

		virtual void idn();
};

