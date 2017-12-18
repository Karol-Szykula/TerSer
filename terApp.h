/***************************************************************
 * Name:      terApp.h
 * Purpose:   Defines Application Class
 * Author:    Karol Szykula (karol.szykula@gmail.com)
 * Created:   2017-11-30
 * Copyright: Karol Szykula ()
 * License:
 **************************************************************/

#ifndef TERAPP_H
#define TERAPP_H

#include <wx/app.h>

//!  A main application class, based on wxApp wxWidgets class.
/*!
  These class initialize application with overloaded OnInit function.
*/

class terApp : public wxApp
{
    public:
	//! A virtual member which runs at the beginning (wxWidgets).
        virtual bool OnInit();
};

#endif // TERAPP_H
