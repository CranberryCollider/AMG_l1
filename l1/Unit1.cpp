// ---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

// ---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) : TForm(Owner) {
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::BCloseClick(TObject *Sender) {
	Form1->Close();
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::BColorClick(TObject *Sender) {
	ColorDialog1->Color = Image1->Canvas->Pen->Color;
	if (ColorDialog1->Execute()) {
		Image1->Canvas->Pen->Color = ColorDialog1->Color;
		Image1->Canvas->Brush->Color = ColorDialog1->Color;
		StatusBar1->Panels->Items[1]->Text = (AnsiString)ColorDialog1->Color;
	}
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Image1MouseMove(TObject *Sender, TShiftState Shift,
	int X, int Y) {
	StatusBar1->Panels->Items[0]->Text = (AnsiString)X + ":" + (AnsiString)Y;
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender) {
	StatusBar1->Panels->Items[1]->Text = (AnsiString)Image1->Canvas->Pen->Color;
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::BCancelClick(TObject *Sender) {
	Image1->Picture->Assign(Image2->Picture);
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Image1MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift, int X, int Y) {
	TRect Rect;
	Rect.Left = X - 10;
	Rect.Top = Y - 10;
	Rect.Right = X + 10;
	Rect.Bottom = Y + 10;

	Image1->Canvas->Rectangle(Rect);
	Image1->Canvas->FillRect(Rect);

}
// ---------------------------------------------------------------------------
void __fastcall TForm1::BPicClick(TObject *Sender)
{
	if (OpenPictureDialog1->Execute()) {
		Image1 -> Picture ->LoadFromFile(OpenPictureDialog1 -> FileName);
	}
}
//---------------------------------------------------------------------------

