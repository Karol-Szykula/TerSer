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

#ifdef _WIN32
    #define BOOST_THREAD_PROVIDES_GENERIC_SHARED_MUTEX_ON_WIN
    #define WIN32_LEAN_AND_MEAN     // stops including windows.h
#endif

#include <wx/app.h>

#ifdef _WIN32
    #include <winsock2.h> // include for boost::asio in asyncserial
#endif

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
