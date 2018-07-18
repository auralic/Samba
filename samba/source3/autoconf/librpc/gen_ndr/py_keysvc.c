
/* Python wrapper functions auto-generated by pidl */
#define PY_SSIZE_T_CLEAN 1 /* We use Py_ssize_t for PyArg_ParseTupleAndKeywords */
#include <Python.h>
#include "python/py3compat.h"
#include "includes.h"
#include <pytalloc.h>
#include "librpc/rpc/pyrpc.h"
#include "librpc/rpc/pyrpc_util.h"
#include "librpc/gen_ndr/ndr_keysvc.h"
#include "librpc/gen_ndr/ndr_keysvc_c.h"

/*
 * These functions are here to ensure they can be optimized out by
 * the compiler based on the constant input values
 */

static inline unsigned long long ndr_sizeof2uintmax(size_t var_size)
{
	switch (var_size) {
	case 8:
		return UINT64_MAX;
	case 4:
		return UINT32_MAX;
	case 2:
		return UINT16_MAX;
	case 1:
		return UINT8_MAX;
	}

	return 0;
}

static inline long long ndr_sizeof2intmax(size_t var_size)
{
	switch (var_size) {
	case 8:
		return INT64_MAX;
	case 4:
		return INT32_MAX;
	case 2:
		return INT16_MAX;
	case 1:
		return INT8_MAX;
	}

	return 0;
}

static inline PyObject *ndr_PyLong_FromLongLong(long long v)
{
	if (v > LONG_MAX || v < LONG_MIN) {
		return PyLong_FromLongLong(v);
	} else {
		return PyInt_FromLong(v);
	}
}

static inline PyObject *ndr_PyLong_FromUnsignedLongLong(unsigned long long v)
{
	if (v > LONG_MAX) {
		return PyLong_FromUnsignedLongLong(v);
	} else {
		return PyInt_FromLong(v);
	}
}

static PyTypeObject keysvc_InterfaceType;
static PyTypeObject keysvc_Unknown0_Type;

static PyTypeObject *BaseObject_Type;
static PyTypeObject *ClientConnection_Type;
static PyTypeObject *ndr_syntax_id_Type;


static PyObject *py_keysvc_Unknown0_get_result(PyObject *obj, void *closure)
{
	struct keysvc_Unknown0 *object = (struct keysvc_Unknown0 *)pytalloc_get_ptr(obj);
	PyObject *py_result;
	py_result = PyErr_FromWERROR(object->out.result);
	return py_result;
}

static int py_keysvc_Unknown0_set_result(PyObject *py_obj, PyObject *value, void *closure)
{
	struct keysvc_Unknown0 *object = (struct keysvc_Unknown0 *)pytalloc_get_ptr(py_obj);
	if (value == NULL) {
		PyErr_Format(PyExc_AttributeError, "Cannot delete NDR object: struct object->out.result");
		return -1;
	}
	object->out.result = W_ERROR(PyInt_AsLong(value));
	return 0;
}

static PyGetSetDef py_keysvc_Unknown0_getsetters[] = {
	{
		.name = discard_const_p(char, "result"),
		.get = py_keysvc_Unknown0_get_result,
		.set = py_keysvc_Unknown0_set_result,
		.doc = discard_const_p(char, "PIDL-generated element of type WERROR")
	},
	{ .name = NULL }
};

static PyObject *py_keysvc_Unknown0_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return pytalloc_new(struct keysvc_Unknown0, type);
}

static PyObject *py_keysvc_Unknown0_ndr_opnum(PyTypeObject *type)
{


	return PyInt_FromLong(0);
}

static PyObject *py_keysvc_Unknown0_ndr_pack(PyObject *py_obj, int ndr_inout_flags, uint32_t ndr_push_flags)
{
	const struct ndr_interface_call *call = NULL;
	struct keysvc_Unknown0 *object = (struct keysvc_Unknown0 *)pytalloc_get_ptr(py_obj);
	PyObject *ret = NULL;
	struct ndr_push *push = NULL;
	DATA_BLOB blob;
	enum ndr_err_code err;

	if (ndr_table_keysvc.num_calls < 1) {
		PyErr_SetString(PyExc_TypeError, "Internal Error, ndr_interface_call missing for py_keysvc_Unknown0_ndr_pack");
		return NULL;
	}
	call = &ndr_table_keysvc.calls[0];

	push = ndr_push_init_ctx(pytalloc_get_mem_ctx(py_obj));
	if (push == NULL) {
		PyErr_SetNdrError(NDR_ERR_ALLOC);
		return NULL;
	}

	push->flags |= ndr_push_flags;

	err = call->ndr_push(push, ndr_inout_flags, object);
	if (!NDR_ERR_CODE_IS_SUCCESS(err)) {
		TALLOC_FREE(push);
		PyErr_SetNdrError(err);
		return NULL;
	}
	blob = ndr_push_blob(push);
	ret = PyBytes_FromStringAndSize((char *)blob.data, blob.length);
	TALLOC_FREE(push);
	return ret;
}

