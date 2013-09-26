#include <QApplication>
#include <QtWebKitWidgets/QWebView>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

	QWebView webView;
	webView.setWindowTitle(QObject::tr("Google Adwords"));
	webView.load(QUrl("http://mail.ru"));
	webView.show();

	app.exec();

	return 0;
}
