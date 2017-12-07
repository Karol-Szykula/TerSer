/***************************************************************
 * Name:      terMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Karol Szykula (karol.szykula@gmail.com)
 * Created:   2017-11-30
 * Copyright: Karol Szykula ()
 * License:
 **************************************************************/

#include "terMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(terFrame)
#include <wx/bitmap.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(terFrame)
const long terFrame::ID_STATICTEXT2 = wxNewId();
const long terFrame::ID_STATICTEXT3 = wxNewId();
const long terFrame::ID_STATICTEXT4 = wxNewId();
const long terFrame::ID_STATICTEXT5 = wxNewId();
const long terFrame::ID_BUTTON1 = wxNewId();
const long terFrame::ID_BUTTON2 = wxNewId();
const long terFrame::ID_STATICTEXT1 = wxNewId();
const long terFrame::ID_TEXTCTRL2 = wxNewId();
const long terFrame::ID_TEXTCTRL1 = wxNewId();
const long terFrame::ID_PANEL2 = wxNewId();
const long terFrame::ID_PANEL3 = wxNewId();
const long terFrame::ID_NOTEBOOK1 = wxNewId();
const long terFrame::ID_PANEL1 = wxNewId();
const long terFrame::ID_MENUQUIT = wxNewId();
const long terFrame::ID_MENUCONNECTION = wxNewId();
const long terFrame::ID_MENUWINDOW = wxNewId();
const long terFrame::ID_MENUABOUT = wxNewId();
const long terFrame::ID_STATUSBAR1 = wxNewId();
const long terFrame::wxID_PROPERTIES  = wxNewId();
const long terFrame::ID_TOOLBARITEMQUIT = wxNewId();
const long terFrame::ID_TOOLBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(terFrame,wxFrame)
    //(*EventTable(terFrame)
    //*)
END_EVENT_TABLE()

