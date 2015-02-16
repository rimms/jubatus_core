// Jubatus: Online machine learning framework for distributed environment
// Copyright (C) 2011 Preferred Networks and Nippon Telegraph and Telephone Corporation.
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License version 2.1 as published by the Free Software Foundation.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA

#ifndef JUBATUS_CORE_FV_CONVERTER_WORD_SPLITTER_HPP_
#define JUBATUS_CORE_FV_CONVERTER_WORD_SPLITTER_HPP_

#include <string>
#include <utility>
#include <vector>

#include "string_feature.hpp"

namespace jubatus {
namespace core {
namespace fv_converter {

class word_splitter : public string_feature {
 public:
  word_splitter() {
  }
  virtual ~word_splitter() {
  }

  // Returns all word boundaries this splitter found.
  // Each baoudary is represented as a pair of a beginning position
  // and its length.
  virtual void split(
      const std::string& string,
      std::vector<std::pair<size_t, size_t> >& ret_boundaries) const = 0;

  void extract(
      const std::string& text,
      std::vector<string_feature_element>& result) const;
};

}  // namespace fv_converter
}  // namespace core
}  // namespace jubatus

#endif  // JUBATUS_CORE_FV_CONVERTER_WORD_SPLITTER_HPP_
