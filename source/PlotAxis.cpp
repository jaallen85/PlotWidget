/* PlotAxis.cpp
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

#include "PlotAxis.h"

PlotAxis::PlotAxis(Qt::Orientation orientation)
{
	mParent = nullptr;
	mOrientation = orientation;

	mMapping = Linear;
	mMinimum = -1.0;
	mMaximum = 1.0;
	mMajorScale = 0.1;
	mMinorScale = 0.05;
	mNumberFormat = Normal;
}

PlotAxis::~PlotAxis()
{
	mParent = nullptr;
}

//==================================================================================================

PlotWidget* PlotAxis::parent() const
{
	return mParent;
}

Qt::Orientation PlotAxis::orientation() const
{
	return mOrientation;
}

//==================================================================================================

void PlotAxis::setTitle(const QString& title)
{
	mTitle = title;
}

QString PlotAxis::title() const
{
	return mTitle;
}

//==================================================================================================

void PlotAxis::setMapping(Mapping mapping)
{
	mMapping = mapping;
}

PlotAxis::Mapping PlotAxis::mapping() const
{
	return mMapping;
}

//==================================================================================================

void PlotAxis::setRange(qreal minimum, qreal maximum)
{
	mMinimum = minimum;
	mMaximum = maximum;
}

void PlotAxis::setMinimum(qreal minimum)
{
	mMinimum = minimum;
}

void PlotAxis::setMaximum(qreal maximum)
{
	mMaximum = maximum;
}

qreal PlotAxis::minimum() const
{
	return mMinimum;
}

qreal PlotAxis::maximum() const
{
	return mMaximum;
}

//==================================================================================================

void PlotAxis::setScale(qreal major, qreal minor)
{
	mMajorScale = major;
	mMinorScale = minor;
}

void PlotAxis::setMajorScale(qreal major)
{
	mMajorScale = major;
}

void PlotAxis::setMinorScale(qreal minor)
{
	mMinorScale = minor;
}

qreal PlotAxis::majorScale() const
{
	return mMajorScale;
}

qreal PlotAxis::minorScale() const
{
	return mMinorScale;
}

//==================================================================================================

void PlotAxis::setNumberFormat(NumberFormat format)
{
	mNumberFormat = format;
}

PlotAxis::NumberFormat PlotAxis::numberFormat() const
{
	return mNumberFormat;
}

//==================================================================================================

QSize PlotAxis::size() const
{
	QSize size;

	if (mParent)
	{
		if (mOrientation == Qt::Horizontal)
		{

		}
		else if (mOrientation == Qt::Vertical)
		{

		}
	}

	return size;

	/*QFontMetrics fontMetrics(font());
	int textHeight = 0;
	int titleWidth = 0;
	int maxVerticalLabelWidth = 0;
	int leftHorizontalLabelWidth = 0, rightHorizontalLabelWidth = 0;


	// Pre-calculations
	textHeight = fontMetrics.height();
	titleWidth = fontMetrics.width(mTitle);

	calculateTicks(mVerticalMinimum, mVerticalMaximum, mVerticalAxisMapping, mVerticalMajorTick, mVerticalMinorTick,
		mVerticalMajorTicks, mVerticalMinorTicks);
	calculateTicks(mHorizontalMinimum, mHorizontalMaximum, mHorizontalAxisMapping, mHorizontalMajorTick, mHorizontalMinorTick,
		mHorizontalMajorTicks, mHorizontalMinorTicks);

	for(int i = 0; i < mVerticalMajorTicks.size(); i++)
		maxVerticalLabelWidth = qMax(maxVerticalLabelWidth, fontMetrics.width(toScientific(mVerticalMajorTicks[i], mVerticalAxisNumberingStyle)));
	leftHorizontalLabelWidth = fontMetrics.width(toScientific(mHorizontalMajorTicks.first(), mHorizontalAxisNumberingStyle));
	rightHorizontalLabelWidth = fontMetrics.width(toScientific(mHorizontalMajorTicks.last(), mHorizontalAxisNumberingStyle));

	// Horizontal-axis
	if (mHorizontalAxisTitle != "")
		mHorizontalTitleRect.setRect(mPlotAreaRect.left(), height() - mSpacing - textHeight, mPlotAreaRect.width(), textHeight);

	mHorizontalTickLabelRect.setRect(mPlotAreaRect.left() - leftHorizontalLabelWidth / 2, height() - mSpacing - textHeight,
		mPlotAreaRect.width() + leftHorizontalLabelWidth / 2 + rightHorizontalLabelWidth / 2, textHeight);
	if (mHorizontalAxisTitle != "")
		mHorizontalTickLabelRect.translate(0, -(int)mSpacing - textHeight);

	mHorizontalMinRect.setRect(mHorizontalTickLabelRect.left(), mHorizontalTickLabelRect.top(), leftHorizontalLabelWidth, textHeight);
	mHorizontalMaxRect.setRect(mHorizontalTickLabelRect.right() - rightHorizontalLabelWidth + 1, mHorizontalTickLabelRect.top(), rightHorizontalLabelWidth, textHeight);

	// Vertical-axis
	if (mVerticalAxisTitle != "")
		mVerticalTitleRect.setRect(mSpacing, mPlotAreaRect.top(), textHeight, mPlotAreaRect.height());

	mVerticalTickLabelRect.setRect(mSpacing, mSpacing, maxVerticalLabelWidth, mPlotAreaRect.height() + textHeight / 2);
	if (mTitle != "")
	{
		if (rect.width() / 2 - titleWidth / 2 > mPlotAreaRect.left())
			mVerticalTickLabelRect.translate(0, mSpacing + textHeight / 2);
		else
			mVerticalTickLabelRect.translate(0, mSpacing + textHeight);
	}
	if (mVerticalAxisTitle != "")
		mVerticalTickLabelRect.translate(mSpacing + textHeight, 0);

	mVerticalMaxRect.setRect(mVerticalTickLabelRect.left(), mVerticalTickLabelRect.top(), maxVerticalLabelWidth, textHeight);
	mVerticalMinRect.setRect(mVerticalTickLabelRect.left(), mVerticalTickLabelRect.bottom() - textHeight + 1, maxVerticalLabelWidth, textHeight);*/
}
