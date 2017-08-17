/* PlotLegend.cpp
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

#include "PlotLegend.h"
#include "PlotWidget.h"

PlotLegend::PlotLegend()
{
	mParent = nullptr;
}

PlotLegend::~PlotLegend()
{
	mParent = nullptr;
}

//==================================================================================================

PlotWidget* PlotLegend::parent() const
{
	return mParent;
}

//==================================================================================================

void PlotLegend::setLocation(Location location)
{
	mLocation = location;
}

PlotLegend::Location PlotLegend::location() const
{
	return mLocation;
}

//==================================================================================================

QSize PlotLegend::size() const
{
	QSize size;

	if (mLocation != None && mParent)
	{
		QList<PlotSeries*> series = mParent->allSeries();

		if (series.size() > 0)
		{
			QFontMetrics fontMetrics(mParent->font());
			int	textHeight = fontMetrics.height();

			// Label width
			int maxLabelWidth = 0;
			QList<PlotSeries*>::Iterator seriesIter, seriesEnd;
			for(seriesIter = series.begin(), seriesEnd = series.end(); seriesIter != series.end(); seriesIter++)
				maxLabelWidth = qMax(maxLabelWidth, fontMetrics.width((*seriesIter)->name()));

			// Check box size
			QStyleOptionButton styleOptionButton;
			styleOptionButton.initFrom(mParent);
			QSize checkSize = mParent->style()->subElementRect(QStyle::SE_CheckBoxIndicator,
				&styleOptionButton, mParent).size();

			// Determine legend size
			size.setHeight(series.size() * (mParent->spacing() + qMax(checkSize.height(), textHeight)) +
				3 * mParent->spacing());

			size.setWidth(checkSize.width() + maxLabelWidth + 3 * textHeight + 6 * mParent->spacing());

		}
	}

	return size;
}
