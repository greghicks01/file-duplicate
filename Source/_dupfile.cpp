//---------------------------------------------------------------------------
/*
 *                     Copyright © 2007
 *                     Mr Gregory Hicks
 *
 *                 Software Project Engineer
 *                 Mr Gregory Hicks BIT CQU
 *
 *  $Revision: 1.1 $
 *
 *  $Log: dupfile.cpp $
 *  Revision 1.1  2007/09/08 06:54:56  Administrator
 *  Initial revision
 *
 *
 *
 *
*/


#include <vcl.h>
#pragma hdrstop

#include "dupfile.h"
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
                        CheckListBox1->AddItem( t + ":" , NULL ) ;
                }
        }
        MD5 = new TMD5Digest ;
}
//---------------------------------------------------------------------------

__fastcall TForm1::~TForm1()
{
        //TODO: Add your source code here
        delete MD5 ;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
        // set the search path and run run run
        FolderList( "D:\\test" ) ;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FolderList(AnsiString root)
{
        //TODO: Add your source code here
        TSearchRec DirSr , FileSR ;

        int DirAttr = faDirectory ;//| //Directory files

        int FileAttr = faReadOnly |
                       faHidden   |
                       faSysFile  |
                       faArchive  ;

        if ( FindFirst ( root + "\\*" , DirAttr , DirSr ) == 0 )
        {
                do
                {
                        if ( DirSr.Name == "." ||  DirSr.Name == ".." )
                                continue ;

                        FolderList( root + "\\" + DirSr.Name ) ;
                        if ( FindFirst ( root + "\\" + DirSr.Name + "\\*" , FileAttr , FileSR) == 0 )
                        {
                                do
                                {
                                        ProcessFile ( root + "\\" + DirSr.Name + "\\" , FileSR ) ;

                                } while ( FindNext ( FileSR ) == 0 ) ;
                                FindClose ( FileSR ) ;
                        }
                } while ( FindNext ( DirSr ) == 0 ) ;
                FindClose ( DirSr ) ;
        }
}



void __fastcall TForm1::ProcessFile(AnsiString Path, TSearchRec sr)
{
        //TODO: Add your source code here
        FPath = Path ;
        FFileName = sr.Name ;
        FExt  = ExtractFileExt ( sr.Name ) ;
        MD5->File = FPath + FFileName ;
        FMD5 = MD5->MD5Digest ;
        MD5->String = FPath + FFileName + FMD5 ;
        FMD5Data = MD5->String ;

        FolderList1->Lines->Add ( FPath + FFileName + " " + FMD5 + " " + FMD5Data ) ;


        sr.FindData.dwFileAttributes ;
        sr.FindData.ftCreationTime ;
        sr.FindData.ftLastAccessTime ;
        sr.FindData.ftLastWriteTime ;
        sr.FindData.nFileSizeHigh ;
        sr.FindData.nFileSizeLow ;
}
