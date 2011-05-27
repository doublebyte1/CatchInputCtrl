#include "catchinputctrl.h"

static const char *strUnits = 
     QT_TRANSLATE_NOOP("sections", "by Units");
static const char *strBoxes = 
     QT_TRANSLATE_NOOP("sections", "by Boxes");

CatchInputCtrl::CatchInputCtrl(QWidget *parent)
    : QWidget(parent)
{
    setupUi(this);

    connect(this, SIGNAL(blockWidgetsSignals(const bool)), this,
    SLOT(onBlockWidgetsSignals(const bool)));
}

CatchInputCtrl::~CatchInputCtrl()
{

}

void CatchInputCtrl::onBlockWidgetsSignals(bool bBlock)
{
    doubleSpinTotalE->blockSignals(bBlock);
    doubleSpinNoBoxesE->blockSignals(bBlock);
    doubleSpinWeightBox->blockSignals(bBlock);
    spinUnitsE->blockSignals(bBlock);
    doubleSpinWeightUnit->blockSignals(bBlock);
}

bool CatchInputCtrl::checkUnits(QComboBox* cmb)
{
    if (cmbWeightUnits->currentText()!= cmb->currentText()){

     int ret = QMessageBox::warning(this, tr("Catch Input Control"),
                                    tr("For now we only support calculations in the same units.\n"
                                       "Please ensure that the units on \"Weight\" and \"Units\" are the same,\n"
                                       " if you want to visualize the totals!"),
                                       QMessageBox::Ok);

        return false;
    }

    return true;
}

void CatchInputCtrl::adjustTotalWeightFromBoxWeight(double val)
{
    if (!checkUnits(cmbBoxUnits)) return;

    doubleSpinTotalE->setValue(val*doubleSpinNoBoxesE->value());
    updateLabel(qApp->translate("sections", strBoxes),
        QVariant(val*doubleSpinNoBoxesE->value()).toString(),cmbUnitUnits->currentText(),1);
}

void CatchInputCtrl::adjustTotalWeightFromNoBoxes(double val)
{
    if (!checkUnits(cmbBoxUnits)) return;

    doubleSpinTotalE->setValue(val*doubleSpinWeightBox->value());
    updateLabel(qApp->translate("sections", strBoxes),
        QVariant(val*doubleSpinWeightBox->value()).toString(),cmbUnitUnits->currentText(),1);
}

void CatchInputCtrl::adjustTotalWeightFromUnits(double val)
{
    if (!checkUnits(cmbUnitUnits)) return;

    doubleSpinTotalE->setValue(val*(double)spinUnitsE->value());
    updateLabel(qApp->translate("sections", strUnits),
        QVariant(val*(double)spinUnitsE->value()).toString(),cmbUnitUnits->currentText(),2);
}

void CatchInputCtrl::adjustTotalWeightFromUnits(int val)
{
    if (!checkUnits(cmbUnitUnits)) return;

    doubleSpinTotalE->setValue((double)val*doubleSpinWeightUnit->value());
    updateLabel(qApp->translate("sections", strUnits),
        QVariant((double)val*doubleSpinWeightUnit->value()).toString(),cmbUnitUnits->currentText(),2);
}

void CatchInputCtrl::updateLabel(const QString strBase, const QString strNew, const QString strUnits, const int index)
{
    toolBox->setItemText(index,
        strBase + tr(" (Total Weight: ") + strNew + strUnits + tr(" )")); 
}
