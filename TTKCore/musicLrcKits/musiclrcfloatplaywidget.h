#ifndef MUSICLRCFLOATPLAYWIDGET_H
#define MUSICLRCFLOATPLAYWIDGET_H

/* =================================================
 * This file is part of the TTK Music Player project
 * Copyright (c) 2015 - 2017 Greedysky Studio
 * All rights reserved!
 * Redistribution and use of the source code or any derivative
 * works are strictly forbiden.
   =================================================*/

#include "musicfloatabstractwidget.h"

class QToolButton;

/*! @brief The class of the lrc play float widget.
 * @author Greedysky <greedysky@163.com>
 */
class MUSIC_LRC_EXPORT MusicLrcFloatPlayWidget : public MusicFloatAbstractWidget
{
    Q_OBJECT
public:
    explicit MusicLrcFloatPlayWidget(QWidget *parent = 0);
    /*!
     * Object contsructor.
     */
    virtual ~MusicLrcFloatPlayWidget();

    static QString getClassName();
    /*!
     * Get class object name.
     */
    virtual void resizeWindow(int width, int height) override;
    /*!
     * Resize window bound by given width and height.
     */

protected:
    QToolButton *m_musicPrevious, *m_musicNext, *m_musicKey;

};

#endif // MUSICLRCFLOATPLAYWIDGET_H
