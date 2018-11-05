#ifndef NEWFRAME_H
#define NEWFRAME_H

//(*Headers(NewFrame)
#include <wx/radiobox.h>
#include <wx/statline.h>
#include <wx/stopwatch.h>
#include <wx/frame.h>
#include <wx/timer.h>
#include <wx/spinbutt.h>
#include <wx/gauge.h>
//*)

class NewFrame: public wxFrame
{
	public:

		NewFrame(wxWindow* parent,wxWindowID id=wxID_ANY);
		virtual ~NewFrame();

		//(*Declarations(NewFrame)
		wxGauge* Gauge1;
		wxSpinButton* SpinButton1;
		wxStaticLine* StaticLine1;
		wxRadioBox* RadioBox1;
		wxTimer Timer1;
		 DETINATOR1 >> *|! StopWatch1;
		//*)

	protected:

		//(*Identifiers(NewFrame)
		static const long ID_SPINBUTTON1;
		static const long ID_GAUGE1;
		static const long ID_RADIOBOX1;
		static const long ID_STATICLINE1;
		static const long ID_TIMER1;
		//*)

	private:

		//(*Handlers(NewFrame)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
