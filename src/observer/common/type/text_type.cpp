//
// Created by wpan on 10/10/24.
//

#include "text_type.h"

#include <common/value.h>
#include <common/lang/comparator.h>
#include <common/log/log.h>
int TextType::compare(const Value &left, const Value &right) const
{
  ASSERT(left.attr_type() == AttrType::TEXT, "left type is not text");
  ASSERT(right.attr_type() == AttrType::TEXT, "right type is not text");

  // 这里就是 TEXT 类型的数据了

  std::string left_val  = left.get_string();
  std::string right_val = right.get_string();

  return common::compare_string(
      &left_val, static_cast<int>(left_val.length()), &right_val, static_cast<int>(right_val.length()));
}
RC TextType::add(const Value &left, const Value &right, Value &result) const
{
  return DataType::add(left, right, result);
}
RC TextType::subtract(const Value &left, const Value &right, Value &result) const
{
  return DataType::subtract(left, right, result);
}
RC TextType::multiply(const Value &left, const Value &right, Value &result) const
{
  return DataType::multiply(left, right, result);
}
RC TextType::negative(const Value &val, Value &result) const { return DataType::negative(val, result); }
RC TextType::set_value_from_str(Value &val, const string &data) const
{
  return DataType::set_value_from_str(val, data);
}
RC TextType::to_string(const Value &val, string &result) const { return DataType::to_string(val, result); }