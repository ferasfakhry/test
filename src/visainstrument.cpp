#include <visainstrument.h>
#include <visa.h>


VisaInstrument::VisaInstrument(ViSession s)
{
	
	session = s;

}

void VisaInstrument::idn()
{
	status = viPrintf(session, "*IDN?");
}
