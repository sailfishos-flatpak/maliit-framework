/* * This file is part of Maliit framework *
 *
 * Copyright (C) 2012 Openismus GmbH
 *
 * Contact: maliit-discuss@lists.maliit.org
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License version 2.1 as published by the Free Software Foundation
 * and appearing in the file LICENSE.LGPL included in the packaging
 * of this file.
 */

#ifndef MALIIT_SERVER_ABSTRACTSURFACEGROUPFACTORY_H
#define MALIIT_SERVER_ABSTRACTSURFACEGROUPFACTORY_H

#include <QSharedPointer>

namespace Maliit {
namespace Server {

class AbstractSurfaceGroup;

class AbstractSurfaceGroupFactory
{
public:
    virtual ~AbstractSurfaceGroupFactory();

    virtual QSharedPointer<AbstractSurfaceGroup> createSurfaceGroup() = 0;
};

} // namespace Server
} // namespace Maliit

#endif // MALIIT_SERVER_ABSTRACTSURFACEGROUPFACTORY_H
