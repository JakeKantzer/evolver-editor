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

#ifndef MODULATION_VIEW_HPP
#define MODULATION_VIEW_HPP

#include <QWidget>
#include <vector>

class LFOView;
class ModRoutingView;
class MiscModulationView;
class ApplicationModel;
//this shows all the modulation controls on the evolver
class ModulationView : public QWidget {
	Q_OBJECT
	public:
		ModulationView(QWidget * parent = NULL);
		std::vector<LFOView *> * lfos();
		std::vector<ModRoutingView *> * mods();
		MiscModulationView * misc_modulations();
		void connect_to_model(ApplicationModel * model);
	private:
		std::vector<LFOView *> mLFOs;
		std::vector<ModRoutingView *> mMods;
		MiscModulationView * mMiscModulation;
};

#endif
