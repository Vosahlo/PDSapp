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
 * http://doc.qt.io/qt-5/qsignalmapper.html signal mapper
 * timer http://n9.dy.fi/2015/01/lets-create-a-timer-app/
 * autotimer na tlacitka
 * velikost oken
 * editovani zemi ukladaci - asi za rok
 * volba vyboru zprovoznit
 * ukladaci session - asi za rok, neni priorita

 * hlasovani - udelat Votewindow - asi za rok, priorita
 * ve voteWindow moznost absent, zeme bez hlasovacich prav
 *
 * labeltema nastavovaci v mainwindow zprovoznit (slot UpdateTopic v SideWindow)
 * ikonka programu
 * osetrit pridani statu 2x
 * cudlik na zobrazeni vedlejsiho okna
 *
 *  sideWindow on top regulovatelny?
 *
 */


