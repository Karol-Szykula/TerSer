#include "ConnectionSettingsFrame.h"
#include "terMain.h"

//(*InternalHeaders(ConnectionSettingsFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(ConnectionSettingsFrame)
const long ConnectionSettingsFrame::ID_CHECKBOX1 = wxNewId();
const long ConnectionSettingsFrame::ID_CHECKBOX2 = wxNewId();
const long ConnectionSettingsFrame::ID_PANEL5 = wxNewId();
const long ConnectionSettingsFrame::ID_STATICTEXT1 = wxNewId();
const long ConnectionSettingsFrame::ID_TEXTCTRL1 = wxNewId();
const long ConnectionSettingsFrame::ID_STATICTEXT2 = wxNewId();
const long ConnectionSettingsFrame::ID_CHOICE2 = wxNewId();
const long ConnectionSettingsFrame::ID_STATICTEXT4 = wxNewId();
const long ConnectionSettingsFrame::ID_CHOICE4 = wxNewId();
const long ConnectionSettingsFrame::ID_STATICTEXT3 = wxNewId();
const long ConnectionSettingsFrame::ID_CHOICE3 = wxNewId();
const long ConnectionSettingsFrame::ID_STATICTEXT5 = wxNewId();
const long ConnectionSettingsFrame::ID_CHOICE5 = wxNewId();
const long ConnectionSettingsFrame::ID_STATICTEXT6 = wxNewId();
const long ConnectionSettingsFrame::ID_CHOICE6 = wxNewId();
const long ConnectionSettingsFrame::ID_PANEL2 = wxNewId();
const long ConnectionSettingsFrame::ID_STATICTEXT7 = wxNewId();
const long ConnectionSettingsFrame::ID_TEXTCTRL2 = wxNewId();
const long ConnectionSettingsFrame::ID_STATICTEXT8 = wxNewId();
const long ConnectionSettingsFrame::ID_TEXTCTRL3 = wxNewId();
const long ConnectionSettingsFrame::ID_STATICTEXT9 = wxNewId();
const long ConnectionSettingsFrame::ID_TEXTCTRL4 = wxNewId();
const long ConnectionSettingsFrame::ID_STATICTEXT10 = wxNewId();
const long ConnectionSettingsFrame::ID_STATICTEXT11 = wxNewId();
const long ConnectionSettingsFrame::ID_PANEL3 = wxNewId();
const long ConnectionSettingsFrame::ID_STATICTEXT12 = wxNewId();
const long ConnectionSettingsFrame::ID_TEXTCTRL5 = wxNewId();
const long ConnectionSettingsFrame::ID_STATICTEXT14 = wxNewId();
const long ConnectionSettingsFrame::ID_TEXTCTRL7 = wxNewId();
const long ConnectionSettingsFrame::ID_STATICTEXT13 = wxNewId();
const long ConnectionSettingsFrame::ID_TEXTCTRL6 = wxNewId();
const long ConnectionSettingsFrame::ID_PANEL7 = wxNewId();
const long ConnectionSettingsFrame::ID_PANEL6 = wxNewId();
const long ConnectionSettingsFrame::ID_TREEBOOK1 = wxNewId();
const long ConnectionSettingsFrame::ID_BUTTON1 = wxNewId();
const long ConnectionSettingsFrame::ID_BUTTON3 = wxNewId();
const long ConnectionSettingsFrame::ID_PANEL1 = wxNewId();
const long ConnectionSettingsFrame::ID_PANEL4 = wxNewId();
//*)

BEGIN_EVENT_TABLE(ConnectionSettingsFrame,wxFrame)
	//(*EventTable(ConnectionSettingsFrame)
	//*)
END_EVENT_TABLE()

