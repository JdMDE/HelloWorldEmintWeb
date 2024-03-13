// This code has been automatically generated only once
// The changes that you introduce here will not be lost, but if the prototype of the state function changes,
// you will have to change it here or you will get compilation errors.
// You can consult the right prototype at each moment in file /home/jdomingo/HELLO/CodeFiles/Transitions/BackToChoose.h
// Don't get rid of the include of that file. Apart from it, you can of course include any files you need.
// And remember that OVARS has been defined as vector < pair<string,string> > so you can get the variables
// with something like this: 'for (int i=0;i<ov.size();i++) { string vname=ov[i].first; string vval=ov[i].second; etc... }'

#include "BackToChoose.h"

bool BackToChoose_to_Choose(OVARS &ov,Context &usercontext)
{

 try
 {
  if (SERVERDEB)
  {
   usercontext.GetOutletStream() << "Transition implemented in file BackToChoose.cpp going from:\n";
   usercontext.GetOutletStream() << "  State SayHello generated from file hello.html\n";
   usercontext.GetOutletStream() << "  To State:\n";
   usercontext.GetOutletStream() << "        Choose generated from file choose.html\n";
  }
  // Variables: dummy="Back to main menu"
  if (ov.size()<1)
  {
   usercontext.SetError(TOO_FEW_VARIABLES);
   usercontext.EmitOVars(ov,TOO_FEW_VARIABLES,"BackToChoose_to_Choose");
   return false;
  }
  if (ov.size()>1)
  {
   usercontext.SetError(TOO_MANY_VARIABLES);
   usercontext.EmitOVars(ov,TOO_MANY_VARIABLES,"BackToChoose_to_Choose");
   return false;
  }
  if (ov[0].first!="dummy")
  {
   usercontext.SetError(UNKNOWN_VARIABLE);
   usercontext.EmitOVars(ov,UNKNOWN_VARIABLE,"BackToChoose_to_Choose");
   return false;
  }
  if (ov[0].second!="Back to main menu")
  {
   usercontext.SetError(UNEXPECTED_VAR_VALUE);
   usercontext.EmitOVars(ov,UNEXPECTED_VAR_VALUE,"BackToChoose_to_Choose");
   return false;
  }
  // You should have returned false before this point if something has gone wrong.
 }
 catch (const exception &e)
 {
  cerr << "Exception in function BackToChoose_to_Choose\n";
  cerr << "Exception reason is " << e.what() << "\n";
  throw;
 }
 return true;
}

