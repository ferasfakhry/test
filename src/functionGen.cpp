#include <functionGen.h>
#include <visa.h>
#include <stdio.h>

void FunctionGen::sin(float f, float v, float o)
{
	/*make sin wave */


}

void FunctionGen::sweep(float StartFreq, float EndFreq)
{
float x=0;
	char commandString[128];

sprintf(commandString, "FREQ %f", StartFreq);
Sleep(5000);
viPrintf(session, commandString);
Sleep(5000);


//sprintf(commandString, "FREQ %f", EndFreq);

//viWrite(session, commandString, sizeof commandString, VI_NULL);

}

FunctionGen::FunctionGen(ViSession s):VisaInstrument(s)
{
	freq = 30000;
}

void FunctionGen::idn()
{
	/* special function gen stuff */
}

