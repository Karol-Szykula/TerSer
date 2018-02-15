#ifndef TERSERUI_H
#define TERSERUI_H

//(*Headers(TerSerUI)
#include "connectionStatusPanel.h"
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/notebook.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/statusbr.h>
#include <wx/textctrl.h>
#include <wx/toolbar.h>
#include <wx/treectrl.h>
//*)

class TerSerUI: public wxFrame
{
	public:

		TerSerUI(wxWindow* parent);
		virtual ~TerSerUI();

		//(*Declarations(TerSerUI)
		ConnectionStatusPanel* connectionStatusPanel;
		CustomClass* Custom2;
		CustomClass* Custom3;
		wxBoxSizer* BoxSizer14;
		wxButton* Button1;
		wxButton* Button2;
		wxMenuBar* MenuBar1;
		wxNotebook* Notebook1;
		wxPanel* Panel1;
		wxPanel* Panel2;
		wxPanel* Panel3;
		wxPanel* Panel4;
		wxStatusBar* StatusBar1;
		wxTextCtrl* TextCtrl1;
		wxToolBar* ToolBar1;
		wxTreeCtrl* TreeCtrl1;
		wxTreeCtrl* TreeCtrl2;
		//*)

	protected:

		//(*Identifiers(TerSerUI)
		static const long ID_CUSTOM1;
		static const long ID_CUSTOM2;
		static const long ID_CUSTOM3;
		static const long ID_TEXTCTRL1;
		static const long ID_BUTTON2;
		static const long ID_BUTTON1;
		static const long ID_TREECTRL1;
		static const long ID_PANEL3;
		static const long ID_TREECTRL2;
		static const long ID_PANEL4;
		static const long ID_NOTEBOOK1;
		static const long ID_PANEL2;
		static const long ID_PANEL1;
		static const long ID_TOOLBAR1;
		static const long ID_STATUSBAR1;
		//*)

	private:

		//(*Handlers(TerSerUI)
		void OnNotebook1PageChanged(wxNotebookEvent& event);
		void OnTreeCtrl1BeginDrag(wxTreeEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