static PyObject *py_keysvc_Unknown0_ndr_pack_in(PyObject *py_obj, PyObject *args, PyObject *kwargs)
{
	const char * const kwnames[] = { "bigendian", "ndr64", NULL };
	PyObject *bigendian_obj = NULL;
	PyObject *ndr64_obj = NULL;
	uint32_t ndr_push_flags = 0;

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, "|OO:__ndr_pack_in__",
		discard_const_p(char *, kwnames),
		&bigendian_obj,
		&ndr64_obj)) {
		return NULL;
	}

	if (bigendian_obj && PyObject_IsTrue(bigendian_obj)) {
		ndr_push_flags |= LIBNDR_FLAG_BIGENDIAN;
	}
	if (ndr64_obj && PyObject_IsTrue(ndr64_obj)) {
		ndr_push_flags |= LIBNDR_FLAG_NDR64;
	}

	return py_keysvc_Unknown0_ndr_pack(py_obj, NDR_IN, ndr_push_flags);
}

static PyObject *py_keysvc_Unknown0_ndr_pack_out(PyObject *py_obj, PyObject *args, PyObject *kwargs)
{
	const char * const kwnames[] = { "bigendian", "ndr64", NULL };
	PyObject *bigendian_obj = NULL;
	PyObject *ndr64_obj = NULL;
	uint32_t ndr_push_flags = 0;

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, "|OO:__ndr_pack_out__",
		discard_const_p(char *, kwnames),
		&bigendian_obj,
		&ndr64_obj)) {
		return NULL;
	}

	if (bigendian_obj && PyObject_IsTrue(bigendian_obj)) {
		ndr_push_flags |= LIBNDR_FLAG_BIGENDIAN;
	}
	if (ndr64_obj && PyObject_IsTrue(ndr64_obj)) {
		ndr_push_flags |= LIBNDR_FLAG_NDR64;
	}

	return py_keysvc_Unknown0_ndr_pack(py_obj, NDR_OUT, ndr_push_flags);
}

static PyObject *py_keysvc_Unknown0_ndr_unpack(PyObject *py_obj, const DATA_BLOB *blob, int ndr_inout_flags, uint32_t ndr_pull_flags, bool allow_remaining)
{
	const struct ndr_interface_call *call = NULL;
	struct keysvc_Unknown0 *object = (struct keysvc_Unknown0 *)pytalloc_get_ptr(py_obj);
	struct ndr_pull *pull = NULL;
	enum ndr_err_code err;

	if (ndr_table_keysvc.num_calls < 1) {
		PyErr_SetString(PyExc_TypeError, "Internal Error, ndr_interface_call missing for py_keysvc_Unknown0_ndr_unpack");
		return NULL;
	}
	call = &ndr_table_keysvc.calls[0];

	pull = ndr_pull_init_blob(blob, object);
	if (pull == NULL) {
		PyErr_SetNdrError(NDR_ERR_ALLOC);
		return NULL;
	}

	pull->flags |= ndr_pull_flags;

	err = call->ndr_pull(pull, ndr_inout_flags, object);
	if (!NDR_ERR_CODE_IS_SUCCESS(err)) {
		TALLOC_FREE(pull);
		PyErr_SetNdrError(err);
		return NULL;
	}
	if (!allow_remaining) {
		uint32_t highest_ofs;

		if (pull->offset > pull->relative_highest_offset) {
			highest_ofs = pull->offset;
		} else {
			highest_ofs = pull->relative_highest_offset;
		}
		if (highest_ofs < pull->data_size) {
			err = ndr_pull_error(pull, NDR_ERR_UNREAD_BYTES,
				"not all bytes consumed ofs[%u] size[%u]",
				highest_ofs, pull->data_size);
			TALLOC_FREE(pull);
			PyErr_SetNdrError(err);
			return NULL;
		}
	}

	TALLOC_FREE(pull);
	Py_RETURN_NONE;
}

