#include <QApplication>
#include <QDialog>

#include "MainWindow.h"


int main(int argv, char **args) {
    QApplication app(argv, args);
    app.setApplicationName("PDSapp");
    //QIcon icon = QIcon(":/icon.jpg");
    //app.setWindowIcon(icon)
    MainWindow window;
    //window.height()=200;

    window.show();
    return app.exec();
}


/*TODO
 * list zemi.
 * http://doc.qt.io/qt-5/qsignalmapper.html signal mapper
 * hlavni recnik vetsi
 * timer http://n9.dy.fi/2015/01/lets-create-a-timer-app/
 * autotimer na tlacitka
 * popsat okynka
 * velikost oken
 * editovani zemi ukladaci
 * volba vyboru
 * ukladaci session
 * okynko edit session
 * hlasovani - udelat Votewindow
 * ve voteWindow moznost absent
 * labeltema nastavovaci v mainwindow zprovoznit (slot UpdateTopic v SideWindow)
 * slider na hlasitost // asi nejde :/
 * ikonka programu
 * dycky pri zmene vykreslit FrontaWidget znova
 * osetrit pridani statu 2x
 * cudlik na zobrazeni vedlejsiho okna
 *
 *  setWindowFlags(Qt::WindowStaysOnTopHint);
 *
 */


