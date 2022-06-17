object Form1: TForm1
  Left = 660
  Top = 380
  Width = 496
  Height = 490
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 488
    Height = 137
    Align = alTop
    TabOrder = 0
    object AllUsers: TCheckBox
      Left = 16
      Top = 32
      Width = 97
      Height = 17
      Caption = 'All Users'
      TabOrder = 0
    end
    object ProgFiles: TCheckBox
      Left = 16
      Top = 56
      Width = 97
      Height = 17
      Caption = 'Program Files'
      TabOrder = 1
    end
    object MyDocs: TCheckBox
      Left = 16
      Top = 8
      Width = 97
      Height = 17
      Caption = 'My Documents'
      TabOrder = 2
    end
    object CheckBox2: TCheckBox
      Left = 16
      Top = 104
      Width = 97
      Height = 17
      Caption = 'System'
      TabOrder = 3
    end
    object CheckBox1: TCheckBox
      Left = 16
      Top = 80
      Width = 97
      Height = 17
      Caption = 'Windows'
      TabOrder = 4
    end
  end
  object Panel2: TPanel
    Left = 0
    Top = 137
    Width = 488
    Height = 307
    Align = alClient
    TabOrder = 1
    object PageControl1: TPageControl
      Left = 1
      Top = 1
      Width = 486
      Height = 305
      ActivePage = TabSheet1
      Align = alClient
      TabIndex = 0
      TabOrder = 0
      object TabSheet1: TTabSheet
        Caption = 'TabSheet1'
        object DriveList: TCheckListBox
          Left = 0
          Top = 0
          Width = 478
          Height = 277
          Align = alClient
          ItemHeight = 13
          TabOrder = 0
        end
      end
      object TabSheet2: TTabSheet
        Caption = 'TabSheet2'
        ImageIndex = 1
        object TreeView1: TTreeView
          Left = 0
          Top = 0
          Width = 478
          Height = 277
          Align = alClient
          HotTrack = True
          Indent = 19
          MultiSelect = True
          TabOrder = 0
          Items.Data = {
            020000001B0000000000000000000000FFFFFFFFFFFFFFFF0000000001000000
            02433A260000000000000000000000FFFFFFFFFFFFFFFF00000000000000000D
            50726F6772616D2046696C65731B0000000000000000000000FFFFFFFFFFFFFF
            FF000000000100000002443A240000000000000000000000FFFFFFFFFFFFFFFF
            00000000000000000B434420436F6E74656E7473}
        end
      end
      object TabSheet3: TTabSheet
        Caption = 'TabSheet3'
        ImageIndex = 2
        object DBGrid1: TDBGrid
          Left = 0
          Top = 0
          Width = 478
          Height = 277
          Align = alClient
          DataSource = DataSource1
          TabOrder = 0
          TitleFont.Charset = DEFAULT_CHARSET
          TitleFont.Color = clWindowText
          TitleFont.Height = -11
          TitleFont.Name = 'MS Sans Serif'
          TitleFont.Style = []
        end
      end
    end
  end
  object StatusBar1: TStatusBar
    Left = 0
    Top = 444
    Width = 488
    Height = 19
    Panels = <>
    SimplePanel = False
  end
  object DataSource1: TDataSource
    DataSet = Table1
    Left = 272
    Top = 72
  end
  object Table1: TTable
    DatabaseName = 'Calibration Data'
    Left = 232
    Top = 72
  end
end
