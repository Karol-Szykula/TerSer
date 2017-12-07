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

class terApp : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif // TERAPP_H
