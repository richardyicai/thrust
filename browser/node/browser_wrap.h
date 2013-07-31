// Copyright (c) 2013 Stanislas Polu.
// See the LICENSE file.

#ifndef BREACH_BROWSER_NODE_BROWSER_WRAP_H_
#define BREACH_BROWSER_NODE_BROWSER_WRAP_H_

#include "third_party/node/src/node.h"

namespace breach {

class BrowsreWrap : public node::ObjectWrap {
  public:
    static void Init(v8::Handle<v8::Object> exports);

  private:
    static v8::Handle<v8::Value> New(const v8::Arguments& args);

    BrowserWrap();
    ~BrowserWrap();
};

} // namespace breach

#endif // BREACH_BROWSER_NODE_BROWSER_WRAP_H_

