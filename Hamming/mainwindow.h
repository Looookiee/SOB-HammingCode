#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    template<class T> std::string valueToString(T value);
    template<class T> T stringToValue(std::string str);
    std::string mistake(std::string data, int rn);
    std::string Dec2Bin(long n);
    std::string Dec2BinNoZeros(long n);
    long Bin2Dec(std::string m);
    std::string generateRandom(int length);
    void hammingAlgorithm(std::string input, bool manualMistake);

private slots:
    void on_Quit_clicked();

    void on_StartButton_clicked();

    void on_RandomButton_clicked();

    void on_StartButton_2_clicked();

    void on_editButton_clicked();

    void on_saveButton_clicked();

    void on_loadButton_clicked();

private:
    Ui::MainWindow *ui;
};



#endif // MAINWINDOW_H
