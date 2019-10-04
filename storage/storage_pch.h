// This file is part of Desktop App Toolkit,
// a set of libraries for developing nice desktop applications.
//
// For license and copyright information please follow this link:
// https://github.com/desktop-app/legal/blob/master/LEGAL
//

#include <QtCore/QFile>
#include <QtCore/QFileInfo>
#include <QtCore/QDir>
#include <QtCore/QByteArray>
#include <QtCore/QString>

#include <crl/crl.h>
#include <rpl/rpl.h>

#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <set>

#include <range/v3/all.hpp>

#include "base/flat_map.h"
#include "base/flat_set.h"
#include "base/optional.h"
#include "base/openssl_help.h"
