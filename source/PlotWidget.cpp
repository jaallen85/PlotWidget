/* PlotWidget.cpp
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

#include "PlotWidget.h"
#include "PlotAxis.h"
#include "PlotLegend.h"

PlotWidget::PlotWidget() : QWidget()
{
	mHorizontalAxis = nullptr;
	mVerticalAxis = nullptr;
	mLegend = nullptr;

	setHorizontalAxis(new PlotAxis(Qt::Horizontal));
	setVerticalAxis(new PlotAxis(Qt::Vertical));
	setLegend(new PlotLegend());
}

PlotWidget::~PlotWidget()
{
	clearSeries();
	delete mHorizontalAxis;
	delete mVerticalAxis;
	delete mLegend;
}

//==================================================================================================

void PlotWidget::setHorizontalAxis(PlotAxis* axis)
{
	if (axis && axis->orientation() == Qt::Horizontal)
	{
		delete mHorizontalAxis;
		mHorizontalAxis = axis;
		mHorizontalAxis->mParent = this;
	}
}

void PlotWidget::setVerticalAxis(PlotAxis* axis)
{
	if (axis && axis->orientation() == Qt::Vertical)
	{
		delete mVerticalAxis;
		mVerticalAxis = axis;
		mVerticalAxis->mParent = this;
	}
}

PlotAxis* PlotWidget::horizontalAxis() const
{
	return mHorizontalAxis;
}

PlotAxis* PlotWidget::verticalAxis() const
{
	return mVerticalAxis;
}

//==================================================================================================

void PlotWidget::setLegend(PlotLegend* legend)
{
	if (legend)
	{
		delete mLegend;
		mLegend = legend;
		mLegend->mParent = this;
	}
}

PlotLegend* PlotWidget::legend() const
{
	return mLegend;
}

//==================================================================================================

void PlotWidget::addSeries(PlotSeries* series)
{
	if (series) mSeries.append(series);
}

void PlotWidget::removeSeries(PlotSeries* series)
{
	if (series) mSeries.removeAll(series);
}

void PlotWidget::clearSeries()
{
	while (!mSeries.isEmpty()) delete mSeries.takeFirst();
}

int PlotWidget::numberOfSeries() const
{
	return mSeries.size();
}

QList<PlotSeries*> PlotWidget::allSeries() const
{
	return mSeries;
}

PlotSeries* PlotWidget::series(int index) const
{
	return mSeries.at(index);
}
