// ---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
// ---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <ComCtrls.hpp>
#include <Dialogs.hpp>
#include <Graphics.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.ExtDlgs.hpp>

// ---------------------------------------------------------------------------
class TForm1 : public TForm {
__published: // IDE-managed Components
	TStatusBar *StatusBar1;
	TColorDialog *ColorDialog1;
	TPanel *Panel1;
	TImage *Image1;
	TPanel *Panel2;
	TButton *BColor;
	TButton *BCancel;
	TButton *BClose;
	TImage *Image2;
	TOpenPictureDialog *OpenPictureDialog1;
	TButton *BPic;

	void __fastcall BCloseClick(TObject *Sender);
	void __fastcall BColorClick(TObject *Sender);
	void __fastcall Image1MouseMove(TObject *Sender, TShiftState Shift,
		int X, int Y);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall BCancelClick(TObject *Sender);
	void __fastcall Image1MouseDown(TObject *Sender, TMouseButton Button,
		TShiftState Shift, int X, int Y);
	void __fastcall BPicClick(TObject *Sender);

private: // User declarations
public: // User declarations
	__fastcall TForm1(TComponent* Owner);
};

// ---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
// ---------------------------------------------------------------------------
#endif
