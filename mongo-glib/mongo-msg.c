/* mongo-msg.c
 *
 * Copyright (C) 2012 Christian Hergert <christian@hergert.me>
 *
 * This file is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This file is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <glib/gi18n.h>

#include "mongo-msg.h"

G_DEFINE_TYPE(MongoMsg, mongo_msg, MONGO_TYPE_MESSAGE)

struct _MongoMsgPrivate
{
   gpointer dummy;
};

enum
{
   PROP_0,
   LAST_PROP
};

//static GParamSpec *gParamSpecs[LAST_PROP];

static void
mongo_msg_finalize (GObject *object)
{
   G_OBJECT_CLASS(mongo_msg_parent_class)->finalize(object);
}

static void
mongo_msg_get_property (GObject    *object,
                        guint       prop_id,
                        GValue     *value,
                        GParamSpec *pspec)
{
   //MongoMsg *msg = MONGO_MSG(object);

   switch (prop_id) {
   default:
      G_OBJECT_WARN_INVALID_PROPERTY_ID(object, prop_id, pspec);
   }
}

static void
mongo_msg_set_property (GObject      *object,
                        guint         prop_id,
                        const GValue *value,
                        GParamSpec   *pspec)
{
   //MongoMsg *msg = MONGO_MSG(object);

   switch (prop_id) {
   default:
      G_OBJECT_WARN_INVALID_PROPERTY_ID(object, prop_id, pspec);
   }
}

static void
mongo_msg_class_init (MongoMsgClass *klass)
{
   GObjectClass *object_class;

   object_class = G_OBJECT_CLASS(klass);
   object_class->finalize = mongo_msg_finalize;
   object_class->get_property = mongo_msg_get_property;
   object_class->set_property = mongo_msg_set_property;
   g_type_class_add_private(object_class, sizeof(MongoMsgPrivate));
}

static void
mongo_msg_init (MongoMsg *msg)
{
   msg->priv =
      G_TYPE_INSTANCE_GET_PRIVATE(msg,
                                  MONGO_TYPE_MSG,
                                  MongoMsgPrivate);
}