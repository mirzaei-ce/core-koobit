// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef KOOBIT_QT_KOOBITADDRESSVALIDATOR_H
#define KOOBIT_QT_KOOBITADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class KoobitAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit KoobitAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Koobit address widget validator, checks for a valid koobit address.
 */
class KoobitAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit KoobitAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // KOOBIT_QT_KOOBITADDRESSVALIDATOR_H
