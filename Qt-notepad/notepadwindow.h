#ifndef NOTEPADWINDOW_H
#define NOTEPADWINDOW_H

#include <QMainWindow>
//Incluimos librerias necesarias
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QPlainTextEdit>
#include <QFileDialog>
#include <QFile>
#include <QFontDialog>
#include <QClipboard>
#include <QKeySequence>
#include <QMessageBox> // Ventana de mensajes
#include <QToolBar>
#include <QIcon>
#include <QImage>

class NotepadWindow : public QMainWindow
{
    Q_OBJECT

public:
    NotepadWindow(QWidget *parent = 0);
    ~NotepadWindow();

private slots:
    void alAbrir();
    void alGuardar();
    void alFuente();
    void alAcercaDe();

private:
    QMenuBar*       mainMenu_;

    // Archivo
    QMenu*          mnuArchivo_;
    QAction*        actArchivoAbrir_;
    QAction*        actArchivoGuardar_;
    QAction*        actArchivoCerrar_;

    // Editar
    QMenu*          mnuEditar_;
    QAction*        actEditarCopiar_;
    QAction*        actEditarPegar_;
    QAction*        actEditarCortar_;
    QAction*        actEditarDeshacer_;
    QAction*        actEditarRehacer_;

    // Formato
    QMenu*          mnuFormato_;
    QAction*        actFormatoFuente_;

    // Ayuda
    QMenu*          mnuAyuda_;
    QAction*        actAcercaDe_;

    QToolBar*       tool_;

    QPlainTextEdit* txtEditor_;
    QClipboard *    portapapeles_;

};

#endif // NOTEPADWINDOW_H

