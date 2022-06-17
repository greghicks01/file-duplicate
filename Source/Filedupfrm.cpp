//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Filedupfrm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
        // enum drives - enum folders one level c: d: +usb sticks
        DWORD drvmsk = GetLogicalDrives ( ) ;
        for ( int x = 0 ; x < 'Z' - 'A' ; x++ )
        {
                if ( ( drvmsk & ( 0x1 << x ) )!= 0 )
                {
                        AnsiString t = (char) ('A' + x ) ;  
                        DriveList->AddItem( t + ":" , NULL ) ;
                }
        }


}
//---------------------------------------------------------------------------
