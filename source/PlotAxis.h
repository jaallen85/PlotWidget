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

protected:
	PlotWidget* mParent;
	Qt::Orientation mOrientation;

public:
	PlotAxis(Qt::Orientation orientation);
	virtual ~PlotAxis();

	PlotWidget* parent() const;
	Qt::Orientation orientation() const;

	/*virtual QSize size() const;

	virtual void paint(QPainter* painter);

protected:
	virtual void mousePressEvent(QMouseEvent* event);
	virtual void mouseMoveEvent(QMouseEvent* event);
	virtual void mouseReleaseEvent(QMouseEvent* event);
	virtual void mouseDoubleClickEvent(QMouseEvent* event);*/
};

#endif
