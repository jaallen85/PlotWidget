/* PlotGraphWidget.h
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

#ifndef PLOTGRAPHWIDGET_H
#define PLOTGRAPHWIDGET_H

#include <QtWidgets>




class PlotItem
{
	//PlotWidget* parent() const;

	//visible
	//font

	//QPoint pos() const;
	//virtual QSize size() const = 0;
	//QRect rect() const;

	//virtual void render(QPainter* painter) = 0;

signals:

public slots:
}

class PlotLegend : public PlotItem
{

};

class PlotArea : public PlotItem
{

};

class PlotGraphWidget : public QWidget
{
	Q_OBJECT

private:


public:
	PlotGraphWidget();
	~PlotGraphWidget();
};

#endif