static PyObject *py_keysvc_Unknown0_ndr_unpack_in(PyObject *py_obj, PyObject *args, PyObject *kwargs)
{
	DATA_BLOB blob;
	Py_ssize_t blob_length = 0;
	const char * const kwnames[] = { "data_blob", "bigendian", "ndr64", "allow_remaining", NULL };
	PyObject *bigendian_obj = NULL;
	PyObject *ndr64_obj = NULL;
	uint32_t ndr_pull_flags = LIBNDR_FLAG_REF_ALLOC;
	PyObject *allow_remaining_obj = NULL;
	bool allow_remaining = false;

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, PYARG_BYTES_LEN "|OOO:__ndr_unpack_in__",
		discard_const_p(char *, kwnames),
		&blob.data, &blob_length,
		&bigendian_obj,
		&ndr64_obj,
		&allow_remaining_obj)) {
		return NULL;
	}
	blob.length = blob_length;

	if (bigendian_obj && PyObject_IsTrue(bigendian_obj)) {
		ndr_pull_flags |= LIBNDR_FLAG_BIGENDIAN;
	}
	if (ndr64_obj && PyObject_IsTrue(ndr64_obj)) {
		ndr_pull_flags |= LIBNDR_FLAG_NDR64;
	}

	if (allow_remaining_obj && PyObject_IsTrue(allow_remaining_obj)) {
		allow_remaining = true;
	}

	return py_keysvc_Unknown0_ndr_unpack(py_obj, &blob, NDR_IN, ndr_pull_flags, allow_remaining);
}

static PyObject *py_keysvc_Unknown0_ndr_unpack_out(PyObject *py_obj, PyObject *args, PyObject *kwargs)
{
	DATA_BLOB blob;
	Py_ssize_t blob_length = 0;
	const char * const kwnames[] = { "data_blob", "bigendian", "ndr64", "allow_remaining", NULL };
	PyObject *bigendian_obj = NULL;
	PyObject *ndr64_obj = NULL;
	uint32_t ndr_pull_flags = LIBNDR_FLAG_REF_ALLOC;
	PyObject *allow_remaining_obj = NULL;
	bool allow_remaining = false;

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, PYARG_BYTES_LEN "|OOO:__ndr_unpack_out__",
		discard_const_p(char *, kwnames),
		&blob.data, &blob_length,
		&bigendian_obj,
		&ndr64_obj,
		&allow_remaining_obj)) {
		return NULL;
	}
	blob.length = blob_length;

	if (bigendian_obj && PyObject_IsTrue(bigendian_obj)) {
		ndr_pull_flags |= LIBNDR_FLAG_BIGENDIAN;
	}
	if (ndr64_obj && PyObject_IsTrue(ndr64_obj)) {
		ndr_pull_flags |= LIBNDR_FLAG_NDR64;
	}

	if (allow_remaining_obj && PyObject_IsTrue(allow_remaining_obj)) {
		allow_remaining = true;
	}

	return py_keysvc_Unknown0_ndr_unpack(py_obj, &blob, NDR_OUT, ndr_pull_flags, allow_remaining);
}

static PyObject *py_keysvc_Unknown0_ndr_print(PyObject *py_obj, const char *name, int ndr_inout_flags)
{
	const struct ndr_interface_call *call = NULL;
	struct keysvc_Unknown0 *object = (struct keysvc_Unknown0 *)pytalloc_get_ptr(py_obj);
	PyObject *ret;
	char *retstr;

	if (ndr_table_keysvc.num_calls < 1) {
		PyErr_SetString(PyExc_TypeError, "Internal Error, ndr_interface_call missing for py_keysvc_Unknown0_ndr_print");
		return NULL;
	}
	call = &ndr_table_keysvc.calls[0];

	retstr = ndr_print_function_string(pytalloc_get_mem_ctx(py_obj), call->ndr_print, name, ndr_inout_flags, object);
	ret = PyStr_FromString(retstr);
	TALLOC_FREE(retstr);

	return ret;
}

static PyObject *py_keysvc_Unknown0_ndr_print_in(PyObject *py_obj)
{
	return py_keysvc_Unknown0_ndr_print(py_obj, "keysvc_Unknown0_in", NDR_IN);
}

static PyObject *py_keysvc_Unknown0_ndr_print_out(PyObject *py_obj)
{
	return py_keysvc_Unknown0_ndr_print(py_obj, "keysvc_Unknown0_out", NDR_OUT);
}

