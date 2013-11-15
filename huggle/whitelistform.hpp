//This program is free software: you can redistribute it and/or modify
//it under the terms of the GNU General Public License as published by
//the Free Software Foundation, either version 3 of the License, or
//(at your option) any later version.

//This program is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.

#ifndef WHITELISTFORM_H
#define WHITELISTFORM_H

#include <QDialog>
#include "configuration.hpp"

namespace Ui
{
    class WhitelistForm;
}

namespace Huggle
{
    class WhitelistForm : public QDialog
    {
            Q_OBJECT

        public:
            explicit WhitelistForm(QWidget *parent = 0);
            ~WhitelistForm();

        private:
            Ui::WhitelistForm *ui;
    };
}

#endif // WHITELISTFORM_H
