// This code has been automatically generated only once
// The changes that you introduce here will not be lost, but if the prototype of the state function changes,
// you will have to change it here or you will get compilation errors.
// You can consult the right prototype at each moment in file /home/jdomingo/HELLO/CodeFiles/Transitions/ChooseToOthers.h
// Don't get rid of the include of that file. Apart from it, you can of course include any files you need.
// And remember that OVARS has been defined as vector < pair<string,string> > so you can get the variables
// with something like this: 'for (int i=0;i<ov.size();i++) { string vname=ov[i].first; string vval=ov[i].second; etc... }'

#include "ChooseToOthers.h"

string Tr_ChooseToOthers_choice(OVARS &ov, Context &usercontext)
{
 if (SERVERDEB)
 {
  usercontext.GetOutletStream() << "Transition implemented in file ChooseToOthers.cpp going from:\n";
  usercontext.GetOutletStream() << "  State Choose generated from file choose.html\n";
  usercontext.GetOutletStream() << "  To states:\n";
  usercontext.GetOutletStream() << "    SayHello generated from file hello.html\n";
  usercontext.GetOutletStream() << "    SayGoodbye generated from file bus.html\n";
 }
 
 if (ov.size()<1)
 {
  usercontext.SetError(TOO_FEW_VARIABLES);
  usercontext.EmitOVars(ov,TOO_FEW_VARIABLES,"Tr_ChooseToOthers_choice");
  return "";
 }

 if (ov.size()>1)
 {
  usercontext.SetError(TOO_MANY_VARIABLES);
  usercontext.EmitOVars(ov,TOO_MANY_VARIABLES,"Tr_ChooseToOthers_choice");
  return "";
 }

 if (ov[0].first!="mainmenu")
 {
  usercontext.SetError(UNKNOWN_VARIABLE);
  usercontext.EmitOVars(ov,UNKNOWN_VARIABLE,"Tr_ChooseToOthers_choice");
  return "";
 }

 // mainmenu=="sayhello"
 if ( ov[0].second == "sayhello")
  return("SayHello");

 // mainmenu=="saygoodbye"
 if ( ov[0].second == "saygoodbye" )
  return("End_of_program");

 // Don't return any string different from the avobe-mentioned or you will get run-time errors
 usercontext.SetError(UNEXPECTED_VAR_VALUE);
 usercontext.EmitOVars(ov,UNEXPECTED_VAR_VALUE,"Tr_ChooseToOthers_choice");
 return "";
}

bool ChooseToOthers_to_SayHello(OVARS &ov,string &personname,Context &usercontext)
{

 try
 {
  personname=usercontext.GetPName();
  return true;
  // You should have returned false before this point if something has gone wrong.
 }
 catch (const exception &e)
 {
  cerr << "Exception in function ChooseToOthers_to_SayHello\n";
  cerr << "Exception reason is " << e.what() << "\n";
  throw;
 }
 return true;
}

bool ChooseToOthers_to_SayGoodbye(OVARS &ov,string &personname,Context &usercontext)
{

 try
 {
  personname=usercontext.GetPName();
  return true;
  // You should have returned false before this point if something has gone wrong.
 }
 catch (const exception &e)
 {
  cerr << "Exception in function ChooseToOthers_to_SayGoodbye\n";
  cerr << "Exception reason is " << e.what() << "\n";
  throw;
 }
 return true;
}

