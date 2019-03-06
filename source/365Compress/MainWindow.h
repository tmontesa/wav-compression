#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MainWindow.h"

#include "LosslessEncoder.h"
#include <QFileDialog>
#include <QDebug>

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = Q_NULLPTR);

public slots:
	void GetFile();

signals:
	void SendFilename(QString);

	void SendFileSize(QString);
	
	void SendLZWSize(QString);
	void SendLZWRatio(QString);

	void SendHuffmanSize(QString);
	void SendHuffmanRatio(QString);

private:
	Ui::MainWindowClass ui;

	QString filename;
	std::string filestream;
	std::string LZWOutput;
	std::string HuffmanOutput;
};
