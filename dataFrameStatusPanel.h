#ifndef DATAFRAMESTATUSPANEL_H
#define DATAFRAMESTATUSPANEL_H

//(*Headers(DataFrameStatusPanel)
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
//*)

class DataFrameStatusPanel: public wxPanel
{
	public:

		DataFrameStatusPanel(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size,long style, const wxString& name);
		virtual ~DataFrameStatusPanel();

	private:

		//(*Declarations(DataFrameStatusPanel)
		wxPanel* Panel1;
		wxStaticText* StaticText1;
		//*)

		//(*Identifiers(DataFrameStatusPanel)
		static const long ID_STATICTEXT1;
		static const long ID_PANEL1;
		//*)

		//(*Handlers(DataFrameStatusPanel)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
