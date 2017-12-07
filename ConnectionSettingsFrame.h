#ifndef CONNECTIONSETTINGSFRAME_H
#define CONNECTIONSETTINGSFRAME_H

//(*Headers(ConnectionSettingsFrame)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/treebook.h>
#include <wx/panel.h>
#include <wx/choice.h>
#include <wx/button.h>
#include <wx/frame.h>
//*)

#include "serialoptions.h"

class terFrame;

class ConnectionSettingsFrame: public wxFrame
{
	public:

		ConnectionSettingsFrame(wxWindow* parent,wxWindowID id=wxID_ANY);
		virtual ~ConnectionSettingsFrame();

		void setRelative(terFrame * parent);
		void setSerialOptions(SerialOptions newSerialOptions);



		//(*Declarations(ConnectionSettingsFrame)
		wxChoice* ConnectionSettingsStopBitsWidget;
		wxChoice* ConnectionSettingsParityWidget;
		wxStaticText* StaticText2;
		wxPanel* Panel4;
		wxChoice* ConnectionSettingsBaudRateWidget;
		wxButton* Button1;
		wxStaticText* StaticText6;
		wxTextCtrl* ConnectionSettingsPortNameWidget;
		wxPanel* Panel1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText3;
		wxPanel* Panel3;
		wxButton* Button3;
		wxStaticText* StaticText5;
		wxTreebook* Treebook1;
		wxChoice* ConnectionSettingsDataBitsWidget;
		wxPanel* Panel2;
		wxStaticText* StaticText4;
		wxChoice* ConnectionSettingsFlowControlWidget;
		//*)

	protected:

		//(*Identifiers(ConnectionSettingsFrame)
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT2;
		static const long ID_CHOICE2;
		static const long ID_STATICTEXT4;
		static const long ID_CHOICE4;
		static const long ID_STATICTEXT3;
		static const long ID_CHOICE3;
		static const long ID_STATICTEXT5;
		static const long ID_CHOICE5;
		static const long ID_STATICTEXT6;
		static const long ID_CHOICE6;
		static const long ID_PANEL2;
		static const long ID_PANEL3;
		static const long ID_TREEBOOK1;
		static const long ID_BUTTON1;
		static const long ID_BUTTON3;
		static const long ID_PANEL1;
		static const long ID_PANEL4;
		//*)

	private:

		//(*Handlers(ConnectionSettingsFrame)
		void OnConnectionSettingsOkButtonClick(wxCommandEvent& event);
		void OnConnectionSettingsCancelButtonClick(wxCommandEvent& event);
		void OnTreebook1PageChanged(wxNotebookEvent& event);
		//*)

		SerialOptions getSerialOptions();

		void updateValuesOnWindow();
		void saveValuesFromWindow();

		void updatePortNameOnWidget();
		void updateBaudRateOnWidget();
		void updateDataBitsOnWidget();
		void updateParityOnWidget();
        void updateStopBitsOnWidget();
        void updateFlowControlOnWidget();

        void savePortNameFromWidget();
        void saveBaudRateFromWidget();
		void saveDataBitsFromWidget();
		void saveParityFromWidget();
        void saveStopBitsFromWidget();
        void saveFlowControlFromWidget();

		terFrame * parentFrame;
		SerialOptions serialOptions;

		DECLARE_EVENT_TABLE()
};

#endif
