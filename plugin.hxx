#ifndef PLUGIN_HXX
#define PLUGIN_HXX

#include <plugininterface.hxx>

#include <QtCore/QObject>
#include <QtGui/QWidget>

class Plugin : public QObject, public PluginInterface {
    Q_OBJECT
    Q_INTERFACES(PluginInterface)

    QWidget* widget;
public:

    virtual void install();
};

#endif // PLUGIN_HXX
