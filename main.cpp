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
 * hlavni recnik vetsi
 * sideWindow to samy co v hlavnim
 * timer
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
 * odstraneni libovolnyho statu z fronty kliknutim na vlajecku v mainwindow (klikatko remove?)
 * osetrit pridani statu 2x
 */


