#ifndef PROCMON_H
#define PROCMON_H

#include <QMainWindow>

namespace Ui {
	class MainWindow;
}

class Procmon : public QMainWindow{
	Q_OBJECT
	
	public:
		explicit Procmon(QWidget *parent = 0);
		~Procmon();
		
	private:
        int LOADED[4]   = {0, 1, 0, 1};
        int STARTED[4]  = {0, 0, 1, 0};
        int STOPPED[4]  = {0, 1, 0, 1};
        int UNLOADED[4] = {1, 0, 0, 0};

        Ui::MainWindow *ui;
        int get_loaded_state();
        int change_loaded_state(int state);
        int change_running_state(int state);
        void change_btns_state(int states[]);

};

#endif // PROCMON_H