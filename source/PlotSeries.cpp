/* PlotSeries.cpp
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

#include "PlotSeries.h"

PlotSeries::PlotSeries()
{
	mVisible = true;
}

PlotSeries::~PlotSeries() { }

//==================================================================================================

void PlotSeries::setName(const QString& name)
{
	mName = name;
}

QString PlotSeries::name() const
{
	return mName;
}

//==================================================================================================

void PlotSeries::setPen(const QPen& pen)
{
	mPen = pen;
}

QPen PlotSeries::pen() const
{
	return mPen;
}

//==================================================================================================

void PlotSeries::setData(const QVector<QPointF>& data)
{
	mData = data;
}

QVector<QPointF> PlotSeries::data() const
{
	return mData;
}

//==================================================================================================

void PlotSeries::setVisible(bool visible)
{
	mVisible = visible;
}

bool PlotSeries::isVisible() const
{
	return mVisible;
}