terFrame::terFrame(wxWindow* parent,wxWindowID id)
{
	ID_CONSETFRAME = 1;
	ID_WINSETDIALOG = 2;

	    //connectionSettingsFrame = new ConnectionSettingsFrame(this, ID_CONSETFRAME);

    //(*Initialize(terFrame)
    wxMenuItem* menuItemAbout;
    wxBoxSizer* FramePanelSizer;
    wxFlexGridSizer* FlexGridSizer4;
    wxMenu* menuFile;
    wxMenuItem* menuItemQuit;
    wxBoxSizer* FrameSizer;
    wxFlexGridSizer* FlexGridSizer5;
    wxFlexGridSizer* FlexGridSizer2;
    wxMenu* menuHelp;
    wxStaticBoxSizer* StaticBoxSizer1;
    wxBoxSizer* RadiatorsSizer;
    wxFlexGridSizer* FlexGridSizer1;
    wxBoxSizer* TerminalSizer;
    wxMenuBar* menuBar;

    Create(parent, wxID_ANY, _("TerSer"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE|wxWANTS_CHARS, _T("wxID_ANY"));
    FrameSizer = new wxBoxSizer(wxHORIZONTAL);
    FramePanel = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    FramePanelSizer = new wxBoxSizer(wxVERTICAL);
    StaticBoxSizer1 = new wxStaticBoxSizer(wxHORIZONTAL, FramePanel, _("Status"));
    FlexGridSizer2 = new wxFlexGridSizer(0, 2, 0, 0);
    FlexGridSizer2->AddGrowableCol(0);
    FlexGridSizer2->AddGrowableCol(1);
    FlexGridSizer4 = new wxFlexGridSizer(0, 2, 0, 0);
    StaticText1 = new wxStaticText(FramePanel, ID_STATICTEXT2, _("Status:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    FlexGridSizer4->Add(StaticText1, 0, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    LabelConnectionStatus = new wxStaticText(FramePanel, ID_STATICTEXT3, _("DISCONNECTED"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    FlexGridSizer4->Add(LabelConnectionStatus, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    StaticText3 = new wxStaticText(FramePanel, ID_STATICTEXT4, _("Server:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    FlexGridSizer4->Add(StaticText3, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    LabelServerStatus = new wxStaticText(FramePanel, ID_STATICTEXT5, _("STOPPED"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
    FlexGridSizer4->Add(LabelServerStatus, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer2->Add(FlexGridSizer4, 1, wxALL|wxEXPAND, 0);
    FlexGridSizer5 = new wxFlexGridSizer(0, 1, 0, 0);
    FlexGridSizer5->AddGrowableCol(0);
    FlexGridSizer5->AddGrowableRow(0);
    ButtonConnect = new wxButton(FramePanel, ID_BUTTON1, _("Connect"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    FlexGridSizer5->Add(ButtonConnect, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    ButtonStartServer = new wxButton(FramePanel, ID_BUTTON2, _("Start"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    FlexGridSizer5->Add(ButtonStartServer, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer2->Add(FlexGridSizer5, 1, wxALL|wxEXPAND, 0);
    StaticBoxSizer1->Add(FlexGridSizer2, 1, wxALL|wxEXPAND, 0);
    FramePanelSizer->Add(StaticBoxSizer1, 0, wxALL|wxEXPAND, 0);
    NotebookWidget = new wxNotebook(FramePanel, ID_NOTEBOOK1, wxDefaultPosition, wxSize(339,267), 0, _T("ID_NOTEBOOK1"));
    TerminalPanelWidget = new wxPanel(NotebookWidget, ID_PANEL2, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL2"));
    TerminalSizer = new wxBoxSizer(wxVERTICAL);
    FlexGridSizer1 = new wxFlexGridSizer(1, 2, 0, 0);
    FlexGridSizer1->AddGrowableCol(1);
    TerminalSendLabel = new wxStaticText(TerminalPanelWidget, ID_STATICTEXT1, _("Send"), wxDefaultPosition, wxDefaultSize, wxALIGN_LEFT, _T("ID_STATICTEXT1"));
    FlexGridSizer1->Add(TerminalSendLabel, 0, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    TerminalSendTextCtrl = new wxTextCtrl(TerminalPanelWidget, ID_TEXTCTRL2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    FlexGridSizer1->Add(TerminalSendTextCtrl, 1, wxALL|wxEXPAND, 5);
    TerminalSizer->Add(FlexGridSizer1, 0, wxALL|wxEXPAND, 5);
    TerminalTextCtrlWidget = new wxTextCtrl(TerminalPanelWidget, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE|wxTE_READONLY|wxTE_RICH, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    TerminalSizer->Add(TerminalTextCtrlWidget, 1, wxALL|wxEXPAND, 5);
    TerminalPanelWidget->SetSizer(TerminalSizer);
    TerminalSizer->Fit(TerminalPanelWidget);
    TerminalSizer->SetSizeHints(TerminalPanelWidget);
    RadiatorsPanelWidget = new wxPanel(NotebookWidget, ID_PANEL3, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL|wxWANTS_CHARS, _T("ID_PANEL3"));
    RadiatorsSizer = new wxBoxSizer(wxHORIZONTAL);
    RadiatorsPanelWidget->SetSizer(RadiatorsSizer);
    RadiatorsSizer->Fit(RadiatorsPanelWidget);
    RadiatorsSizer->SetSizeHints(RadiatorsPanelWidget);
    NotebookWidget->AddPage(TerminalPanelWidget, _("Terminal"), false);
    NotebookWidget->AddPage(RadiatorsPanelWidget, _("Radiators"), false);
    FramePanelSizer->Add(NotebookWidget, 1, wxALL|wxEXPAND, 0);
    FramePanel->SetSizer(FramePanelSizer);
    FramePanelSizer->Fit(FramePanel);
    FramePanelSizer->SetSizeHints(FramePanel);
    FrameSizer->Add(FramePanel, 1, wxALL|wxEXPAND, 0);
    SetSizer(FrameSizer);
    menuBar = new wxMenuBar();
    menuFile = new wxMenu();
    menuItemQuit = new wxMenuItem(menuFile, ID_MENUQUIT, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    menuFile->Append(menuItemQuit);
    menuBar->Append(menuFile, _("&File"));
    MenuItem1 = new wxMenu();
    MenuItem2 = new wxMenuItem(MenuItem1, ID_MENUCONNECTION, _("Connection"), wxEmptyString, wxITEM_NORMAL);
    MenuItem1->Append(MenuItem2);
    MenuItem3 = new wxMenuItem(MenuItem1, ID_MENUWINDOW, _("Window"), wxEmptyString, wxITEM_NORMAL);
    MenuItem1->Append(MenuItem3);
    menuBar->Append(MenuItem1, _("Settings"));
    menuHelp = new wxMenu();
    menuItemAbout = new wxMenuItem(menuHelp, ID_MENUABOUT, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    menuHelp->Append(menuItemAbout);
    menuBar->Append(menuHelp, _("Help"));
    SetMenuBar(menuBar);
    statusBar = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    statusBar->SetFieldsCount(1,__wxStatusBarWidths_1);
    statusBar->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(statusBar);
    toolBar = new wxToolBar(this, ID_TOOLBAR1, wxDefaultPosition, wxDefaultSize, wxTB_HORIZONTAL|wxNO_BORDER, _T("ID_TOOLBAR1"));
    ToolBarItem1 = toolBar->AddTool(wxID_PROPERTIES , _("Connection"), wxBitmap(wxImage(_T("D:\\dokumenty\\programowanie\\C++\\CodeBlocks\\wx_t\\ter\\properties.png"))), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString);
    toolBarItemQuit = toolBar->AddTool(ID_TOOLBARITEMQUIT, _("Quit"), wxBitmap(wxImage(_T("D:\\dokumenty\\programowanie\\C++\\CodeBlocks\\wx_t\\ter\\quit.png"))), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString);
    toolBar->Realize();
    SetToolBar(toolBar);
    FrameSizer->Fit(this);
    FrameSizer->SetSizeHints(this);

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&terFrame::OnButtonConnectClick);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&terFrame::OnButtonStartServerClick);
    Connect(ID_TEXTCTRL2,wxEVT_COMMAND_TEXT_ENTER,(wxObjectEventFunction)&terFrame::OnTerminalSendTextEnter);
    Connect(ID_MENUQUIT,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&terFrame::OnQuit);
    Connect(ID_MENUCONNECTION,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&terFrame::OnToolBarSettingsClicked);
    Connect(ID_MENUWINDOW,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&terFrame::OnMenuItemWindowClicked);
    Connect(ID_MENUABOUT,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&terFrame::OnAbout);
    Connect(wxID_PROPERTIES ,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&terFrame::OnToolBarSettingsClicked);
    Connect(ID_TOOLBARITEMQUIT,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&terFrame::OnQuit);
    //*)

	//SetMinSize(GetSize());

	serialState = false;

}

terFrame::~terFrame()
{
    //(*Destroy(terFrame)
    //*)
}

void terFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void terFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxT("Author: Karol Szykula");
    wxMessageBox(msg, _("About"));
}



void terFrame::OnTerminalSendTextEnter(wxCommandEvent& event)
{
	wxString enteredText = "";
    enteredText = TerminalSendTextCtrl->GetValue();	//get text from user

    TerminalSendTextCtrl->Clear();			// clear input widget

    std::string enteredStr = enteredText.ToStdString();
    enteredStr += "\r\n";

    //if(serialConnection.isOpen() == true)
	{
        //serialConnection.writeString(enteredStr);

		//TerminalTextCtrlWidget->AppendText("<<<");				// add direction sign
		TerminalTextCtrlWidget->AppendText(enteredStr);    // append the text to the message window
		//TerminalTextCtrlWidget->AppendText("\n");
	}

}

void terFrame::OnToolBarSettingsClicked(wxCommandEvent& event)
{
	connectionSettingsFrame = new ConnectionSettingsFrame(this, ID_CONSETFRAME);
	connectionSettingsFrame->setSerialOptions(this->getSerialOptions());
	connectionSettingsFrame->setRelative(this);
	connectionSettingsFrame->SetTitle(wxT("Connection settings"));
	connectionSettingsFrame->Show(true);

	//ConnectionSettingsFrame * connectionSettingsFrameDebug;
	//wxWindowID ID_CONSETFRAMEDEBUG;
	//connectionSettingsFrameDebug = new ConnectionSettingsFrame(this, ID_CONSETFRAMEDEBUG);
	//connectionSettingsFrameDebug->setRelative(this);
	//connectionSettingsFrameDebug->Show(true);
}

void terFrame::OnMenuItemWindowClicked(wxCommandEvent& event)
{
	windowSettingsDialog = new WindowSettingsDialog(this, ID_WINSETDIALOG);
	windowSettingsDialog->Show(true);
}

void terFrame::OnSerialRecived(const char * data, std::size_t len)	// callback function for serial communication
{


    for (std::size_t i = 0; i < len; ++i)
    {
        if(data[i] != '\r' && data[i] != '\n')
		{
			serialReceived += data[i];
			//TerminalTextCtrlWidget->AppendText(data[i]);
		}else if(data[i] == '\r' || data[i] == '\n')
		{
			serialReceived += "\0";
			TerminalTextCtrlWidget->AppendText(serialReceived);
			serialReceived = "";
		}
		//TerminalTextCtrlWidget->AppendText("\n");
    }
    //wxString received(serialReceived);
	//TerminalTextCtrlWidget->AppendText(">>>");
	//TerminalTextCtrlWidget->AppendText(serialReceived);


}

void terFrame::setSerialOptions(SerialOptions newSerialOptions)
{
	serialOptions = newSerialOptions;
	//serialOptions = connectionSettingsFrame->getSerialOptions();
	//connectionSettingsFrame->setSerialOptions(serialOptions);
	//connectionSettingsFrameDebug->setSerialOptions(serialOptions);
}

SerialOptions terFrame::getSerialOptions()
{
	return serialOptions;
}

void terFrame::OnButtonConnectClick(wxCommandEvent& event)
{


	std::string portName = serialOptions.getPortName();
	unsigned int baudRate = serialOptions.getBaudRate();

	if()
    int CONNECTION = serialConnection.Open(portName.c_str(), baudRate);

	if(serialState == true)	// if opened
	{
		ButtonConnect->SetLabel(wxT("Disconnect"));
		LabelConnectionStatus->SetLabel(wxT("CONNECTED"));

	}
	else if(serialState != 1)
	{
		ButtonConnect->SetLabel(wxT("Connect"));
		LabelConnectionStatus->SetLabel(wxT("DISCONNECTED"));
	}

}

void terFrame::OnButtonStartServerClick(wxCommandEvent& event)
{
}