static PyMethodDef py_keysvc_Unknown0_methods[] = {
	{ "opnum", (PyCFunction)py_keysvc_Unknown0_ndr_opnum, METH_NOARGS|METH_CLASS,
		"keysvc.Unknown0.opnum() -> 0 (0x00) " },
	{ "__ndr_pack_in__", (PyCFunction)py_keysvc_Unknown0_ndr_pack_in, METH_VARARGS|METH_KEYWORDS,
		"S.ndr_pack_in(object, bigendian=False, ndr64=False) -> blob\nNDR pack input" },
	{ "__ndr_pack_out__", (PyCFunction)py_keysvc_Unknown0_ndr_pack_out, METH_VARARGS|METH_KEYWORDS,
		"S.ndr_pack_out(object, bigendian=False, ndr64=False) -> blob\nNDR pack output" },
	{ "__ndr_unpack_in__", (PyCFunction)py_keysvc_Unknown0_ndr_unpack_in, METH_VARARGS|METH_KEYWORDS,
		"S.ndr_unpack_in(class, blob, bigendian=False, ndr64=False, allow_remaining=False) -> None\nNDR unpack input" },
	{ "__ndr_unpack_out__", (PyCFunction)py_keysvc_Unknown0_ndr_unpack_out, METH_VARARGS|METH_KEYWORDS,
		"S.ndr_unpack_out(class, blob, bigendian=False, ndr64=False, allow_remaining=False) -> None\nNDR unpack output" },
	{ "__ndr_print_in__", (PyCFunction)py_keysvc_Unknown0_ndr_print_in, METH_NOARGS, "S.ndr_print_in(object) -> None\nNDR print input" },
	{ "__ndr_print_out__", (PyCFunction)py_keysvc_Unknown0_ndr_print_out, METH_NOARGS, "S.ndr_print_out(object) -> None\nNDR print output" },
	{ NULL, NULL, 0, NULL }
};


static PyTypeObject keysvc_Unknown0_Type = {
	PyVarObject_HEAD_INIT(NULL, 0)
	.tp_name = "keysvc.Unknown0",
	.tp_getset = py_keysvc_Unknown0_getsetters,
	.tp_methods = py_keysvc_Unknown0_methods,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_new = py_keysvc_Unknown0_new,
};

static bool pack_py_keysvc_Unknown0_args_in(PyObject *args, PyObject *kwargs, struct keysvc_Unknown0 *r)
{
	const char *kwnames[] = {
		NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, ":keysvc_Unknown0", discard_const_p(char *, kwnames))) {
		return false;
	}

	return true;
}

static PyObject *unpack_py_keysvc_Unknown0_args_out(struct keysvc_Unknown0 *r)
{
	PyObject *result;
	result = Py_None;
	Py_INCREF(result);
	if (!W_ERROR_IS_OK(r->out.result)) {
		PyErr_SetWERROR(r->out.result);
		return NULL;
	}

	return result;
}

const struct PyNdrRpcMethodDef py_ndr_keysvc_methods[] = {
	{ "Unknown0", "S.Unknown0() -> None", (py_dcerpc_call_fn)dcerpc_keysvc_Unknown0_r, (py_data_pack_fn)pack_py_keysvc_Unknown0_args_in, (py_data_unpack_fn)unpack_py_keysvc_Unknown0_args_out, 0, &ndr_table_keysvc },
	{ NULL }
};

static PyObject *interface_keysvc_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return py_dcerpc_interface_init_helper(type, args, kwargs, &ndr_table_keysvc);
}

#define PY_DOC_KEYSVC "Cryptographic Key Services"
static PyTypeObject keysvc_InterfaceType = {
	PyVarObject_HEAD_INIT(NULL, 0)
	.tp_name = "keysvc.keysvc",
	.tp_basicsize = sizeof(dcerpc_InterfaceObject),
	.tp_doc = "keysvc(binding, lp_ctx=None, credentials=None) -> connection\n"
"\n"
"binding should be a DCE/RPC binding string (for example: ncacn_ip_tcp:127.0.0.1)\n"
"lp_ctx should be a path to a smb.conf file or a param.LoadParm object\n"
"credentials should be a credentials.Credentials object.\n\n"PY_DOC_KEYSVC,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_new = interface_keysvc_new,
};

static PyObject *syntax_keysvc_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return py_dcerpc_syntax_init_helper(type, args, kwargs, &ndr_table_keysvc.syntax_id);
}

