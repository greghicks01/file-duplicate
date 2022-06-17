//---------------------------------------------------------------------------

#ifndef FiledupfrmH
#define FiledupfrmH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <CheckLst.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <DB.hpp>
#include <DBGrids.hpp>
#include <DBTables.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TCheckBox *MyDocs;
        TCheckBox *AllUsers;
        TCheckBox *ProgFiles;
        TCheckListBox *DriveList;
        TTreeView *TreeView1;
        TCheckBox *CheckBox1;
        TCheckBox *CheckBox2;
        TPageControl *PageControl1;
        TTabSheet *TabSheet1;
        TTabSheet *TabSheet2;
        TPanel *Panel1;
        TPanel *Panel2;
        TStatusBar *StatusBar1;
        TTabSheet *TabSheet3;
        TDBGrid *DBGrid1;
        TDataSource *DataSource1;
        TTable *Table1;
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
