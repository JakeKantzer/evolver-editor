#ifndef MODULATION_DESTINATIONS_HPP
#define MODULATION_DESTINATIONS_HPP

#define NUM_MODULATION_DESTINATIONS 69

const static char* modulation_destinations[] = {
	"No destination selected",
	"Oscillator 1 Frequency",
	"Oscillator 2 Frequency",
	"Oscillator 3 Frequency",
	"Oscillator 4 Frequency",
	"Oscillator All Frequency",
	"Oscillator 1 Level",
	"Oscillator 2 Level",
	"Oscillator 3 Level",
	"Oscillator 4 Level",
	"Oscillator All Level",
	"Noise Level",
	"External In Level",
	"Oscillator 1 Pulse width",
	"Oscillator 2 Pulse width",
	"Oscillator All Pulse width",
	"FM Amount; Osc 4 -> 3",
	"FM Amount; Osc 3 -> 4",
	"Ring Mod Amount; Osc 4 -> 3",
	"Ring Mod Amount; Osc 3 -> 4",
	"Filter frequency",
	"Filter Split",
	"Resonance",
	"Highpass Frequency",
	"VCA amount",
	"Pan",
	"Feedback frequency",
	"Feedback Amount",
	"Delay Time 1",
	"Delay Time 2",
	"Delay Time 3",
	"Delay Time All",
	"Delay Amount 1",
	"Delay Amount 2",
	"Delay Amount 3",
	"Delay Amount All",
	"Delay Feedback 1",
	"Delay Feedback 2",
	"LFO 1 Frequency",
	"LFO 2 Frequency",
	"LFO 3 Frequency",
	"LFO 4 Frequency",
	"LFO All Frequency",
	"LFO 1 Amount",
	"LFO 2 Amount",
	"LFO 3 Amount",
	"LFO 4 Amount",
	"LFO A Amount",
	"Envelope 1 Amount",
	"Envelope 2 Amount",
	"Envelope 3 Amount",
	"Envelope A Amount",
	"Envelope 1 Attack",
	"Envelope 2 Attack",
	"Envelope 3 Attack",
	"Envelope A Attack",
	"Envelope 1 Decay",
	"Envelope 2 Decay",
	"Envelope 3 Decay",
	"Envelope A Decay",
	"Envelope 1 Release",
	"Envelope 2 Release",
	"Envelope 3 Release",
	"Envelope A Release",
	"Filter 1 (left) Cutoff Frequency",
	"Filter 2 (right) Cutoff Frequency",
	"Filter 1 (left) Resonance",
	"Filter 2 (right) Resonance",
	"Distortion"
};


#include <QComboBox>

class ModDestComboBox : public QComboBox {
	Q_OBJECT
	public:
		ModDestComboBox(QWidget * parent = NULL);
};

#endif
