#include "oscmodel.hpp"
#include "oscview.hpp"
#include "lfo.hpp"
#include "delay.hpp"
#include "filter.hpp"
#include "vca.hpp"
#include "env3.hpp"
#include <QApplication>
#include "modulation_destinations.hpp"
#include "applicationmodel.hpp"
#include "applicationview.hpp"
#include "audioandenvelopeview.hpp"
#include "modulationview.hpp"
#include "modulators.hpp"
#include "miscaudio.hpp"
#include "miscmodulation.hpp"
#include "mididriver.hpp"

int main(int argc, char *argv[])
{
   QApplication app(argc, argv);
	ApplicationModel * model = new ApplicationModel(&app);
	ApplicationView * view = new ApplicationView();
	MidiDriver * driver = new MidiDriver(model, model);
	model->set_midi_driver(driver);
	view->connect_to_model(model);
	driver->open_input(3);
	driver->open_output(2);
	//stop the thread when we're gonna quit
	QObject::connect(&app,
			SIGNAL(aboutToQuit()),
			driver,
			SLOT(quit()));
	driver->start();

	//XXX tmp
	//driver->request_edit_buffer();
	
	view->show();
   return app.exec();
}

