/* PlotAxis.h
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

#ifndef PLOTAXIS_H
#define PLOTAXIS_H

#include <QtWidgets>

#include <PlotSeries.h>

class PlotAxis : public QObject
{
	Q_OBJECT

	friend class PlotWidget;

public:
	enum Mapping { Linear, Logarithmic };
	enum NumberFormat { Normal, Scientific };

protected:
	PlotWidget* mParent;
	Qt::Orientation mOrientation;

	QString mTitle;

	Mapping mMapping;
	qreal mMinimum;
	qreal mMaximum;

	qreal mMajorScale;
	qreal mMinorScale;

	NumberFormat mNumberFormat;

public:
	PlotAxis(Qt::Orientation orientation);
	virtual ~PlotAxis();

	PlotWidget* parent() const;
	Qt::Orientation orientation() const;

	void setTitle(const QString& title);
	QString title() const;

	void setMapping(Mapping mapping);
	Mapping mapping() const;

	void setRange(qreal minimum, qreal maximum);
	void setMinimum(qreal minimum);
	void setMaximum(qreal maximum);
	qreal minimum() const;
	qreal maximum() const;

	void setScale(qreal major, qreal minor);
	void setMajorScale(qreal major);
	void setMinorScale(qreal minor);
	qreal majorScale() const;
	qreal minorScale() const;

	void setNumberFormat(NumberFormat format);
	NumberFormat numberFormat() const;

	virtual QSize size() const;

	/*virtual void paint(QPainter* painter);

protected:
	virtual void mousePressEvent(QMouseEvent* event);
	virtual void mouseMoveEvent(QMouseEvent* event);
	virtual void mouseReleaseEvent(QMouseEvent* event);
	virtual void mouseDoubleClickEvent(QMouseEvent* event);*/
};

#endif
