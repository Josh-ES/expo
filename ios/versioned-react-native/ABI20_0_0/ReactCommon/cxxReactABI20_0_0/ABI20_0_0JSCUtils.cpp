// Copyright 2004-present Facebook. All Rights Reserved.

#include "ABI20_0_0JSCUtils.h"

namespace facebook {
namespace ReactABI20_0_0 {

String jsStringFromBigString(JSContextRef ctx, const JSBigString& bigstr) {
  if (bigstr.isAscii()) {
    return String::createExpectingAscii(ctx, bigstr.c_str(), bigstr.size());
  } else {
    return String(ctx, bigstr.c_str());
  }
}

}
}
