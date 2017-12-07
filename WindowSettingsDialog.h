#ifndef WINDOWSETTINGSDIALOG_H
#define WINDOWSETTINGSDIALOG_H

//(*Headers(WindowSettingsDialog)
#include <wx/sizer.h>
#include <wx/checkbox.h>
#include <wx/panel.h>
#include <wx/button.h>
#include <wx/dialog.h>
//*)

class WindowSettingsDialog: public wxDialog
{
	public:

		WindowSettingsDialog(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~WindowSettingsDialog();

		//(*Declarations(WindowSettingsDialog)
		wxButton* Button1;
		wxPanel* Panel1;
		wxButton* Button2;
		wxCheckBox* CheckBox1;
		//*)

	protected:

		//(*Identifiers(WindowSettingsDialog)
		static const long ID_CHECKBOX1;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_PANEL1;
		//*)

	private:

		//(*Handlers(WindowSettingsDialog)
		void OnWindowSettingsOkButtonClicked(wxCommandEvent& event);
		void OnWindowSettingsCancelButtonClicked(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
