//
// Created by wpan on 10/10/24.
//

#ifndef TEXT_TYPE_H
#define TEXT_TYPE_H

#pragma once

#include "common/type/data_type.h"

class TextType : public DataType {
  TextType() : DataType(AttrType::TEXT) {}
  virtual ~TextType();

  int compare(const Value &left, const Value &right) const override;

  RC add(const Value &left, const Value &right, Value &result) const override;
  RC subtract(const Value &left, const Value &right, Value &result) const override;
  RC multiply(const Value &left, const Value &right, Value &result) const override;
  RC negative(const Value &val, Value &result) const override;

  RC set_value_from_str(Value &val, const string &data) const override;

  RC to_string(const Value &val, string &result) const override;
};



#endif //TEXT_TYPE_H
