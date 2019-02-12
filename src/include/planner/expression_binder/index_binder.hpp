//===----------------------------------------------------------------------===//
//                         DuckDB
//
// planner/expression_binder/index_binder.hpp
//
//	
//===----------------------------------------------------------------------===//

#pragma once

#include "planner/expression_binder.hpp"

namespace duckdb {
	
//! The INDEX binder is responsible for binding an expression within an Index statement
class IndexBinder : public ExpressionBinder {
public:
	IndexBinder(Binder &binder, ClientContext &context);

	BindResult BindExpression(unique_ptr<Expression> expr, uint32_t depth) override;
};

}