/********************************************************************************
** Form generated from reading UI file 'InsertListDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERTLISTDIALOG_H
#define UI_INSERTLISTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_InsertListDialog
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QCheckBox *orderedListCheck;
    QLabel *label;
    QSpinBox *itemCountSpinner;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *InsertListDialog)
    {
        if (InsertListDialog->objectName().isEmpty())
            InsertListDialog->setObjectName(QStringLiteral("InsertListDialog"));
        InsertListDialog->setWindowModality(Qt::ApplicationModal);
        InsertListDialog->resize(400, 114);
        InsertListDialog->setSizeGripEnabled(false);
        InsertListDialog->setModal(true);
        gridLayout = new QGridLayout(InsertListDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        orderedListCheck = new QCheckBox(InsertListDialog);
        orderedListCheck->setObjectName(QStringLiteral("orderedListCheck"));

        formLayout->setWidget(0, QFormLayout::LabelRole, orderedListCheck);

        label = new QLabel(InsertListDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        itemCountSpinner = new QSpinBox(InsertListDialog);
        itemCountSpinner->setObjectName(QStringLiteral("itemCountSpinner"));
        itemCountSpinner->setMinimum(0);
        itemCountSpinner->setMaximum(10000);
        itemCountSpinner->setValue(1);

        formLayout->setWidget(1, QFormLayout::FieldRole, itemCountSpinner);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(InsertListDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(InsertListDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), InsertListDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), InsertListDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(InsertListDialog);
    } // setupUi

    void retranslateUi(QDialog *InsertListDialog)
    {
        InsertListDialog->setWindowTitle(QApplication::translate("InsertListDialog", "Insert List", nullptr));
        orderedListCheck->setText(QApplication::translate("InsertListDialog", "Ordered List", nullptr));
        label->setText(QApplication::translate("InsertListDialog", "Items:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InsertListDialog: public Ui_InsertListDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERTLISTDIALOG_H
