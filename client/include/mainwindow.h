#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "markdown_highlighter.h"
#include "changepasswd.h"
#include "sign_in.h"
#include <QWidget>
#include <QTcpSocket>
#include <QModelIndex>
#include <QMessageBox>
#include <QListWidget>
#include <QNetworkInterface>
#include <opencv4/opencv2/opencv.hpp>
#include <QScreen>
#include <QDesktopWidget>
#include <QUdpSocket>
#include <QBuffer>
#include <opencv2/imgproc/types_c.h>
#include <QTimer>
#include <QMovie>
#include <QInputDialog>
#include <QFile>
#include <QAbstractSocket>
#include <QSet>
#include <QDebug>
#include "mylabel.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QWidget {
Q_OBJECT

public:
	static MainWindow &get_instance();
	QTcpSocket *get_chat_socket();

protected:
	void showEvent(QShowEvent *event) override;

signals:
	void send_gift(int gift);

private:
	explicit MainWindow(QWidget *parent = nullptr);
	~MainWindow() override;
	void handle_data(const QByteArray &recv_data);
	void generate_redata(const QList<QByteArray> &data, int size, int in_use);
	void ask_change_room(const QString &room);
	
	bool m_bullet;
	bool m_flag;
	bool m_status;
	bool m_status_;
	QString local_name;
	QString local_room;
	quint16 local_video;
	int local_integral;
	QTcpSocket *m_chat_socket;
	QUdpSocket *m_video_socket;
	QSet<QString> m_room;
	QMap<QString, quint16> m_video;
	cv::VideoCapture m_capture;
	cv::Mat frame;
	int timerid;
	markdown_highlighter *m_markdown;
	
	MyLabel *like_label;
	MyLabel *flower_label;
	MyLabel *rocket_label;
	
	Sign_in *m_sign_in;
	Ui::MainWindow *ui;
	
	void connect_to_server();
	void set_connect();
	void set_live_enable(bool status);
	void refresh_room(const QString &room);
	void add_new_parter(const QString &name);
	void del_new_parter(const QString &name);
	void set_color(const QString &str, const QColor &color);
	void append_chat_data(const QString &str);
	void add_new_room(const QString &str);
	void del_room(const QString &str);
	void back_to_sign();
	void enable_video();

protected:
	void timerEvent(QTimerEvent *event) override;

private slots:
	void recv_msg();
	void accept_error(QAbstractSocket::SocketError);
	void send_chat_data();
	void join_in_chat_room(QModelIndex index);
	void create_chat_room();
	void send_quit_info();
	void change_play_channel();
	void recv_video_data();
	void top_up();
	void show_parters(int index);
	void send_flower();
	void send_pepper();
	void send_like();
	void send_rocket();
	void recv_gift(int gift);
	void change_barrage(int state);
	
};
#endif // MAINWINDOW_H
