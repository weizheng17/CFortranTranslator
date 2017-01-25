#include "gen_common.h"

void set_variabledesc_attr(ParseNode * newnode, boost::optional<bool> reference, boost::optional<bool> constant, boost::optional<bool> optional, boost::optional<struct ParseNode *> slice, boost::optional<int> kind ) {
	if (newnode->attr == nullptr) {
		newnode->attr = new VariableDescAttr(newnode);
	}
	if(reference.is_initialized())
		dynamic_cast<VariableDescAttr *>(newnode->attr)->desc.reference = reference.value();
	if (constant.is_initialized())
		dynamic_cast<VariableDescAttr *>(newnode->attr)->desc.constant = constant.value();
	if (optional.is_initialized())
		dynamic_cast<VariableDescAttr *>(newnode->attr)->desc.optional = optional.value();
	if (slice.is_initialized())
		dynamic_cast<VariableDescAttr *>(newnode->attr)->desc.slice = slice.value();
	if (kind.is_initialized())
		dynamic_cast<VariableDescAttr *>(newnode->attr)->desc.kind = kind.value();
}

ParseNode gen_variabledesc_from_dimenslice(ParseNode & dimen_slice) {
	int sliceid = 0; /* if the array has 2 dimensions, sliceid is 0..1 */
	ParseNode dimen = ParseNode(dimen_slice);
	for (sliceid = 0; sliceid < dimen.child.size(); sliceid++)
	{
		if (dimen.child[sliceid]->fs.CurrentTerm.token == TokenMeta::NT_SLICE) {

		}
		else {
			ParseNode tmp = promote_exp_to_slice(*dimen.child[sliceid]);
			delete dimen.child[sliceid];
			dimen.child[sliceid] = new ParseNode(tmp);
		}
		sprintf(codegen_buf, "(%s, %s)"
			/* from, to */
			, dimen.child[sliceid]->child[0]->fs.CurrentTerm.what.c_str()
			, dimen.child[sliceid]->child[1]->fs.CurrentTerm.what.c_str());
		dimen.child[sliceid]->fs.CurrentTerm = Term{ TokenMeta::NT_VARIABLEDESC, string(codegen_buf) };
	}
	return dimen;
}