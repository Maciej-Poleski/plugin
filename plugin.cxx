#include "plugin.hxx"

#include <QtCore/QtPlugin>
#include <QtGui/QLabel>
#include <mainwindow.hxx>

void Plugin::install()
{
    widget=new QWidget();
    new QLabel(tr("Hello World!"),widget);
    if(mainWindow)
        mainWindow->setCentralWidget(widget);
}

Q_EXPORT_PLUGIN2(plugin,Plugin)
