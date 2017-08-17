/* PlotWidget.h
 *
 * Copyright (C) 2017- Jason Allen
 *
 * This file is part of the PlotWidget application.
 *
 * PlotWidget is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * PlotWidget is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with PlotWidget.  If not, see <http://www.gnu.org/licenses/>
 */

#ifndef PLOTWIDGET_H
#define PLOTWIDGET_H

#include <PlotSeries.h>

class PlotWidget : public QWidget
{
	Q_OBJECT

protected:
	PlotAxis* mHorizontalAxis;
	PlotAxis* mVerticalAxis;
	PlotLegend* mLegend;

	QList<PlotSeries*> mSeries;

	int mSpacing;

public:
	PlotWidget();
	virtual ~PlotWidget();

	QSize sizeHint() const;

	//background
	//grid

	void setHorizontalAxis(PlotAxis* axis);
	void setVerticalAxis(PlotAxis* axis);
	PlotAxis* horizontalAxis() const;
	PlotAxis* verticalAxis() const;

	void setLegend(PlotLegend* legend);
	PlotLegend* legend() const;

	void addSeries(PlotSeries* series);
	void removeSeries(PlotSeries* series);
	void clearSeries();
	int numberOfSeries() const;
	QList<PlotSeries*> allSeries() const;
	PlotSeries* series(int index) const;

	void setSpacing(int spacing);
	int spacing() const;
};

#endif
