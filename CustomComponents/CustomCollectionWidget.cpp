#include "CustomCollectionWidget.h"

#include <QFormLayout>
#include <QGroupBox>
#include <QLabel>
#include <QVBoxLayout>
#include "RadioButton.h"
#if defined(_MSC_VER) && (_MSC_VER >= 1600)
# pragma execution_character_set("utf-8")
#endif
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    render();
}

Widget::~Widget()
{
}

void Widget::render()
{
    ArgumentsClass argument1;
    argument1.setGroupName("");
    CustomClass custom1;
    custom1.setDataType(DataType::QStringType);
    custom1.setLabel(tr("非定常"));
    custom1.setComponentType(ComponentType::RadioButton);
    custom1.setDefaultValue(tr("是"));
    QList<QString> candidateValueList1={};
    candidateValueList1<<tr("是")<<tr("否");
    for (int i=0;i<candidateValueList1.size();i++) {
            custom1.setCandidateValue(candidateValueList1.at(i));
    }
    custom1.setEditable(true);
    custom1.setRequired(true);
    custom1.setValue(tr("是"));
    argument1.AddArgument(custom1);
    setWidgetList(argument1);

    ArgumentsClass argument2;
    argument2.setGroupName(tr("模型"));
    CustomClass custom2;
    custom2.setDataType(DataType::QStringType);
    custom2.setLabel(tr("流体模型"));
    custom2.setComponentType(ComponentType::RadioButton);
    custom2.setDefaultValue(tr("湍流"));
    QList<QString> candidateValueList2={};
    candidateValueList2<<tr("层流")<<tr("湍流");
    for (int i=0;i<candidateValueList2.size();i++) {
            custom2.setCandidateValue(candidateValueList2.at(i));
    }
    custom2.setEditable(true);
    custom2.setRequired(true);
    custom2.setValue(tr("湍流"));
    argument2.AddArgument(custom2);
    CustomClass custom3;
    custom3.setDataType(DataType::QStringType);
    custom3.setLabel(tr("能量方程"));
    custom3.setComponentType(ComponentType::RadioButton);
    custom3.setDefaultValue(tr("不开启"));
    QList<QString> candidateValueList3={};
    candidateValueList2<<tr("开启")<<tr("不开启");
    for (int i=0;i<candidateValueList3.size();i++) {
            custom3.setCandidateValue(candidateValueList3.at(i));
    }
    custom3.setEditable(true);
    custom3.setRequired(true);
    custom3.setValue(tr("不开启"));
    argument2.AddArgument(custom3);
    CustomClass custom4;
    custom4.setDataType(DataType::QStringType);
    custom4.setLabel(tr("粘性更新"));
    custom4.setComponentType(ComponentType::RadioButton);
    custom4.setDefaultValue(tr("开启"));
    QList<QString> candidateValueList4={};
    candidateValueList2<<tr("开启")<<tr("不开启");
    for (int i=0;i<candidateValueList4.size();i++) {
            custom4.setCandidateValue(candidateValueList4.at(i));
    }
    custom4.setEditable(true);
    custom4.setRequired(true);
    custom4.setValue(tr("开启"));
    argument2.AddArgument(custom4);
    CustomClass custom5;
    custom5.setDataType(DataType::QStringType);
    custom5.setLabel(tr("多相流"));
    custom5.setComponentType(ComponentType::RadioButton);
    custom5.setDefaultValue(tr("不开启"));
    QList<QString> candidateValueList5={};
    candidateValueList2<<tr("开启")<<tr("不开启");
    for (int i=0;i<candidateValueList5.size();i++) {
            custom5.setCandidateValue(candidateValueList5.at(i));
    }
    custom5.setEditable(true);
    custom5.setRequired(true);
    custom5.setValue(tr("不开启"));
    argument2.AddArgument(custom5);

    ArgumentsClass argument3;
    argument3.setGroupName(tr(""));
    CustomClass custom6;
    custom6.setDataType(DataType::QStringType);
    custom6.setLabel(tr("高级设置"));
    custom6.setComponentType(ComponentType::RadioButton);
    custom6.setDefaultValue(tr("不开启"));
    QList<QString> candidateValueList6={};
    candidateValueList2<<tr("开启")<<tr("不开启");
    for (int i=0;i<candidateValueList6.size();i++) {
            custom6.setCandidateValue(candidateValueList6.at(i));
    }
    custom6.setEditable(true);
    custom6.setRequired(true);
    custom6.setValue(tr("不开启"));
    argument3.AddArgument(custom6);

    QVBoxLayout* VBoxLayout = new QVBoxLayout();//设置垂直布局
    QFormLayout* FormLayout1 = new QFormLayout();//设置Form布局
    QFormLayout* FormLayout2 = new QFormLayout();//设置Form布局
    QFormLayout* FormLayout3 = new QFormLayout();//设置Form布局
    QGroupBox *groupbox1=new QGroupBox();
    QGroupBox *groupbox2=new QGroupBox();
    QGroupBox *groupbox3=new QGroupBox();
    QLabel *label1=new QLabel(argument1.getGroupName());
    QLabel *label11=new QLabel(custom1.Label());
    QLabel *label2=new QLabel(argument2.getGroupName());
    QLabel *label21=new QLabel(custom2.Label());
    QLabel *label22=new QLabel(custom3.Label());
    QLabel *label23=new QLabel(custom4.Label());
    QLabel *label24=new QLabel(custom5.Label());
    QLabel *label3=new QLabel(argument3.getGroupName());
    QLabel *label31=new QLabel(custom6.Label());
    QRadioButton *radiobutton11=new QRadioButton(custom1.defaultValue());
    QRadioButton *radiobutton21=new QRadioButton(custom2.defaultValue());
    QRadioButton *radiobutton22=new QRadioButton(custom3.defaultValue());
    QRadioButton *radiobutton23=new QRadioButton(custom4.defaultValue());
    QRadioButton *radiobutton24=new QRadioButton(custom5.defaultValue());
    QRadioButton *radiobutton31=new QRadioButton(custom6.defaultValue());
    FormLayout1->addRow(label11,radiobutton11);
    FormLayout2->addRow(label21,radiobutton21);
    FormLayout2->addRow(label22,radiobutton22);
    FormLayout2->addRow(label23,radiobutton23);
    FormLayout2->addRow(label24,radiobutton24);
    FormLayout3->addRow(label31,radiobutton31);
    groupbox1->setLayout(FormLayout1);
    groupbox1->setTitle("");
    groupbox2->setLayout(FormLayout2);
    groupbox2->setTitle("");
    groupbox3->setLayout(FormLayout3);
    groupbox3->setTitle("");
    VBoxLayout->addWidget(label1);
    VBoxLayout->addWidget(groupbox1);
    VBoxLayout->addWidget(label2);
    VBoxLayout->addWidget(groupbox2);
    VBoxLayout->addWidget(label3);
    VBoxLayout->addWidget(groupbox3);
    setLayout(VBoxLayout);

}

bool Widget::submit()
{
    return true;
}

void Widget::setWidgetList(ArgumentsClass c)
{
    _widgetList.push_back(c);
}

void Widget::AddCustomObjList(AbstructCustomClass c)
{
    _customObjList.push_back(c);
}

