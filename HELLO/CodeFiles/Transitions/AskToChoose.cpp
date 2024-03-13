// This code has been automatically generated only once
// The changes that you introduce here will not be lost, but if the prototype of the state function changes,
// you will have to change it here or you will get compilation errors.
// You can consult the right prototype at each moment in file /home/jdomingo/HELLO/CodeFiles/Transitions/AskToChoose.h
// Don't get rid of the include of that file. Apart from it, you can of course include any files you need.
// And remember that OVARS has been defined as vector < pair<string,string> > so you can get the variables
// with something like this: 'for (int i=0;i<ov.size();i++) { string vname=ov[i].first; string vval=ov[i].second; etc... }'

#include "AskToChoose.h"

bool AskToChoose_to_Choose(OVARS &ov,Context &usercontext)
{

 try
 {
  if (SERVERDEB)
  {
    usercontext.GetOutletStream() << "Transition implemented in file AskToChoose.cpp going from:\n";
    usercontext.GetOutletStream() << "  State AskName generated from file ask.html\n";
    usercontext.GetOutletStream() << "  To State:\n";
    usercontext.GetOutletStream() << "        Choose generated from file choose.html\n";
  }
  // Variables: personnmame, dummy=GO
  if (ov.size()<2)
  {
   usercontext.SetError(TOO_FEW_VARIABLES);
   usercontext.EmitOVars(ov,TOO_FEW_VARIABLES,"AskToChoose_to_Choose");
   return false;
  }
  if (ov.size()>2)
  {
   usercontext.SetError(TOO_MANY_VARIABLES);
   usercontext.EmitOVars(ov,TOO_MANY_VARIABLES,"AskToChoose_to_Choose");
   return false;
  }

  int nsv=0;
  string resp;
  string pn;
  for (unsigned i=0;i<ov.size();i++)
  {
   if (ov[i].first=="personname")
   {
    pn=ov[i].second;
    nsv++;
   }
   if (ov[i].first=="dummy")
   {
    resp=ov[i].second;
    nsv++;
   }
  }
  if (nsv!=2)
  {
   usercontext.SetError(UNKNOWN_VARIABLE);
   usercontext.EmitOVars(ov,UNKNOWN_VARIABLE,"AskToChoose_to_Choose");
   return false;
  }
  if (resp!="GO")
  {
   usercontext.SetError(UNEXPECTED_VAR_VALUE);
   usercontext.EmitOVars(ov,UNEXPECTED_VAR_VALUE,"AskToChoose_to_Choose");
   return false;
  }
  // You should have returned false before this point if something has gone wrong.
  usercontext.SetPName(pn);
 }
 catch (const exception &e)
 {
  cerr << "Exception in function AskToChoose_to_Choose\n";
  cerr << "Exception reason is " << e.what() << "\n";
  throw;
 }
 return true;
}

