#include "tokenizer.h"
#include "grammar\for90.tab.h"
#include <string>
#include <vector>
#include <map>

using namespace std;

const vector<KeywordMeta> keywords = {
	// .what keyword
	// .token keyword as intent
	// .yytoken yacc terminal

	KeywordMeta{"if"
		, TokenMeta::If
		, YY_IF
	}
	, KeywordMeta{"then"
		, TokenMeta::META_ANY
		, YY_THEN
	}
	, KeywordMeta{"else"
		, TokenMeta::ElseLast
		, YY_ELSE
	}
	, KeywordMeta{"else if"
		, TokenMeta::ElseIf
		, YY_ELSEIF
	}
	, KeywordMeta{"end"
		, TokenMeta::META_ANY
		, YY_END
	}
	, KeywordMeta{"do"
		, TokenMeta::Do
		, YY_DO
	}
	, KeywordMeta{"continue"
		, TokenMeta::Continue
		, YY_CONTINUE
	}
	, KeywordMeta{"while"
		, TokenMeta::While
		, YY_WHILE
	}
	, KeywordMeta{"where"
		, TokenMeta::META_ANY
		, YY_WHERE
	}
	, KeywordMeta{"case"
		, TokenMeta::Case
		, YY_CASE
	}
	, KeywordMeta{"program"
		, TokenMeta::META_ANY
		, YY_PROGRAM
	}
	, KeywordMeta{"function"
		, TokenMeta::META_ANY
		, YY_FUNCTION
	}
	, KeywordMeta{"recursive"
		, TokenMeta::META_ANY
		, YY_RECURSIVE
	}
	, KeywordMeta{"result"
		, TokenMeta::META_ANY
		, YY_RESULT
	}
	, KeywordMeta{"subroutine"
		, TokenMeta::META_ANY
		, YY_SUBROUTINE
	}
	, KeywordMeta{"module"
		, TokenMeta::META_ANY
		, YY_MODULE
	}
	, KeywordMeta{"block"
		, TokenMeta::META_ANY
		, YY_BLOCK
	}
	, KeywordMeta{"implicit"
		, TokenMeta::META_ANY
		, YY_IMPLICIT
	}
	, KeywordMeta{"none"
		, TokenMeta::META_ANY
		, YY_NONE
	}
	, KeywordMeta{"use"
		, TokenMeta::META_ANY
		, YY_USE
	}
	, KeywordMeta{"parameter"
		, TokenMeta::META_ANY
		, YY_PARAMETER
	}
	, KeywordMeta{"format"
		, TokenMeta::META_ANY
		, YY_FORMAT
	}
	, KeywordMeta{"and" 
		, TokenMeta::AndAnd
		, YY_ANDAND
	}
	, KeywordMeta{".or."
		, TokenMeta::OrOr
		, YY_OROR
	}
	, KeywordMeta{".not."
		, TokenMeta::Not
		, YY_NOT
	}
	, KeywordMeta{".eqv."
		, TokenMeta::META_ANY
		, YY_EQV
	}
	, KeywordMeta{".neqv"
		, TokenMeta::META_ANY
		, YY_NEQV
	}
	, KeywordMeta{".true."
		, TokenMeta::True
		, YY_TRUE
	}
	, KeywordMeta{".false."
		, TokenMeta::False
		, YY_FALSE
	}
	, KeywordMeta{".gt."
		, TokenMeta::GT
		, YY_GT
	}
	, KeywordMeta{".ge."
		, TokenMeta::GE
		, YY_GE
	}
	, KeywordMeta{".lt."
		, TokenMeta::LT
		, YY_LT
	}
	, KeywordMeta{".le."
		, TokenMeta::LE
		, YY_LE
	}
	, KeywordMeta{".eq."
		, TokenMeta::EQ
		, YY_EQ
	}
	, KeywordMeta{".neq."
		, TokenMeta::NEQ
		, YY_NEQ
	}
	, KeywordMeta{ "real"
		, TokenMeta::META_ANY
		// YY_FLOAT ָ����һ��float���͵ĳ���
		// YY_FLOAT_T ��float����������
		, YY_FLOAT_T
	}
	, KeywordMeta{ "integer"
		, TokenMeta::META_ANY
		, YY_INTEGER_T
	}
	, KeywordMeta{ "logical"
		, TokenMeta::META_ANY
		, YY_BOOL_T
	}
	, KeywordMeta{ "complex"
		, TokenMeta::META_ANY
		, YY_COMPLEX_T
	}
	, KeywordMeta{ "character"
		, TokenMeta::META_ANY
		, YY_STRING_T
	}
	, KeywordMeta{ "print"
		, TokenMeta::META_ANY
		, YY_PRINT
	}
	, KeywordMeta{ "write"
		, TokenMeta::META_ANY
		, YY_WRITE
	}
	, KeywordMeta{ "read"
		, TokenMeta::META_ANY
		, YY_READ
	}
	, KeywordMeta{ "open"
		, TokenMeta::META_ANY
		, YY_OPEN
	}
	, KeywordMeta{ "close"
		, TokenMeta::META_ANY
		, YY_CLOSE
	}
};


const std::map<std::string, std::vector<std::string> > forward1 = {
	{"else", {"if"}}
};