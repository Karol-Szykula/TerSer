#ifndef TERSERUI_H
#define TERSERUI_H

//(*Headers(TerSerUI)
#include <wx/frame.h>
#include <wx/panel.h>
#include <wx/sizer.h>
//*)

#include "connectionStatusPanel.h"

class TerSerUI: public wxFrame
{
	public:

		TerSerUI(wxWindow* parent, wxWindowID  id);
		virtual ~TerSerUI();

	private:

		//(*Declarations(TerSerUI)
		ConnectionStatusPanel* Panel2;
		wxFlexGridSizer* FlexGridSizer1;
		wxPanel* Panel1;
		wxPanel* Panel3;
		wxPanel* Panel4;
		wxPanel* Panel5;
		wxPanel* Panel6;
		wxPanel* Panel7;
		//*)

		//(*Identifiers(TerSerUI)
		static const long ID_PANEL2;
		static const long ID_PANEL3;
		static const long ID_PANEL4;
		static const long ID_PANEL5;
		static const long ID_PANEL6;
		static const long ID_PANEL7;
		static const long ID_PANEL1;
		//*)

		//(*Handlers(TerSerUI)
		void OnPanel6Paint(wxPaintEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