#define PY_DOC_KEYSVC_SYNTAX "Cryptographic Key Services"
static PyTypeObject keysvc_SyntaxType = {
	PyVarObject_HEAD_INIT(NULL, 0)
	.tp_name = "keysvc.keysvc_abstract_syntax",
	.tp_doc = "keysvc_abstract_syntax()\n"PY_DOC_KEYSVC_SYNTAX,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_new = syntax_keysvc_new,
};

static PyMethodDef keysvc_methods[] = {
	{ NULL, NULL, 0, NULL }
};

static struct PyModuleDef moduledef = {
	PyModuleDef_HEAD_INIT,
	.m_name = "keysvc",
	.m_doc = "keysvc DCE/RPC",
	.m_size = -1,
	.m_methods = keysvc_methods,
};
MODULE_INIT_FUNC(keysvc)
{
	PyObject *m;
	PyObject *dep_talloc;
	PyObject *dep_samba_dcerpc_base;
	PyObject *dep_samba_dcerpc_misc;

	dep_talloc = PyImport_ImportModule("talloc");
	if (dep_talloc == NULL)
		return NULL;

	dep_samba_dcerpc_base = PyImport_ImportModule("samba.dcerpc.base");
	if (dep_samba_dcerpc_base == NULL)
		return NULL;

	dep_samba_dcerpc_misc = PyImport_ImportModule("samba.dcerpc.misc");
	if (dep_samba_dcerpc_misc == NULL)
		return NULL;

	BaseObject_Type = (PyTypeObject *)PyObject_GetAttrString(dep_talloc, "BaseObject");
	if (BaseObject_Type == NULL)
		return NULL;

	ClientConnection_Type = (PyTypeObject *)PyObject_GetAttrString(dep_samba_dcerpc_base, "ClientConnection");
	if (ClientConnection_Type == NULL)
		return NULL;

	ndr_syntax_id_Type = (PyTypeObject *)PyObject_GetAttrString(dep_samba_dcerpc_misc, "ndr_syntax_id");
	if (ndr_syntax_id_Type == NULL)
		return NULL;

	keysvc_Unknown0_Type.tp_base = BaseObject_Type;
	keysvc_Unknown0_Type.tp_basicsize = pytalloc_BaseObject_size();

	keysvc_InterfaceType.tp_base = ClientConnection_Type;

	keysvc_SyntaxType.tp_base = ndr_syntax_id_Type;
	keysvc_SyntaxType.tp_basicsize = pytalloc_BaseObject_size();

	if (PyType_Ready(&keysvc_Unknown0_Type) < 0)
		return NULL;
	if (PyType_Ready(&keysvc_InterfaceType) < 0)
		return NULL;
	if (PyType_Ready(&keysvc_SyntaxType) < 0)
		return NULL;
	if (!PyInterface_AddNdrRpcMethods(&keysvc_InterfaceType, py_ndr_keysvc_methods))
		return NULL;

#ifdef PY_UNKNOWN0_PATCH
	PY_UNKNOWN0_PATCH(&keysvc_Unknown0_Type);
#endif
#ifdef PY_KEYSVC_PATCH
	PY_KEYSVC_PATCH(&keysvc_InterfaceType);
#endif
#ifdef PY_KEYSVC_ABSTRACT_SYNTAX_PATCH
	PY_KEYSVC_ABSTRACT_SYNTAX_PATCH(&keysvc_SyntaxType);
#endif
#ifdef PY_ABSTRACT_SYNTAX_PATCH
	PY_ABSTRACT_SYNTAX_PATCH(&keysvc_SyntaxType);
#endif

	m = PyModule_Create(&moduledef);
	if (m == NULL)
		return NULL;

	Py_INCREF((PyObject *)(void *)&keysvc_Unknown0_Type);
	PyModule_AddObject(m, "Unknown0", (PyObject *)(void *)&keysvc_Unknown0_Type);
	Py_INCREF((PyObject *)(void *)&keysvc_InterfaceType);
	PyModule_AddObject(m, "keysvc", (PyObject *)(void *)&keysvc_InterfaceType);
	Py_INCREF((PyObject *)(void *)&keysvc_SyntaxType);
	PyModule_AddObject(m, "keysvc_abstract_syntax", (PyObject *)(void *)&keysvc_SyntaxType);
	Py_INCREF((PyObject *)(void *)&keysvc_SyntaxType);
	PyModule_AddObject(m, "abstract_syntax", (PyObject *)(void *)&keysvc_SyntaxType);
#ifdef PY_MOD_KEYSVC_PATCH
	PY_MOD_KEYSVC_PATCH(m);
#endif
	return m;

}
