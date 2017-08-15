/* PlotTypes.h
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

#ifndef PLOTTYPES_H
#define PLOTTYPES_H

#include <QtWidgets>

class PlotSeries
{
private:
	QString mName;
	QPen mPen;
	QVector<QPointF> mData;
	bool mVisible;

	int mMaximumDataSize;	// <1 = unlimited

public:
	PlotSeries();
	PlotSeries(const PlotSeries& series);
	~PlotSeries();

	PlotSeries operator=(const PlotSeries& series);

	void setName(const QString& name);
	QString name() const;

	void setPen(const QPen& pen);
	QPen pen() const;

	void setData(const QVector<QPointF>& data);
	QVector<QPointF> data() const;

	void setVisible(bool visible);
	bool isVisible() const;

	// Convenience functions for using series as a FIFO
	void setMaximumDataSize(int size);
	int maximumDataSize() const;

	void pushData(const QPointF& value);
	void popData();
};

#endif
