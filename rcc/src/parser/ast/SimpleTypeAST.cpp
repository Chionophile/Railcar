#include "SimpleTypeAST.hpp"

#include "errors.hpp"

namespace parser::ast {

  /**
   * @brief Factory function that creates a GlobDefAST
   * 
   * @param tokens 
   * @return unique_ptr<GlobDefAST> 
   */
  unique_ptr<SimpleTypeAST> SimpleTypeAST::parse(deque<lexer::Token>& tokens) {
    auto self = make_unique<SimpleTypeAST>();

    // id
    self->id = IdAST::parse(tokens);

    return self;
  }





}