ConnectionSettingsFrame::ConnectionSettingsFrame(wxWindow* parent,wxWindowID id)
{
	//(*Initialize(ConnectionSettingsFrame)
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer3;
	wxBoxSizer* BoxSizer4;
	wxBoxSizer* BoxSizer5;
	wxBoxSizer* BoxSizer6;
	wxBoxSizer* BoxSizer7;
	wxBoxSizer* BoxSizer8;
	wxBoxSizer* BoxSizer9;
	wxFlexGridSizer* FlexGridSizer1;
	wxFlexGridSizer* FlexGridSizer2;
	wxFlexGridSizer* FlexGridSizer3;
	wxFlexGridSizer* FlexGridSizer5;
	wxStaticBoxSizer* StaticBoxSizer1;
	wxStaticBoxSizer* StaticBoxSizer2;
	wxStaticBoxSizer* StaticBoxSizer3;
	wxStaticBoxSizer* StaticBoxSizer4;
	wxStaticBoxSizer* StaticBoxSizer5;

	Create(parent, wxID_ANY, _("Settings"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE|wxFRAME_SHAPED, _T("wxID_ANY"));
	SetMaxSize(wxSize(-1,-1));
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	Panel4 = new wxPanel(this, ID_PANEL4, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL4"));
	BoxSizer4 = new wxBoxSizer(wxVERTICAL);
	Treebook1 = new wxTreebook(Panel4, ID_TREEBOOK1, wxDefaultPosition, wxDefaultSize, wxBK_DEFAULT, _T("ID_TREEBOOK1"));
	Panel5 = new wxPanel(Treebook1, ID_PANEL5, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL5"));
	FlexGridSizer5 = new wxFlexGridSizer(0, 1, 0, 0);
	FlexGridSizer5->AddGrowableCol(0);
	StaticBoxSizer2 = new wxStaticBoxSizer(wxVERTICAL, Panel5, _("Terminal"));
	CheckBox1 = new wxCheckBox(Panel5, ID_CHECKBOX1, _("Auto scroll"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX1"));
	CheckBox1->SetValue(false);
	StaticBoxSizer2->Add(CheckBox1, 1, wxALL|wxEXPAND, 5);
	CheckBox2 = new wxCheckBox(Panel5, ID_CHECKBOX2, _("Add new line character"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX2"));
	CheckBox2->SetValue(false);
	StaticBoxSizer2->Add(CheckBox2, 1, wxALL|wxEXPAND, 5);
	FlexGridSizer5->Add(StaticBoxSizer2, 1, wxALL|wxEXPAND, 5);
	Panel5->SetSizer(FlexGridSizer5);
	FlexGridSizer5->Fit(Panel5);
	FlexGridSizer5->SetSizeHints(Panel5);
	Panel2 = new wxPanel(Treebook1, ID_PANEL2, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL2"));
	FlexGridSizer2 = new wxFlexGridSizer(0, 2, 0, 0);
	FlexGridSizer2->AddGrowableCol(1);
	StaticText1 = new wxStaticText(Panel2, ID_STATICTEXT1, _("Port name:"), wxDefaultPosition, wxDefaultSize, wxALIGN_LEFT, _T("ID_STATICTEXT1"));
	FlexGridSizer2->Add(StaticText1, 0, wxLEFT|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	ConnectionSettingsPortNameWidget = new wxTextCtrl(Panel2, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	FlexGridSizer2->Add(ConnectionSettingsPortNameWidget, 1, wxALL|wxEXPAND, 5);
	StaticText2 = new wxStaticText(Panel2, ID_STATICTEXT2, _("Baud rate [b/s]:"), wxDefaultPosition, wxDefaultSize, wxALIGN_LEFT, _T("ID_STATICTEXT2"));
	FlexGridSizer2->Add(StaticText2, 0, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	ConnectionSettingsBaudRateWidget = new wxChoice(Panel2, ID_CHOICE2, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE2"));
	ConnectionSettingsBaudRateWidget->Append(_("300"));
	ConnectionSettingsBaudRateWidget->Append(_("600"));
	ConnectionSettingsBaudRateWidget->Append(_("1200"));
	ConnectionSettingsBaudRateWidget->Append(_("2400"));
	ConnectionSettingsBaudRateWidget->Append(_("4800"));
	ConnectionSettingsBaudRateWidget->Append(_("9600"));
	ConnectionSettingsBaudRateWidget->Append(_("14400"));
	ConnectionSettingsBaudRateWidget->Append(_("19200"));
	ConnectionSettingsBaudRateWidget->Append(_("28800"));
	ConnectionSettingsBaudRateWidget->Append(_("38400"));
	ConnectionSettingsBaudRateWidget->Append(_("57600"));
	ConnectionSettingsBaudRateWidget->Append(_("76800"));
	ConnectionSettingsBaudRateWidget->SetSelection( ConnectionSettingsBaudRateWidget->Append(_("115200")) );
	ConnectionSettingsBaudRateWidget->Append(_("230400"));
	ConnectionSettingsBaudRateWidget->Append(_("250000"));
	ConnectionSettingsBaudRateWidget->Append(_("500000"));
	ConnectionSettingsBaudRateWidget->Append(_("1000000"));
	FlexGridSizer2->Add(ConnectionSettingsBaudRateWidget, 1, wxALL|wxEXPAND, 5);
	StaticText4 = new wxStaticText(Panel2, ID_STATICTEXT4, _("Data bits:"), wxDefaultPosition, wxDefaultSize, wxALIGN_LEFT, _T("ID_STATICTEXT4"));
	FlexGridSizer2->Add(StaticText4, 0, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	ConnectionSettingsDataBitsWidget = new wxChoice(Panel2, ID_CHOICE4, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE4"));
	ConnectionSettingsDataBitsWidget->Append(_("5"));
	ConnectionSettingsDataBitsWidget->Append(_("6"));
	ConnectionSettingsDataBitsWidget->Append(_("7"));
	ConnectionSettingsDataBitsWidget->SetSelection( ConnectionSettingsDataBitsWidget->Append(_("8")) );
	FlexGridSizer2->Add(ConnectionSettingsDataBitsWidget, 1, wxALL|wxEXPAND, 5);
	StaticText3 = new wxStaticText(Panel2, ID_STATICTEXT3, _("Parity:"), wxDefaultPosition, wxDefaultSize, wxALIGN_LEFT, _T("ID_STATICTEXT3"));
	FlexGridSizer2->Add(StaticText3, 0, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	ConnectionSettingsParityWidget = new wxChoice(Panel2, ID_CHOICE3, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE3"));
	ConnectionSettingsParityWidget->Append(_("NONE"));
	ConnectionSettingsParityWidget->SetSelection( ConnectionSettingsParityWidget->Append(_("ODD")) );
	ConnectionSettingsParityWidget->Append(_("EVEN"));
	FlexGridSizer2->Add(ConnectionSettingsParityWidget, 1, wxALL|wxEXPAND, 5);
	StaticText5 = new wxStaticText(Panel2, ID_STATICTEXT5, _("Stop bits:"), wxDefaultPosition, wxDefaultSize, wxALIGN_LEFT, _T("ID_STATICTEXT5"));
	FlexGridSizer2->Add(StaticText5, 0, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	ConnectionSettingsStopBitsWidget = new wxChoice(Panel2, ID_CHOICE5, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE5"));
	ConnectionSettingsStopBitsWidget->SetSelection( ConnectionSettingsStopBitsWidget->Append(_("1")) );
	ConnectionSettingsStopBitsWidget->Append(_("1.5"));
	ConnectionSettingsStopBitsWidget->Append(_("2"));
	FlexGridSizer2->Add(ConnectionSettingsStopBitsWidget, 1, wxALL|wxEXPAND, 5);
	StaticText6 = new wxStaticText(Panel2, ID_STATICTEXT6, _("Flow control:"), wxDefaultPosition, wxDefaultSize, wxALIGN_LEFT, _T("ID_STATICTEXT6"));
	FlexGridSizer2->Add(StaticText6, 0, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	ConnectionSettingsFlowControlWidget = new wxChoice(Panel2, ID_CHOICE6, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE6"));
	ConnectionSettingsFlowControlWidget->SetSelection( ConnectionSettingsFlowControlWidget->Append(_("NONE")) );
	ConnectionSettingsFlowControlWidget->Append(_("SOFTWARE"));
	ConnectionSettingsFlowControlWidget->Append(_("HARDWARE"));
	FlexGridSizer2->Add(ConnectionSettingsFlowControlWidget, 1, wxALL|wxEXPAND, 5);
	Panel2->SetSizer(FlexGridSizer2);
	FlexGridSizer2->Fit(Panel2);
	FlexGridSizer2->SetSizeHints(Panel2);
	Panel3 = new wxPanel(Treebook1, ID_PANEL3, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL3"));
	Panel3->Disable();
	FlexGridSizer1 = new wxFlexGridSizer(0, 1, 0, 0);
	FlexGridSizer1->AddGrowableCol(0);
	StaticBoxSizer3 = new wxStaticBoxSizer(wxVERTICAL, Panel3, _("Command template"));
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	StaticText7 = new wxStaticText(Panel3, ID_STATICTEXT7, _("Command separator"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	BoxSizer2->Add(StaticText7, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl1 = new wxTextCtrl(Panel3, ID_TEXTCTRL2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	BoxSizer2->Add(TextCtrl1, 1, wxALL|wxEXPAND, 5);
	StaticBoxSizer3->Add(BoxSizer2, 1, wxALL|wxEXPAND, 0);
	BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	StaticText8 = new wxStaticText(Panel3, ID_STATICTEXT8, _("Set variable token"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT8"));
	BoxSizer3->Add(StaticText8, 1, wxALL|wxEXPAND, 5);
	TextCtrl2 = new wxTextCtrl(Panel3, ID_TEXTCTRL3, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	BoxSizer3->Add(TextCtrl2, 1, wxALL|wxEXPAND, 5);
	StaticBoxSizer3->Add(BoxSizer3, 1, wxALL|wxEXPAND, 0);
	BoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	StaticText9 = new wxStaticText(Panel3, ID_STATICTEXT9, _("Query variable token"), wxDefaultPosition, wxSize(108,21), 0, _T("ID_STATICTEXT9"));
	BoxSizer5->Add(StaticText9, 1, wxALL|wxEXPAND, 5);
	TextCtrl3 = new wxTextCtrl(Panel3, ID_TEXTCTRL4, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	BoxSizer5->Add(TextCtrl3, 1, wxALL|wxEXPAND, 5);
	StaticBoxSizer3->Add(BoxSizer5, 1, wxALL|wxEXPAND, 0);
	StaticBoxSizer1 = new wxStaticBoxSizer(wxHORIZONTAL, Panel3, _("Set variable command:"));
	StaticText10 = new wxStaticText(Panel3, ID_STATICTEXT10, _("Command example"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT10"));
	StaticBoxSizer1->Add(StaticText10, 1, wxTOP|wxBOTTOM|wxEXPAND, 5);
	StaticBoxSizer3->Add(StaticBoxSizer1, 1, wxALL|wxEXPAND, 0);
	StaticBoxSizer4 = new wxStaticBoxSizer(wxHORIZONTAL, Panel3, _("Query variable command:"));
	StaticText11 = new wxStaticText(Panel3, ID_STATICTEXT11, _("Command example"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT11"));
	StaticBoxSizer4->Add(StaticText11, 1, wxTOP|wxBOTTOM|wxEXPAND, 5);
	StaticBoxSizer3->Add(StaticBoxSizer4, 1, wxALL|wxEXPAND, 0);
	FlexGridSizer1->Add(StaticBoxSizer3, 1, wxALL|wxEXPAND, 5);
	Panel3->SetSizer(FlexGridSizer1);
	FlexGridSizer1->Fit(Panel3);
	FlexGridSizer1->SetSizeHints(Panel3);
	Panel6 = new wxPanel(Treebook1, ID_PANEL6, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL6"));
	BoxSizer6 = new wxBoxSizer(wxHORIZONTAL);
	Panel7 = new wxPanel(Panel6, ID_PANEL7, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL7"));
	StaticBoxSizer5 = new wxStaticBoxSizer(wxVERTICAL, Panel7, _("Time intervals"));
	BoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
	StaticText12 = new wxStaticText(Panel7, ID_STATICTEXT12, _("Event repeat [ms]:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT12"));
	BoxSizer7->Add(StaticText12, 1, wxALL, 5);
	TextCtrl4 = new wxTextCtrl(Panel7, ID_TEXTCTRL5, _("10"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	BoxSizer7->Add(TextCtrl4, 0, wxALL, 5);
	StaticBoxSizer5->Add(BoxSizer7, 1, wxALL|wxEXPAND, 0);
	BoxSizer9 = new wxBoxSizer(wxHORIZONTAL);
	StaticText14 = new wxStaticText(Panel7, ID_STATICTEXT14, _("Command interval [ms]:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT14"));
	BoxSizer9->Add(StaticText14, 1, wxALL|wxEXPAND, 5);
	TextCtrl6 = new wxTextCtrl(Panel7, ID_TEXTCTRL7, _("0,5"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL7"));
	BoxSizer9->Add(TextCtrl6, 0, wxALL, 5);
	StaticBoxSizer5->Add(BoxSizer9, 1, wxALL|wxEXPAND, 0);
	BoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
	StaticText13 = new wxStaticText(Panel7, ID_STATICTEXT13, _("Query response time [ms]:"), wxDefaultPosition, wxSize(134,17), 0, _T("ID_STATICTEXT13"));
	BoxSizer8->Add(StaticText13, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl5 = new wxTextCtrl(Panel7, ID_TEXTCTRL6, _("5"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
	BoxSizer8->Add(TextCtrl5, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer5->Add(BoxSizer8, 1, wxALL|wxEXPAND, 0);
	Panel7->SetSizer(StaticBoxSizer5);
	StaticBoxSizer5->Fit(Panel7);
	StaticBoxSizer5->SetSizeHints(Panel7);
	BoxSizer6->Add(Panel7, 1, wxALL, 0);
	Panel6->SetSizer(BoxSizer6);
	BoxSizer6->Fit(Panel6);
	BoxSizer6->SetSizeHints(Panel6);
	Treebook1->AddPage(Panel5, _("Terminal"), false);
	Treebook1->AddPage(Panel2, _("Connection"), false);
	Treebook1->AddPage(Panel3, _("Data frame"), false);
	Treebook1->AddPage(Panel6, _("Server"), false);
	BoxSizer4->Add(Treebook1, 20, wxALL|wxEXPAND, 2);
	Panel1 = new wxPanel(Panel4, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	FlexGridSizer3 = new wxFlexGridSizer(0, 2, 0, 0);
	FlexGridSizer3->AddGrowableCol(0);
	Button1 = new wxButton(Panel1, ID_BUTTON1, _("OK"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	FlexGridSizer3->Add(Button1, 0, wxTOP|wxBOTTOM|wxALIGN_RIGHT|wxALIGN_TOP, 5);
	Button3 = new wxButton(Panel1, ID_BUTTON3, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	FlexGridSizer3->Add(Button3, 0, wxALL|wxALIGN_TOP|wxALIGN_CENTER_HORIZONTAL, 5);
	Panel1->SetSizer(FlexGridSizer3);
	FlexGridSizer3->Fit(Panel1);
	FlexGridSizer3->SetSizeHints(Panel1);
	BoxSizer4->Add(Panel1, 0, wxALL|wxEXPAND, 5);
	Panel4->SetSizer(BoxSizer4);
	BoxSizer4->Fit(Panel4);
	BoxSizer4->SetSizeHints(Panel4);
	BoxSizer1->Add(Panel4, 1, wxALL|wxEXPAND, 0);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	Center();

	Connect(ID_TREEBOOK1,wxEVT_COMMAND_TREEBOOK_PAGE_CHANGED,(wxObjectEventFunction)&ConnectionSettingsFrame::OnTreebook1PageChanged);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ConnectionSettingsFrame::OnConnectionSettingsOkButtonClick);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ConnectionSettingsFrame::OnConnectionSettingsCancelButtonClick);
	//*)

	SetMinSize(GetSize());
	//SetMaxSize(GetSize());

	//parentFrame = parent;
}

ConnectionSettingsFrame::~ConnectionSettingsFrame()
{
	//(*Destroy(ConnectionSettingsFrame)
	//*)
}


void ConnectionSettingsFrame::OnConnectionSettingsOkButtonClick(wxCommandEvent& event)
{
	saveValuesFromWindow();
    parentFrame->setSerialOptions(serialOptions);
	this->Close(true);
}

void ConnectionSettingsFrame::OnConnectionSettingsCancelButtonClick(wxCommandEvent& event)
{

	this->Close(true);
}

void ConnectionSettingsFrame::setRelative(terFrame * parent)
{
	if(parent != NULL);
		parentFrame = parent;
}

void ConnectionSettingsFrame::setSerialOptions(SerialOptions newSerialOptions)
{
	serialOptions = newSerialOptions;
	updateValuesOnWindow();
}

SerialOptions ConnectionSettingsFrame::getSerialOptions()
{
	saveValuesFromWindow();
    return serialOptions;
}




void ConnectionSettingsFrame::updateValuesOnWindow()
{
	updatePortNameOnWidget();
	updateBaudRateOnWidget();
	updateDataBitsOnWidget();
	updateParityOnWidget();
	updateStopBitsOnWidget();
    updateFlowControlOnWidget();
}
void ConnectionSettingsFrame::saveValuesFromWindow()
{
	savePortNameFromWidget();
	saveBaudRateFromWidget();
	saveDataBitsFromWidget();
	saveParityFromWidget();
	saveStopBitsFromWidget();
	saveFlowControlFromWidget();
}





void ConnectionSettingsFrame::updatePortNameOnWidget()
{
	ConnectionSettingsPortNameWidget->Clear();
	ConnectionSettingsPortNameWidget->AppendText(serialOptions.getPortName());
}

/// @TODO write choosing of option with some sort of enum class
void ConnectionSettingsFrame::updateBaudRateOnWidget()
{
	switch(serialOptions.getBaudRate())
	{
	case 300:
		ConnectionSettingsBaudRateWidget->SetSelection(0);
		break;
	case 600:
		ConnectionSettingsBaudRateWidget->SetSelection(1);
		break;
	case 1200:
		ConnectionSettingsBaudRateWidget->SetSelection(2);
		break;
	case 2400:
		ConnectionSettingsBaudRateWidget->SetSelection(3);
		break;
	case 4800:
		ConnectionSettingsBaudRateWidget->SetSelection(4);
		break;
	case 9600:
		ConnectionSettingsBaudRateWidget->SetSelection(5);
		break;
	case 14400:
		ConnectionSettingsBaudRateWidget->SetSelection(6);
		break;
	case 19200:
		ConnectionSettingsBaudRateWidget->SetSelection(7);
		break;
	case 28800:
		ConnectionSettingsBaudRateWidget->SetSelection(8);
		break;
	case 38400:
		ConnectionSettingsBaudRateWidget->SetSelection(9);
		break;
	case 57600:
		ConnectionSettingsBaudRateWidget->SetSelection(10);
		break;
	case 76800:
		ConnectionSettingsBaudRateWidget->SetSelection(11);
		break;
	case 115200:
		ConnectionSettingsBaudRateWidget->SetSelection(12);
		break;
	case 230400:
		ConnectionSettingsBaudRateWidget->SetSelection(13);
		break;
	case 250000:
		ConnectionSettingsBaudRateWidget->SetSelection(14);
		break;
	case 500000:
		ConnectionSettingsBaudRateWidget->SetSelection(15);
		break;
	case 1000000:
		ConnectionSettingsBaudRateWidget->SetSelection(16);
		break;
	default:
		//ConnectionSettingsBaudRateWidget->SetSelection(12);
		break;
	}
}
void ConnectionSettingsFrame::updateDataBitsOnWidget()
{
	boost::asio::serial_port_base::character_size dataBits = serialOptions.getDataBits();
	unsigned int dataBitsInt = dataBits.value();
	switch(dataBitsInt)
	{
	case 5:
		ConnectionSettingsDataBitsWidget->SetSelection(0);
		break;
	case 6:
		ConnectionSettingsDataBitsWidget->SetSelection(1);
		break;
	case 7:
		ConnectionSettingsDataBitsWidget->SetSelection(2);
		break;
	case 8:
		ConnectionSettingsDataBitsWidget->SetSelection(3);
		break;
	//case 9:
		//ConnectionSettingsDataBitsWidget->SetSelection(4);
		//break;
	}
}
void ConnectionSettingsFrame::updateParityOnWidget()
{
	boost::asio::serial_port_base::parity parity = serialOptions.getParity();
	//unsigned int parityInt = ;

	switch(parity.value())
	{
	case boost::asio::serial_port_base::parity::none:
		ConnectionSettingsParityWidget->SetSelection(0);
		break;
	case boost::asio::serial_port_base::parity::odd:
		ConnectionSettingsParityWidget->SetSelection(1);
		break;
	case boost::asio::serial_port_base::parity::even:
		ConnectionSettingsParityWidget->SetSelection(2);
		break;
	}
}
void ConnectionSettingsFrame::updateStopBitsOnWidget()
{
	boost::asio::serial_port_base::stop_bits stopBits = serialOptions.getStopBits();
	unsigned int stopBitsInt = stopBits.value();

	switch(stopBitsInt)
	{
	case 0:
		ConnectionSettingsStopBitsWidget->SetSelection(0);
		break;
	case 1:
		ConnectionSettingsStopBitsWidget->SetSelection(1);
		break;
	case 2:
		ConnectionSettingsStopBitsWidget->SetSelection(2);
		break;
	}
}
void ConnectionSettingsFrame::updateFlowControlOnWidget()
{
	boost::asio::serial_port_base::flow_control flowControl = serialOptions.getFlowControl();

	switch(flowControl.value())
	{
	case boost::asio::serial_port_base::flow_control::none:
		ConnectionSettingsFlowControlWidget->SetSelection(boost::asio::serial_port_base::flow_control::none);
		break;
	case boost::asio::serial_port_base::flow_control::software:
		ConnectionSettingsFlowControlWidget->SetSelection(boost::asio::serial_port_base::flow_control::software);
		break;
	case boost::asio::serial_port_base::flow_control::hardware:
		ConnectionSettingsFlowControlWidget->SetSelection(boost::asio::serial_port_base::flow_control::hardware);
		break;
	}

}



void ConnectionSettingsFrame::savePortNameFromWidget()
{
	wxString str = ConnectionSettingsPortNameWidget->GetLineText(0);
	serialOptions.setPortName(str.ToStdString());
}

void ConnectionSettingsFrame::saveBaudRateFromWidget()
{
	switch(ConnectionSettingsBaudRateWidget->GetSelection())
	{
	case 0:
		serialOptions.setBaudRate(300);
		break;
	case 1:
		serialOptions.setBaudRate(600);
		break;
	case 2:
		serialOptions.setBaudRate(1200);
		break;
	case 3:
		serialOptions.setBaudRate(2400);
		break;
	case 4:
		serialOptions.setBaudRate(4800);
		break;
	case 5:
		serialOptions.setBaudRate(9600);
		break;
	case 6:
		serialOptions.setBaudRate(14400);
		break;
	case 7:
		serialOptions.setBaudRate(19200);
		break;
	case 8:
		serialOptions.setBaudRate(28800);
		break;
	case 9:
		serialOptions.setBaudRate(38400);
		break;
	case 10:
		serialOptions.setBaudRate(57600);
		break;
	case 11:
		serialOptions.setBaudRate(76800);
		break;
	case 12:
		serialOptions.setBaudRate(115200);
		break;
	case 13:
		serialOptions.setBaudRate(230400);
		break;
	case 14:
		serialOptions.setBaudRate(250000);
		break;
	case 15:
		serialOptions.setBaudRate(500000);
		break;
	case 16:
		serialOptions.setBaudRate(1000000);
		break;
	default:
		//ConnectionSettingsBaudRateWidget->SetSelection(13);
		break;
	}
}
void ConnectionSettingsFrame::saveDataBitsFromWidget()
{
	unsigned int selection = ConnectionSettingsDataBitsWidget->GetSelection();
	switch(selection)
	{
	case 0:
        serialOptions.setDataBits(boost::asio::serial_port_base::character_size(5));
		break;
	case 1:
		serialOptions.setDataBits(boost::asio::serial_port_base::character_size(6));
		break;
	case 2:
		serialOptions.setDataBits(boost::asio::serial_port_base::character_size(7));
		break;
	case 3:
		serialOptions.setDataBits(boost::asio::serial_port_base::character_size(8));
		break;
	//case 4:
		//serialOptions.setDataBits(boost::asio::serial_port_base::character_size(9));
		//break;
	}
}
void ConnectionSettingsFrame::saveParityFromWidget()
{
	//boost::asio::serial_port_base::parity parity = serialOptions.getParity();
	unsigned int selection = ConnectionSettingsParityWidget->GetSelection();

	switch(selection)
	{
	case 0:
		serialOptions.setParity(boost::asio::serial_port_base::parity(boost::asio::serial_port_base::parity::none));
		break;
	case 1:
		serialOptions.setParity(boost::asio::serial_port_base::parity(boost::asio::serial_port_base::parity::odd));
		break;
	case 2:
		serialOptions.setParity(boost::asio::serial_port_base::parity(boost::asio::serial_port_base::parity::even));
		break;
	}
}
void ConnectionSettingsFrame::saveStopBitsFromWidget()
{
	//boost::asio::serial_port_base::stop_bits stopBits = serialOptions.getStopBits();
	unsigned int stopBits = ConnectionSettingsStopBitsWidget->GetSelection();

	switch(stopBits)
	{
	case 0:
		serialOptions.setStopBits(boost::asio::serial_port_base::stop_bits(boost::asio::serial_port_base::stop_bits::one));
		break;
	case 1:
		serialOptions.setStopBits(boost::asio::serial_port_base::stop_bits(boost::asio::serial_port_base::stop_bits::onepointfive));
		break;
	case 2:
		serialOptions.setStopBits(boost::asio::serial_port_base::stop_bits(boost::asio::serial_port_base::stop_bits::two));
		break;
	}
}
void ConnectionSettingsFrame::saveFlowControlFromWidget()
{

	unsigned int flowControlInt = ConnectionSettingsFlowControlWidget->GetSelection();

	switch(flowControlInt)
	{
	case boost::asio::serial_port_base::flow_control::none:
		serialOptions.setFlowControl(boost::asio::serial_port_base::flow_control(boost::asio::serial_port_base::flow_control::none));
		break;
	case boost::asio::serial_port_base::flow_control::software:
		serialOptions.setFlowControl(boost::asio::serial_port_base::flow_control(boost::asio::serial_port_base::flow_control::software));
		break;
	case boost::asio::serial_port_base::flow_control::hardware:
		serialOptions.setFlowControl(boost::asio::serial_port_base::flow_control(boost::asio::serial_port_base::flow_control::hardware));
		break;
	}

}

void ConnectionSettingsFrame::OnTreebook1PageChanged(wxNotebookEvent& event)
{
}
