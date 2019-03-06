#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	qDebug() << "Lossless Compression Results";
	qDebug() << "CMPT 365 - Summer 2018";
	qDebug() << "Timothy Montesa";
}

void MainWindow::GetFile() {
	filename = QFileDialog::getOpenFileName(this, tr("Open File"),
		"", tr("Audio (*.wav)"));

	QFile file(filename);
	if (!file.exists()) return;
	file.open(QIODevice::ReadOnly);

	QDataStream data(&file);
	filestream = file.readAll().toHex().toStdString();
	
	qDebug() << "Huffman Encoding (may take a minute) ...";
	HuffmanOutput = Huffman::Encode(filestream);
	qDebug() << "LZW Encoding (may take a minute) ...";
	LZWOutput = LZW::Encode(filestream);

	qDebug() << "Done!";
	emit SendFilename(filename);

	emit SendFileSize(QString::fromStdString(std::to_string(filestream.length() / 2) + " bytes"));
	emit SendLZWSize(QString::fromStdString(std::to_string(HuffmanOutput.length() / 2) + " bytes"));
	emit SendHuffmanSize(QString::fromStdString(std::to_string(LZWOutput.length() / 2) + " bytes"));

	emit SendLZWRatio(QString::fromStdString(std::to_string((HuffmanOutput.length() * 100) / filestream.length()) + "%"));
	emit SendHuffmanRatio(QString::fromStdString(std::to_string((LZWOutput.length() * 100) / filestream.length()) + "%"));
}