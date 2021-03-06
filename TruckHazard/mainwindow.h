#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QLabel>
#include <QNetworkRequest>
#include <QFile>
#include <QMessageBox>
#include <QTimer>
#include <QFileSystemWatcher>
//#include <QProcess>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void loadConfig();
    void saveConfig();
    void populateIPList();
    void displaymsg(QString text, QString error);
    int changeCamera(int camSelect);

private slots:

    //void on_addButton_clicked();
    //void on_deleteButton_clicked();
    //void on_toggleButton_clicked();
    void on_saveButton_clicked();
    //void on_listCamera_itemSelectionChanged();
    void on_applyButton_clicked();
    void displayDistance();
    void displayVideoLeft();
    void displayVideoRight();
    void on_leftCamON_stateChanged(int arg);
    void on_rightCamON_stateChanged(int arg1);
    //void constructScript(int cam, bool start);

private:

    Ui::MainWindow *ui;
    QMediaPlayer *player;
    QString leftCamera;
    QString rightCamera;
    int authCamera = 0;
};

#endif // MAINWINDOW_H
