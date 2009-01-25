/*
 *		Copyright (c) 2009 Alex Norman.  All rights reserved.
 *		http://www.x37v.info/
 *
 *		This file is part of Alex's Evolver Editor.
 *		
 *		This Evolver Editor is free software: you can redistribute it and/or
 *		modify it under the terms of the GNU General Public License as published
 *		by the Free Software Foundation, either version 3 of the License, or (at
 *		your option) any later version.
 *		
 *		This Evolver Editor is distributed in the hope that it will be useful,
 *		but WITHOUT ANY WARRANTY; without even the implied warranty of
 *		MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General
 *		Public License for more details.
 *		
 *		You should have received a copy of the GNU General Public License along
 *		with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef MISC_AUDIO_HPP
#define MISC_AUDIO_HPP

#include "model.hpp"
//this is for stuff that doesn't fit anywhere else

class MiscAudioModel : public Model {
	Q_OBJECT
	public:
		MiscAudioModel(QObject * parent = NULL);
		enum distortion_type {
			internal,
			input
		};
		enum ext_in_mode_type {
			stereo,
			left,
			right,
			split
		};
		enum env_curve_type {
			exponential,
			linear
		};
		static const unsigned int volume_max;
		static const unsigned int distortion_max;
		static const unsigned int hack_max;
		static const unsigned int noise_volume_max;
		static const unsigned int ext_in_volume_max;
	public slots:
		void set_volume(int val);
		void set_distortion_type(int val);
		void set_distortion_amount(int val);
		void set_output_hack(int val);
		void set_input_hack(int val);
		void set_noise_volume(int val);
		void set_ext_in_mode(int val);
		void set_ext_in_volume(int val);
		void set_env_curve(int val);
	signals:
		void volume_changed(int);
		void distortion_type_changed(int);
		void distortion_amount_changed(int);
		void output_hack_changed(int);
		void input_hack_changed(int);
		void noise_volume_changed(int);
		void ext_in_mode_changed(int);
		void ext_in_volume_changed(int);
		void env_curve_changed(int);
	private:
		unsigned int mVolume;
		distortion_type mDistortionType;
		unsigned int mDistortionAmount;
		unsigned int mOutputHack;
		unsigned int mInputHack;
		unsigned int mNoiseVolume;
		ext_in_mode_type mExtInMode;
		unsigned int mExtInVolume;
		env_curve_type mEnvCurve;
};

#include <QWidget>
class SliderSpinBox;
class QGridLayout;
class QComboBox;

class MiscAudioView : public QWidget {
	Q_OBJECT
	public:
		MiscAudioView(QWidget * parent = NULL);
		void connect_to_model(MiscAudioModel * model);
	public slots:
		void set_volume(int val);
		void set_distortion_type(int val);
		void set_distortion_amount(int val);
		void set_output_hack(int val);
		void set_input_hack(int val);
		void set_noise_volume(int val);
		void set_ext_in_mode(int val);
		void set_ext_in_volume(int val);
		void set_env_curve(int val);
	signals:
		void volume_changed(int);
		void distortion_type_changed(int);
		void distortion_amount_changed(int);
		void output_hack_changed(int);
		void input_hack_changed(int);
		void noise_volume_changed(int);
		void ext_in_mode_changed(int);
		void ext_in_volume_changed(int);
		void env_curve_changed(int);
	private:
		QGridLayout * mLayout;

		SliderSpinBox * mVolume;

		QComboBox * mDistortionType;
		SliderSpinBox * mDistortionAmount;

		SliderSpinBox * mOutputHack;
		SliderSpinBox * mInputHack;

		SliderSpinBox * mNoiseVolume;

		QComboBox * mExtInMode;
		SliderSpinBox * mExtInVolume;

		QComboBox * mEnvCurve;
};

#endif
