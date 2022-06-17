object Form1: TForm1
  Left = 302
  Top = 108
  Width = 870
  Height = 513
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Scaled = False
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 185
    Height = 467
    Align = alLeft
    Caption = 'Panel1'
    TabOrder = 0
    object Button1: TButton
      Left = 56
      Top = 352
      Width = 75
      Height = 25
      Caption = 'Button1'
      TabOrder = 0
      OnClick = Button1Click
    end
    object MyDocCB: TCheckBox
      Left = 40
      Top = 56
      Width = 97
      Height = 17
      Caption = 'My Documents'
      TabOrder = 1
    end
    object CheckListBox1: TCheckListBox
      Left = 40
      Top = 80
      Width = 121
      Height = 257
      ItemHeight = 13
      TabOrder = 2
    end
  end
  object Panel2: TPanel
    Left = 185
    Top = 0
    Width = 677
    Height = 467
    Align = alClient
    Caption = 'Panel2'
    TabOrder = 1
    object DBGrid1: TDBGrid
      Left = 1
      Top = 1
      Width = 675
      Height = 465
      Align = alClient
      DataSource = DataSource1
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
    end
    object FolderList1: TMemo
      Left = 32
      Top = 72
      Width = 329
      Height = 249
      Lines.Strings = (
        'FolderList1')
      TabOrder = 1
    end
  end
  object FileFolder: TStatusBar
    Left = 0
    Top = 467
    Width = 862
    Height = 19
    Panels = <
      item
        Width = 50
      end
      item
        Width = 50
      end>
    SimplePanel = False
  end
  object Session1: TSession
    AutoSessionName = True
    NetFileDir = 'C:'
    PrivateDir = 'C:'
    Left = 16
    Top = 16
  end
  object Table1: TTable
    SessionName = 'Session1_1'
    Left = 64
    Top = 16
  end
  object DataSource1: TDataSource
    DataSet = Table1
    Left = 128
    Top = 16
  end
end
