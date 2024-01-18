#pragma once

#include <QPushButton>

#include "system/hardware/hw.h"
#include "selfdrive/ui/qt/widgets/controls.h"


class TextParamControl : public ButtonControl {
  Q_OBJECT

public:
  TextParamControl(QString theLabel, QString theDescription, QString theWindowTitle, QString theWindowInfo, QString theParam, QString theDefaultValueDisplay, QString theDefaultValue, QString icon);

private:
  QString param_name;
  QString window_info;
  QString window_title;
  QLabel param_label;
  QString description_txt;
  QString label_txt;
  QString default_value_display;
  Params params;

  QString default_value;
  QString value;

  void refresh();
};