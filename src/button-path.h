/*
 * Copyright (c) 2013 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#ifndef _gtkinspector_BUTTONPATH_H_
#define _gtkinspector_BUTTONPATH_H_


#include <gtk/gtk.h>

#define GTKINSPECTOR_TYPE_BUTTONPATH            (gtkinspector_buttonpath_get_type())
#define GTKINSPECTOR_BUTTONPATH(obj)            (G_TYPE_CHECK_INSTANCE_CAST((obj), GTKINSPECTOR_TYPE_BUTTONPATH, GtkinspectorButtonPath))
#define GTKINSPECTOR_BUTTONPATH_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST((klass), GTKINSPECTOR_TYPE_BUTTONPATH, GtkinspectorButtonPathClass))
#define GTKINSPECTOR_IS_BUTTONPATH(obj)         (G_TYPE_CHECK_INSTANCE_TYPE((obj), GTKINSPECTOR_TYPE_BUTTONPATH))
#define GTKINSPECTOR_IS_BUTTONPATH_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE((klass), GTKINSPECTOR_TYPE_BUTTONPATH))
#define GTKINSPECTOR_BUTTONPATH_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS((obj), GTKINSPECTOR_TYPE_BUTTONPATH, GtkinspectorButtonPathClass))


typedef struct _GtkinspectorButtonPathPrivate GtkinspectorButtonPathPrivate;

typedef struct _GtkinspectorButtonPath {
   GtkBox parent;
   GtkinspectorButtonPathPrivate *priv;
} GtkinspectorButtonPath;

typedef struct _GtkinspectorButtonPathClass {
   GtkBoxClass parent;
} GtkinspectorButtonPathClass;


G_BEGIN_DECLS

GType gtkinspector_buttonpath_get_type ();
GtkWidget *gtkinspector_buttonpath_new ();
void gtkinspector_buttonpath_set_widget (GtkinspectorButtonPath *bp,
                                     GtkWidget *widget);

G_END_DECLS


#endif // _gtkinspector_BUTTONPATH_H_

// vim: set et sw=4 ts=4:
