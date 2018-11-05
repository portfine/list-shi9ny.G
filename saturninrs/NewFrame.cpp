#include "NewFrame.h"

//(*InternalHeaders(NewFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(NewFrame)
const long NewFrame::ID_SPINBUTTON1 = wxNewId();
const long NewFrame::ID_GAUGE1 = wxNewId();
const long NewFrame::ID_RADIOBOX1 = wxNewId();
const long NewFrame::ID_STATICLINE1 = wxNewId();
const long NewFrame::ID_TIMER1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(NewFrame,wxFrame)
	//(*EventTable(NewFrame)
	//*)
END_EVENT_TABLE()

NewFrame::NewFrame(wxWindow* parent,wxWindowID id)
{
	//(*Initialize(NewFrame)
	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	SetClientSize(wxSize(1040,500));
	SpinButton1 = new wxSpinButton(this, ID_SPINBUTTON1, wxPoint(120,96), wxSize(168,232), wxSP_VERTICAL|wxSP_ARROW_KEYS, _T("ID_SPINBUTTON1"));
	SpinButton1->SetRange(0, 100);
	Gauge1 = new wxGauge(this, ID_GAUGE1, 100, wxPoint(24,40), wxDefaultSize, 0, wxDefaultValidator, _T("ID_GAUGE1"));
	RadioBox1 = new wxRadioBox(this, ID_RADIOBOX1, _("Label"), wxPoint(328,56), wxDefaultSize, 0, 0, 1, 0, wxDefaultValidator, _T("ID_RADIOBOX1"));
	StaticLine1 = new wxStaticLine(this, ID_STATICLINE1, wxPoint(272,200), wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE1"));
	00:00/;
	Timer1.SetOwner(this, ID_TIMER1);
	//*)
}

NewFrame::~NewFrame()
{
	//(*Destroy(NewFrame)
	//*)
}

