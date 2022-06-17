//---------------------------------------------------------------------------/*
 /*                     Copyright © 2007
 *                     Mr Gregory Hicks
 *
 *                 Software Project Engineer
 *                 Mr Gregory Hicks BIT CQU
 *
 *  $Revision: 1.1 $
 *
 *  $Log: dupfilep.cpp $
 *  Revision 1.1  2007/09/08 06:54:56  Administrator
 *  Initial revision
 *
 *
 *
 *
*/


#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("dupfile.cpp", Form1);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->CreateForm(__classid(TForm1), &Form1);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        catch (...)
        {
                 try
                 {
                         throw Exception("");
                 }
                 catch (Exception &exception)
                 {
                         Application->ShowException(&exception);
                 }
        }
        return 0;
}
//---------------------------------------------------------------------------
