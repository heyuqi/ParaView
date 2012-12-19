/*=========================================================================

   Program: ParaView
   Module:    $RCSfile$

   Copyright (c) 2005,2006 Sandia Corporation, Kitware Inc.
   All rights reserved.

   ParaView is a free software; you can redistribute it and/or modify it
   under the terms of the ParaView license version 1.2.

   See License_v1.2.txt for the full ParaView license.
   A copy of this license can be obtained by contacting
   Kitware Inc.
   28 Corporate Drive
   Clifton Park, NY 12065
   USA

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHORS OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

========================================================================*/
#ifndef __pqProxySelection_h
#define __pqProxySelection_h

#include <QSet>
#include "pqCoreModule.h"

class pqServerManagerModelItem;
class vtkSMProxySelectionModel;

/// pqProxySelection is used to specify a selection comprising proxies.
/// pqProxySelection provides methods to convert to and from
/// vtkSMProxySelectionModel.
class PQCORE_EXPORT pqProxySelection : public QSet<pqServerManagerModelItem*>
{
  typedef QList<pqServerManagerModelItem> Superclass;
public:
  /// copy values from vtkSMProxySelectionModel. All proxies in the
  /// vtkSMProxySelectionModel must be known to pqServerManagerModel otherwise
  /// it will be ignored. Returns true, if the selection was changed, otherwise
  /// returns false.
  bool copyFrom(vtkSMProxySelectionModel* other);

  /// copy values to vtkSMProxySelectionModel. Clears any existing selection.
  bool copyTo(vtkSMProxySelectionModel* other) const;
};

#endif
