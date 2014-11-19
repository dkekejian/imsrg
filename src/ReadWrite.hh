
#ifndef ReadWrite_h
#define ReadWrite_h 1

#include <map>
#include <string>
#include "Operator.hh"


class ReadWrite
{
 public:
   ReadWrite();
   void ReadSettingsFile(  string filename);
   ModelSpace ReadModelSpace( string filename);
   void ReadBareTBME( string filename, Operator& Hbare);
   void ReadBareTBME_Jason( string filename, Operator& Hbare);
   void ReadBareTBME_Darmstadt( string filename, Operator& Hbare, int Emax=-1);
   void WriteOneBody(Operator&, string);
   void WriteTwoBody(Operator&, string);
   void WriteValenceOneBody(Operator&, string);
   void WriteValenceTwoBody(Operator&, string);
   void WriteNuShellX_sps( Operator& op, string filename);
   void WriteNuShellX_int( Operator& op, string filename);
   void WriteAntoine_int( Operator& op, string filename); // <- not implemented yet...

   std::map<string,string> InputParameters;

   bool doCoM_corr;
   void SetCoMCorr(bool b){doCoM_corr = b;};

};



#endif

