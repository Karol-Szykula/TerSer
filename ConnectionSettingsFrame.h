#ifndef CONNECTIONSETTINGSFRAME_H
#define CONNECTIONSETTINGSFRAME_H

//(*Headers(ConnectionSettingsFrame)
#include <wx/button.h>
#include <wx/checkbox.h>
#include <wx/choice.h>
#include <wx/frame.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/treebook.h>
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
		wxButton* Button1;
		wxButton* Button3;
		wxCheckBox* CheckBox1;
		wxCheckBox* CheckBox2;
		wxChoice* ConnectionSettingsBaudRateWidget;
		wxChoice* ConnectionSettingsDataBitsWidget;
		wxChoice* ConnectionSettingsFlowControlWidget;
		wxChoice* ConnectionSettingsParityWidget;
		wxChoice* ConnectionSettingsStopBitsWidget;
		wxPanel* Panel1;
		wxPanel* Panel2;
		wxPanel* Panel3;
		wxPanel* Panel4;
		wxPanel* Panel5;
		wxStaticText* StaticText10;
		wxStaticText* StaticText11;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		wxStaticText* StaticText5;
		wxStaticText* StaticText6;
		wxStaticText* StaticText7;
		wxStaticText* StaticText8;
		wxStaticText* StaticText9;
		wxTextCtrl* ConnectionSettingsPortNameWidget;
		wxTextCtrl* TextCtrl1;
		wxTextCtrl* TextCtrl2;
		wxTextCtrl* TextCtrl3;
		wxTextCtrl* TextCtrl4;
		wxTextCtrl* TextCtrl5;
		wxTreebook* Treebook1;
		//*)

	protected:

		//(*Identifiers(ConnectionSettingsFrame)
		static const long ID_CHECKBOX1;
		static const long ID_CHECKBOX2;
		static const long ID_PANEL5;
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
		static const long ID_STATICTEXT7;
		static const long ID_TEXTCTRL2;
		static const long ID_STATICTEXT8;
		static const long ID_TEXTCTRL3;
		static const long ID_STATICTEXT9;
		static const long ID_TEXTCTRL4;
		static const long ID_STATICTEXT10;
		static const long ID_TEXTCTRL5;
		static const long ID_STATICTEXT11;
		static const long ID_TEXTCTRL6;
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
