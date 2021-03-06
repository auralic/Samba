
/* Python wrapper functions auto-generated by pidl */
#define PY_SSIZE_T_CLEAN 1 /* We use Py_ssize_t for PyArg_ParseTupleAndKeywords */
#include <Python.h>
#include "python/py3compat.h"
#include "includes.h"
#include <pytalloc.h>
#include "librpc/rpc/pyrpc.h"
#include "librpc/rpc/pyrpc_util.h"
#include "bin/default/source4/librpc/gen_ndr/ndr_sasl_helpers.h"
#include "bin/default/source4/librpc/gen_ndr/ndr_sasl_helpers_c.h"

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

static PyTypeObject saslauthdRequest_Type;
static PyTypeObject sasl_helpers_InterfaceType;
static PyTypeObject decode_saslauthd_Type;

static PyTypeObject *BaseObject_Type;
static PyTypeObject *ClientConnection_Type;
static PyTypeObject *ndr_syntax_id_Type;

static PyObject *py_saslauthdRequest_get_authid_length(PyObject *obj, void *closure)
{
	struct saslauthdRequest *object = (struct saslauthdRequest *)pytalloc_get_ptr(obj);
	PyObject *py_authid_length;
	py_authid_length = PyInt_FromLong((uint16_t)object->authid_length);
	return py_authid_length;
}

static int py_saslauthdRequest_set_authid_length(PyObject *py_obj, PyObject *value, void *closure)
{
	struct saslauthdRequest *object = (struct saslauthdRequest *)pytalloc_get_ptr(py_obj);
	if (value == NULL) {
		PyErr_Format(PyExc_AttributeError, "Cannot delete NDR object: struct object->authid_length");
		return -1;
	}
	{
		const unsigned long long uint_max = ndr_sizeof2uintmax(sizeof(object->authid_length));
		if (PyLong_Check(value)) {
			unsigned long long test_var;
			test_var = PyLong_AsUnsignedLongLong(value);
			if (PyErr_Occurred() != NULL) {
				return -1;
			}
			if (test_var > uint_max) {
				PyErr_Format(PyExc_OverflowError, "Expected type %s or %s within range 0 - %llu, got %llu",\
				  PyInt_Type.tp_name, PyLong_Type.tp_name, uint_max, test_var);
				return -1;
			}
			object->authid_length = test_var;
		} else if (PyInt_Check(value)) {
			long test_var;
			test_var = PyInt_AsLong(value);
			if (test_var < 0 || test_var > uint_max) {
				PyErr_Format(PyExc_OverflowError, "Expected type %s or %s within range 0 - %llu, got %ld",\
				  PyInt_Type.tp_name, PyLong_Type.tp_name, uint_max, test_var);
				return -1;
			}
			object->authid_length = test_var;
		} else {
			PyErr_Format(PyExc_TypeError, "Expected type %s or %s",\
			  PyInt_Type.tp_name, PyLong_Type.tp_name);
			return -1;
		}
	}
	return 0;
}

static PyObject *py_saslauthdRequest_get_authid(PyObject *obj, void *closure)
{
	struct saslauthdRequest *object = (struct saslauthdRequest *)pytalloc_get_ptr(obj);
	PyObject *py_authid;
	if (object->authid == NULL) {
		py_authid = Py_None;
		Py_INCREF(py_authid);
	} else {
		py_authid = PyUnicode_Decode(object->authid, strlen(object->authid), "utf-8", "ignore");
	}
	return py_authid;
}

static int py_saslauthdRequest_set_authid(PyObject *py_obj, PyObject *value, void *closure)
{
	struct saslauthdRequest *object = (struct saslauthdRequest *)pytalloc_get_ptr(py_obj);
	if (value == NULL) {
		PyErr_Format(PyExc_AttributeError, "Cannot delete NDR object: struct object->authid");
		return -1;
	}
	{
		const char *test_str;
		const char *talloc_str;
		PyObject *unicode = NULL;
		if (PyUnicode_Check(value)) {
			unicode = PyUnicode_AsEncodedString(value, "utf-8", "ignore");
			if (unicode == NULL) {
				PyErr_NoMemory();
				return -1;
			}
			test_str = PyBytes_AS_STRING(unicode);
		} else if (PyBytes_Check(value)) {
			test_str = PyBytes_AS_STRING(value);
		} else {
			PyErr_Format(PyExc_TypeError, "Expected string or unicode object, got %s", Py_TYPE(value)->tp_name);
			return -1;
		}
		talloc_str = talloc_strdup(pytalloc_get_mem_ctx(py_obj), test_str);
		if (unicode != NULL) {
			Py_DECREF(unicode);
		}
		if (talloc_str == NULL) {
			PyErr_NoMemory();
			return -1;
		}
		object->authid = talloc_str;
	}
	return 0;
}

static PyObject *py_saslauthdRequest_get_passwd_length(PyObject *obj, void *closure)
{
	struct saslauthdRequest *object = (struct saslauthdRequest *)pytalloc_get_ptr(obj);
	PyObject *py_passwd_length;
	py_passwd_length = PyInt_FromLong((uint16_t)object->passwd_length);
	return py_passwd_length;
}

static int py_saslauthdRequest_set_passwd_length(PyObject *py_obj, PyObject *value, void *closure)
{
	struct saslauthdRequest *object = (struct saslauthdRequest *)pytalloc_get_ptr(py_obj);
	if (value == NULL) {
		PyErr_Format(PyExc_AttributeError, "Cannot delete NDR object: struct object->passwd_length");
		return -1;
	}
	{
		const unsigned long long uint_max = ndr_sizeof2uintmax(sizeof(object->passwd_length));
		if (PyLong_Check(value)) {
			unsigned long long test_var;
			test_var = PyLong_AsUnsignedLongLong(value);
			if (PyErr_Occurred() != NULL) {
				return -1;
			}
			if (test_var > uint_max) {
				PyErr_Format(PyExc_OverflowError, "Expected type %s or %s within range 0 - %llu, got %llu",\
				  PyInt_Type.tp_name, PyLong_Type.tp_name, uint_max, test_var);
				return -1;
			}
			object->passwd_length = test_var;
		} else if (PyInt_Check(value)) {
			long test_var;
			test_var = PyInt_AsLong(value);
			if (test_var < 0 || test_var > uint_max) {
				PyErr_Format(PyExc_OverflowError, "Expected type %s or %s within range 0 - %llu, got %ld",\
				  PyInt_Type.tp_name, PyLong_Type.tp_name, uint_max, test_var);
				return -1;
			}
			object->passwd_length = test_var;
		} else {
			PyErr_Format(PyExc_TypeError, "Expected type %s or %s",\
			  PyInt_Type.tp_name, PyLong_Type.tp_name);
			return -1;
		}
	}
	return 0;
}

static PyObject *py_saslauthdRequest_get_passwd(PyObject *obj, void *closure)
{
	struct saslauthdRequest *object = (struct saslauthdRequest *)pytalloc_get_ptr(obj);
	PyObject *py_passwd;
	py_passwd = PyList_New(object->passwd_length);
	if (py_passwd == NULL) {
		return NULL;
	}
	{
		int passwd_cntr_0;
		for (passwd_cntr_0 = 0; passwd_cntr_0 < (object->passwd_length); passwd_cntr_0++) {
			PyObject *py_passwd_0;
			py_passwd_0 = PyInt_FromLong((uint16_t)object->passwd[passwd_cntr_0]);
			PyList_SetItem(py_passwd, passwd_cntr_0, py_passwd_0);
		}
	}
	return py_passwd;
}

static int py_saslauthdRequest_set_passwd(PyObject *py_obj, PyObject *value, void *closure)
{
	struct saslauthdRequest *object = (struct saslauthdRequest *)pytalloc_get_ptr(py_obj);
	if (value == NULL) {
		PyErr_Format(PyExc_AttributeError, "Cannot delete NDR object: struct object->passwd");
		return -1;
	}
	PY_CHECK_TYPE(&PyList_Type, value, return -1;);
	{
		int passwd_cntr_0;
		object->passwd = talloc_array_ptrtype(pytalloc_get_mem_ctx(py_obj), object->passwd, PyList_GET_SIZE(value));
		if (!object->passwd) { return -1;; }
		talloc_set_name_const(object->passwd, "ARRAY: object->passwd");
		for (passwd_cntr_0 = 0; passwd_cntr_0 < PyList_GET_SIZE(value); passwd_cntr_0++) {
			if (PyList_GET_ITEM(value, passwd_cntr_0) == NULL) {
				PyErr_Format(PyExc_AttributeError, "Cannot delete NDR object: struct object->passwd[passwd_cntr_0]");
				return -1;
			}
			{
				const unsigned long long uint_max = ndr_sizeof2uintmax(sizeof(object->passwd[passwd_cntr_0]));
				if (PyLong_Check(PyList_GET_ITEM(value, passwd_cntr_0))) {
					unsigned long long test_var;
					test_var = PyLong_AsUnsignedLongLong(PyList_GET_ITEM(value, passwd_cntr_0));
					if (PyErr_Occurred() != NULL) {
						return -1;
					}
					if (test_var > uint_max) {
						PyErr_Format(PyExc_OverflowError, "Expected type %s or %s within range 0 - %llu, got %llu",\
						  PyInt_Type.tp_name, PyLong_Type.tp_name, uint_max, test_var);
						return -1;
					}
					object->passwd[passwd_cntr_0] = test_var;
				} else if (PyInt_Check(PyList_GET_ITEM(value, passwd_cntr_0))) {
					long test_var;
					test_var = PyInt_AsLong(PyList_GET_ITEM(value, passwd_cntr_0));
					if (test_var < 0 || test_var > uint_max) {
						PyErr_Format(PyExc_OverflowError, "Expected type %s or %s within range 0 - %llu, got %ld",\
						  PyInt_Type.tp_name, PyLong_Type.tp_name, uint_max, test_var);
						return -1;
					}
					object->passwd[passwd_cntr_0] = test_var;
				} else {
					PyErr_Format(PyExc_TypeError, "Expected type %s or %s",\
					  PyInt_Type.tp_name, PyLong_Type.tp_name);
					return -1;
				}
			}
		}
	}
	return 0;
}

static PyObject *py_saslauthdRequest_get_service_length(PyObject *obj, void *closure)
{
	struct saslauthdRequest *object = (struct saslauthdRequest *)pytalloc_get_ptr(obj);
	PyObject *py_service_length;
	py_service_length = PyInt_FromLong((uint16_t)object->service_length);
	return py_service_length;
}

static int py_saslauthdRequest_set_service_length(PyObject *py_obj, PyObject *value, void *closure)
{
	struct saslauthdRequest *object = (struct saslauthdRequest *)pytalloc_get_ptr(py_obj);
	if (value == NULL) {
		PyErr_Format(PyExc_AttributeError, "Cannot delete NDR object: struct object->service_length");
		return -1;
	}
	{
		const unsigned long long uint_max = ndr_sizeof2uintmax(sizeof(object->service_length));
		if (PyLong_Check(value)) {
			unsigned long long test_var;
			test_var = PyLong_AsUnsignedLongLong(value);
			if (PyErr_Occurred() != NULL) {
				return -1;
			}
			if (test_var > uint_max) {
				PyErr_Format(PyExc_OverflowError, "Expected type %s or %s within range 0 - %llu, got %llu",\
				  PyInt_Type.tp_name, PyLong_Type.tp_name, uint_max, test_var);
				return -1;
			}
			object->service_length = test_var;
		} else if (PyInt_Check(value)) {
			long test_var;
			test_var = PyInt_AsLong(value);
			if (test_var < 0 || test_var > uint_max) {
				PyErr_Format(PyExc_OverflowError, "Expected type %s or %s within range 0 - %llu, got %ld",\
				  PyInt_Type.tp_name, PyLong_Type.tp_name, uint_max, test_var);
				return -1;
			}
			object->service_length = test_var;
		} else {
			PyErr_Format(PyExc_TypeError, "Expected type %s or %s",\
			  PyInt_Type.tp_name, PyLong_Type.tp_name);
			return -1;
		}
	}
	return 0;
}

static PyObject *py_saslauthdRequest_get_service(PyObject *obj, void *closure)
{
	struct saslauthdRequest *object = (struct saslauthdRequest *)pytalloc_get_ptr(obj);
	PyObject *py_service;
	if (object->service == NULL) {
		py_service = Py_None;
		Py_INCREF(py_service);
	} else {
		py_service = PyUnicode_Decode(object->service, strlen(object->service), "utf-8", "ignore");
	}
	return py_service;
}

static int py_saslauthdRequest_set_service(PyObject *py_obj, PyObject *value, void *closure)
{
	struct saslauthdRequest *object = (struct saslauthdRequest *)pytalloc_get_ptr(py_obj);
	if (value == NULL) {
		PyErr_Format(PyExc_AttributeError, "Cannot delete NDR object: struct object->service");
		return -1;
	}
	{
		const char *test_str;
		const char *talloc_str;
		PyObject *unicode = NULL;
		if (PyUnicode_Check(value)) {
			unicode = PyUnicode_AsEncodedString(value, "utf-8", "ignore");
			if (unicode == NULL) {
				PyErr_NoMemory();
				return -1;
			}
			test_str = PyBytes_AS_STRING(unicode);
		} else if (PyBytes_Check(value)) {
			test_str = PyBytes_AS_STRING(value);
		} else {
			PyErr_Format(PyExc_TypeError, "Expected string or unicode object, got %s", Py_TYPE(value)->tp_name);
			return -1;
		}
		talloc_str = talloc_strdup(pytalloc_get_mem_ctx(py_obj), test_str);
		if (unicode != NULL) {
			Py_DECREF(unicode);
		}
		if (talloc_str == NULL) {
			PyErr_NoMemory();
			return -1;
		}
		object->service = talloc_str;
	}
	return 0;
}

static PyObject *py_saslauthdRequest_get_realm_length(PyObject *obj, void *closure)
{
	struct saslauthdRequest *object = (struct saslauthdRequest *)pytalloc_get_ptr(obj);
	PyObject *py_realm_length;
	py_realm_length = PyInt_FromLong((uint16_t)object->realm_length);
	return py_realm_length;
}

static int py_saslauthdRequest_set_realm_length(PyObject *py_obj, PyObject *value, void *closure)
{
	struct saslauthdRequest *object = (struct saslauthdRequest *)pytalloc_get_ptr(py_obj);
	if (value == NULL) {
		PyErr_Format(PyExc_AttributeError, "Cannot delete NDR object: struct object->realm_length");
		return -1;
	}
	{
		const unsigned long long uint_max = ndr_sizeof2uintmax(sizeof(object->realm_length));
		if (PyLong_Check(value)) {
			unsigned long long test_var;
			test_var = PyLong_AsUnsignedLongLong(value);
			if (PyErr_Occurred() != NULL) {
				return -1;
			}
			if (test_var > uint_max) {
				PyErr_Format(PyExc_OverflowError, "Expected type %s or %s within range 0 - %llu, got %llu",\
				  PyInt_Type.tp_name, PyLong_Type.tp_name, uint_max, test_var);
				return -1;
			}
			object->realm_length = test_var;
		} else if (PyInt_Check(value)) {
			long test_var;
			test_var = PyInt_AsLong(value);
			if (test_var < 0 || test_var > uint_max) {
				PyErr_Format(PyExc_OverflowError, "Expected type %s or %s within range 0 - %llu, got %ld",\
				  PyInt_Type.tp_name, PyLong_Type.tp_name, uint_max, test_var);
				return -1;
			}
			object->realm_length = test_var;
		} else {
			PyErr_Format(PyExc_TypeError, "Expected type %s or %s",\
			  PyInt_Type.tp_name, PyLong_Type.tp_name);
			return -1;
		}
	}
	return 0;
}

static PyObject *py_saslauthdRequest_get_realm(PyObject *obj, void *closure)
{
	struct saslauthdRequest *object = (struct saslauthdRequest *)pytalloc_get_ptr(obj);
	PyObject *py_realm;
	if (object->realm == NULL) {
		py_realm = Py_None;
		Py_INCREF(py_realm);
	} else {
		py_realm = PyUnicode_Decode(object->realm, strlen(object->realm), "utf-8", "ignore");
	}
	return py_realm;
}

static int py_saslauthdRequest_set_realm(PyObject *py_obj, PyObject *value, void *closure)
{
	struct saslauthdRequest *object = (struct saslauthdRequest *)pytalloc_get_ptr(py_obj);
	if (value == NULL) {
		PyErr_Format(PyExc_AttributeError, "Cannot delete NDR object: struct object->realm");
		return -1;
	}
	{
		const char *test_str;
		const char *talloc_str;
		PyObject *unicode = NULL;
		if (PyUnicode_Check(value)) {
			unicode = PyUnicode_AsEncodedString(value, "utf-8", "ignore");
			if (unicode == NULL) {
				PyErr_NoMemory();
				return -1;
			}
			test_str = PyBytes_AS_STRING(unicode);
		} else if (PyBytes_Check(value)) {
			test_str = PyBytes_AS_STRING(value);
		} else {
			PyErr_Format(PyExc_TypeError, "Expected string or unicode object, got %s", Py_TYPE(value)->tp_name);
			return -1;
		}
		talloc_str = talloc_strdup(pytalloc_get_mem_ctx(py_obj), test_str);
		if (unicode != NULL) {
			Py_DECREF(unicode);
		}
		if (talloc_str == NULL) {
			PyErr_NoMemory();
			return -1;
		}
		object->realm = talloc_str;
	}
	return 0;
}

static PyGetSetDef py_saslauthdRequest_getsetters[] = {
	{
		.name = discard_const_p(char, "authid_length"),
		.get = py_saslauthdRequest_get_authid_length,
		.set = py_saslauthdRequest_set_authid_length,
		.doc = discard_const_p(char, "PIDL-generated element of base type uint16")
	},
	{
		.name = discard_const_p(char, "authid"),
		.get = py_saslauthdRequest_get_authid,
		.set = py_saslauthdRequest_set_authid,
		.doc = discard_const_p(char, "PIDL-generated element of base type uint8")
	},
	{
		.name = discard_const_p(char, "passwd_length"),
		.get = py_saslauthdRequest_get_passwd_length,
		.set = py_saslauthdRequest_set_passwd_length,
		.doc = discard_const_p(char, "PIDL-generated element of base type uint16")
	},
	{
		.name = discard_const_p(char, "passwd"),
		.get = py_saslauthdRequest_get_passwd,
		.set = py_saslauthdRequest_set_passwd,
		.doc = discard_const_p(char, "PIDL-generated element of base type uint8")
	},
	{
		.name = discard_const_p(char, "service_length"),
		.get = py_saslauthdRequest_get_service_length,
		.set = py_saslauthdRequest_set_service_length,
		.doc = discard_const_p(char, "PIDL-generated element of base type uint16")
	},
	{
		.name = discard_const_p(char, "service"),
		.get = py_saslauthdRequest_get_service,
		.set = py_saslauthdRequest_set_service,
		.doc = discard_const_p(char, "PIDL-generated element of base type uint8")
	},
	{
		.name = discard_const_p(char, "realm_length"),
		.get = py_saslauthdRequest_get_realm_length,
		.set = py_saslauthdRequest_set_realm_length,
		.doc = discard_const_p(char, "PIDL-generated element of base type uint16")
	},
	{
		.name = discard_const_p(char, "realm"),
		.get = py_saslauthdRequest_get_realm,
		.set = py_saslauthdRequest_set_realm,
		.doc = discard_const_p(char, "PIDL-generated element of base type uint8")
	},
	{ .name = NULL }
};

static PyObject *py_saslauthdRequest_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return pytalloc_new(struct saslauthdRequest, type);
}

static PyObject *py_saslauthdRequest_ndr_pack(PyObject *py_obj)
{
	struct saslauthdRequest *object = (struct saslauthdRequest *)pytalloc_get_ptr(py_obj);
	PyObject *ret = NULL;
	DATA_BLOB blob;
	enum ndr_err_code err;
	TALLOC_CTX *tmp_ctx = talloc_new(pytalloc_get_mem_ctx(py_obj));
	if (tmp_ctx == NULL) {
		PyErr_SetNdrError(NDR_ERR_ALLOC);
		return NULL;
	}
	err = ndr_push_struct_blob(&blob, tmp_ctx, object, (ndr_push_flags_fn_t)ndr_push_saslauthdRequest);
	if (!NDR_ERR_CODE_IS_SUCCESS(err)) {
		TALLOC_FREE(tmp_ctx);
		PyErr_SetNdrError(err);
		return NULL;
	}

	ret = PyBytes_FromStringAndSize((char *)blob.data, blob.length);
	TALLOC_FREE(tmp_ctx);
	return ret;
}

static PyObject *py_saslauthdRequest_ndr_unpack(PyObject *py_obj, PyObject *args, PyObject *kwargs)
{
	struct saslauthdRequest *object = (struct saslauthdRequest *)pytalloc_get_ptr(py_obj);
	DATA_BLOB blob;
	Py_ssize_t blob_length = 0;
	enum ndr_err_code err;
	const char * const kwnames[] = { "data_blob", "allow_remaining", NULL };
	PyObject *allow_remaining_obj = NULL;
	bool allow_remaining = false;

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, PYARG_BYTES_LEN "|O:__ndr_unpack__",
		discard_const_p(char *, kwnames),
		&blob.data, &blob_length,
		&allow_remaining_obj)) {
		return NULL;
	}
	blob.length = blob_length;

	if (allow_remaining_obj && PyObject_IsTrue(allow_remaining_obj)) {
		allow_remaining = true;
	}

	if (allow_remaining) {
		err = ndr_pull_struct_blob(&blob, pytalloc_get_mem_ctx(py_obj), object, (ndr_pull_flags_fn_t)ndr_pull_saslauthdRequest);
	} else {
		err = ndr_pull_struct_blob_all(&blob, pytalloc_get_mem_ctx(py_obj), object, (ndr_pull_flags_fn_t)ndr_pull_saslauthdRequest);
	}
	if (!NDR_ERR_CODE_IS_SUCCESS(err)) {
		PyErr_SetNdrError(err);
		return NULL;
	}

	Py_RETURN_NONE;
}

static PyObject *py_saslauthdRequest_ndr_print(PyObject *py_obj)
{
	struct saslauthdRequest *object = (struct saslauthdRequest *)pytalloc_get_ptr(py_obj);
	PyObject *ret;
	char *retstr;

	retstr = ndr_print_struct_string(pytalloc_get_mem_ctx(py_obj), (ndr_print_fn_t)ndr_print_saslauthdRequest, "saslauthdRequest", object);
	ret = PyStr_FromString(retstr);
	talloc_free(retstr);

	return ret;
}

static PyMethodDef py_saslauthdRequest_methods[] = {
	{ "__ndr_pack__", (PyCFunction)py_saslauthdRequest_ndr_pack, METH_NOARGS, "S.ndr_pack(object) -> blob\nNDR pack" },
	{ "__ndr_unpack__", (PyCFunction)py_saslauthdRequest_ndr_unpack, METH_VARARGS|METH_KEYWORDS, "S.ndr_unpack(class, blob, allow_remaining=False) -> None\nNDR unpack" },
	{ "__ndr_print__", (PyCFunction)py_saslauthdRequest_ndr_print, METH_NOARGS, "S.ndr_print(object) -> None\nNDR print" },
	{ NULL, NULL, 0, NULL }
};


static PyTypeObject saslauthdRequest_Type = {
	PyVarObject_HEAD_INIT(NULL, 0)
	.tp_name = "sasl_helpers.saslauthdRequest",
	.tp_getset = py_saslauthdRequest_getsetters,
	.tp_methods = py_saslauthdRequest_methods,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_new = py_saslauthdRequest_new,
};



static PyObject *py_decode_saslauthd_in_get_req(PyObject *obj, void *closure)
{
	struct decode_saslauthd *object = (struct decode_saslauthd *)pytalloc_get_ptr(obj);
	PyObject *py_req;
	py_req = pytalloc_reference_ex(&saslauthdRequest_Type, pytalloc_get_mem_ctx(obj), &object->in.req);
	return py_req;
}

static int py_decode_saslauthd_in_set_req(PyObject *py_obj, PyObject *value, void *closure)
{
	struct decode_saslauthd *object = (struct decode_saslauthd *)pytalloc_get_ptr(py_obj);
	if (value == NULL) {
		PyErr_Format(PyExc_AttributeError, "Cannot delete NDR object: struct object->in.req");
		return -1;
	}
	PY_CHECK_TYPE(&saslauthdRequest_Type, value, return -1;);
	if (talloc_reference(pytalloc_get_mem_ctx(py_obj), pytalloc_get_mem_ctx(value)) == NULL) {
		PyErr_NoMemory();
		return -1;
	}
	object->in.req = *(struct saslauthdRequest *)pytalloc_get_ptr(value);
	return 0;
}

static PyGetSetDef py_decode_saslauthd_getsetters[] = {
	{
		.name = discard_const_p(char, "in_req"),
		.get = py_decode_saslauthd_in_get_req,
		.set = py_decode_saslauthd_in_set_req,
		.doc = discard_const_p(char, "PIDL-generated element of base type saslauthdRequest")
	},
	{ .name = NULL }
};

static PyObject *py_decode_saslauthd_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return pytalloc_new(struct decode_saslauthd, type);
}

static PyObject *py_decode_saslauthd_ndr_opnum(PyTypeObject *type)
{


	return PyInt_FromLong(0);
}

static PyObject *py_decode_saslauthd_ndr_pack(PyObject *py_obj, int ndr_inout_flags, uint32_t ndr_push_flags)
{
	const struct ndr_interface_call *call = NULL;
	struct decode_saslauthd *object = (struct decode_saslauthd *)pytalloc_get_ptr(py_obj);
	PyObject *ret = NULL;
	struct ndr_push *push = NULL;
	DATA_BLOB blob;
	enum ndr_err_code err;

	if (ndr_table_sasl_helpers.num_calls < 1) {
		PyErr_SetString(PyExc_TypeError, "Internal Error, ndr_interface_call missing for py_decode_saslauthd_ndr_pack");
		return NULL;
	}
	call = &ndr_table_sasl_helpers.calls[0];

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

static PyObject *py_decode_saslauthd_ndr_pack_in(PyObject *py_obj, PyObject *args, PyObject *kwargs)
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

	return py_decode_saslauthd_ndr_pack(py_obj, NDR_IN, ndr_push_flags);
}

static PyObject *py_decode_saslauthd_ndr_pack_out(PyObject *py_obj, PyObject *args, PyObject *kwargs)
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

	return py_decode_saslauthd_ndr_pack(py_obj, NDR_OUT, ndr_push_flags);
}

static PyObject *py_decode_saslauthd_ndr_unpack(PyObject *py_obj, const DATA_BLOB *blob, int ndr_inout_flags, uint32_t ndr_pull_flags, bool allow_remaining)
{
	const struct ndr_interface_call *call = NULL;
	struct decode_saslauthd *object = (struct decode_saslauthd *)pytalloc_get_ptr(py_obj);
	struct ndr_pull *pull = NULL;
	enum ndr_err_code err;

	if (ndr_table_sasl_helpers.num_calls < 1) {
		PyErr_SetString(PyExc_TypeError, "Internal Error, ndr_interface_call missing for py_decode_saslauthd_ndr_unpack");
		return NULL;
	}
	call = &ndr_table_sasl_helpers.calls[0];

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

static PyObject *py_decode_saslauthd_ndr_unpack_in(PyObject *py_obj, PyObject *args, PyObject *kwargs)
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

	return py_decode_saslauthd_ndr_unpack(py_obj, &blob, NDR_IN, ndr_pull_flags, allow_remaining);
}

static PyObject *py_decode_saslauthd_ndr_unpack_out(PyObject *py_obj, PyObject *args, PyObject *kwargs)
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

	return py_decode_saslauthd_ndr_unpack(py_obj, &blob, NDR_OUT, ndr_pull_flags, allow_remaining);
}

static PyObject *py_decode_saslauthd_ndr_print(PyObject *py_obj, const char *name, int ndr_inout_flags)
{
	const struct ndr_interface_call *call = NULL;
	struct decode_saslauthd *object = (struct decode_saslauthd *)pytalloc_get_ptr(py_obj);
	PyObject *ret;
	char *retstr;

	if (ndr_table_sasl_helpers.num_calls < 1) {
		PyErr_SetString(PyExc_TypeError, "Internal Error, ndr_interface_call missing for py_decode_saslauthd_ndr_print");
		return NULL;
	}
	call = &ndr_table_sasl_helpers.calls[0];

	retstr = ndr_print_function_string(pytalloc_get_mem_ctx(py_obj), call->ndr_print, name, ndr_inout_flags, object);
	ret = PyStr_FromString(retstr);
	TALLOC_FREE(retstr);

	return ret;
}

static PyObject *py_decode_saslauthd_ndr_print_in(PyObject *py_obj)
{
	return py_decode_saslauthd_ndr_print(py_obj, "decode_saslauthd_in", NDR_IN);
}

static PyObject *py_decode_saslauthd_ndr_print_out(PyObject *py_obj)
{
	return py_decode_saslauthd_ndr_print(py_obj, "decode_saslauthd_out", NDR_OUT);
}

static PyMethodDef py_decode_saslauthd_methods[] = {
	{ "opnum", (PyCFunction)py_decode_saslauthd_ndr_opnum, METH_NOARGS|METH_CLASS,
		"sasl_helpers.decode_saslauthd.opnum() -> 0 (0x00) " },
	{ "__ndr_pack_in__", (PyCFunction)py_decode_saslauthd_ndr_pack_in, METH_VARARGS|METH_KEYWORDS,
		"S.ndr_pack_in(object, bigendian=False, ndr64=False) -> blob\nNDR pack input" },
	{ "__ndr_pack_out__", (PyCFunction)py_decode_saslauthd_ndr_pack_out, METH_VARARGS|METH_KEYWORDS,
		"S.ndr_pack_out(object, bigendian=False, ndr64=False) -> blob\nNDR pack output" },
	{ "__ndr_unpack_in__", (PyCFunction)py_decode_saslauthd_ndr_unpack_in, METH_VARARGS|METH_KEYWORDS,
		"S.ndr_unpack_in(class, blob, bigendian=False, ndr64=False, allow_remaining=False) -> None\nNDR unpack input" },
	{ "__ndr_unpack_out__", (PyCFunction)py_decode_saslauthd_ndr_unpack_out, METH_VARARGS|METH_KEYWORDS,
		"S.ndr_unpack_out(class, blob, bigendian=False, ndr64=False, allow_remaining=False) -> None\nNDR unpack output" },
	{ "__ndr_print_in__", (PyCFunction)py_decode_saslauthd_ndr_print_in, METH_NOARGS, "S.ndr_print_in(object) -> None\nNDR print input" },
	{ "__ndr_print_out__", (PyCFunction)py_decode_saslauthd_ndr_print_out, METH_NOARGS, "S.ndr_print_out(object) -> None\nNDR print output" },
	{ NULL, NULL, 0, NULL }
};


static PyTypeObject decode_saslauthd_Type = {
	PyVarObject_HEAD_INIT(NULL, 0)
	.tp_name = "sasl_helpers.decode_saslauthd",
	.tp_getset = py_decode_saslauthd_getsetters,
	.tp_methods = py_decode_saslauthd_methods,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_new = py_decode_saslauthd_new,
};

static bool pack_py_decode_saslauthd_args_in(PyObject *args, PyObject *kwargs, struct decode_saslauthd *r)
{
	PyObject *py_req;
	const char *kwnames[] = {
		"req", NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O:decode_saslauthd", discard_const_p(char *, kwnames), &py_req)) {
		return false;
	}

	if (py_req == NULL) {
		PyErr_Format(PyExc_AttributeError, "Cannot delete NDR object: struct r->in.req");
		return false;
	}
	PY_CHECK_TYPE(&saslauthdRequest_Type, py_req, return false;);
	if (talloc_reference(r, pytalloc_get_mem_ctx(py_req)) == NULL) {
		PyErr_NoMemory();
		return false;
	}
	r->in.req = *(struct saslauthdRequest *)pytalloc_get_ptr(py_req);
	return true;
}

static PyObject *unpack_py_decode_saslauthd_args_out(struct decode_saslauthd *r)
{
	PyObject *result;
	result = Py_None;
	Py_INCREF(result);
	return result;
}

const struct PyNdrRpcMethodDef py_ndr_sasl_helpers_methods[] = {
	{ "decode_saslauthd", "S.decode_saslauthd(req) -> None", (py_dcerpc_call_fn)dcerpc_decode_saslauthd_r, (py_data_pack_fn)pack_py_decode_saslauthd_args_in, (py_data_unpack_fn)unpack_py_decode_saslauthd_args_out, 0, &ndr_table_sasl_helpers },
	{ NULL }
};

static PyObject *interface_sasl_helpers_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return py_dcerpc_interface_init_helper(type, args, kwargs, &ndr_table_sasl_helpers);
}

#define PY_DOC_SASL_HELPERS "SASL helpers"
static PyTypeObject sasl_helpers_InterfaceType = {
	PyVarObject_HEAD_INIT(NULL, 0)
	.tp_name = "sasl_helpers.sasl_helpers",
	.tp_basicsize = sizeof(dcerpc_InterfaceObject),
	.tp_doc = "sasl_helpers(binding, lp_ctx=None, credentials=None) -> connection\n"
"\n"
"binding should be a DCE/RPC binding string (for example: ncacn_ip_tcp:127.0.0.1)\n"
"lp_ctx should be a path to a smb.conf file or a param.LoadParm object\n"
"credentials should be a credentials.Credentials object.\n\n"PY_DOC_SASL_HELPERS,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_new = interface_sasl_helpers_new,
};

static PyObject *syntax_sasl_helpers_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return py_dcerpc_syntax_init_helper(type, args, kwargs, &ndr_table_sasl_helpers.syntax_id);
}

#define PY_DOC_SASL_HELPERS_SYNTAX "SASL helpers"
static PyTypeObject sasl_helpers_SyntaxType = {
	PyVarObject_HEAD_INIT(NULL, 0)
	.tp_name = "sasl_helpers.sasl_helpers_abstract_syntax",
	.tp_doc = "sasl_helpers_abstract_syntax()\n"PY_DOC_SASL_HELPERS_SYNTAX,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_new = syntax_sasl_helpers_new,
};

static PyMethodDef sasl_helpers_methods[] = {
	{ NULL, NULL, 0, NULL }
};

static struct PyModuleDef moduledef = {
	PyModuleDef_HEAD_INIT,
	.m_name = "sasl_helpers",
	.m_doc = "sasl_helpers DCE/RPC",
	.m_size = -1,
	.m_methods = sasl_helpers_methods,
};
MODULE_INIT_FUNC(sasl_helpers)
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

	saslauthdRequest_Type.tp_base = BaseObject_Type;
	saslauthdRequest_Type.tp_basicsize = pytalloc_BaseObject_size();

	decode_saslauthd_Type.tp_base = BaseObject_Type;
	decode_saslauthd_Type.tp_basicsize = pytalloc_BaseObject_size();

	sasl_helpers_InterfaceType.tp_base = ClientConnection_Type;

	sasl_helpers_SyntaxType.tp_base = ndr_syntax_id_Type;
	sasl_helpers_SyntaxType.tp_basicsize = pytalloc_BaseObject_size();

	if (PyType_Ready(&saslauthdRequest_Type) < 0)
		return NULL;
	if (PyType_Ready(&decode_saslauthd_Type) < 0)
		return NULL;
	if (PyType_Ready(&sasl_helpers_InterfaceType) < 0)
		return NULL;
	if (PyType_Ready(&sasl_helpers_SyntaxType) < 0)
		return NULL;
	if (!PyInterface_AddNdrRpcMethods(&sasl_helpers_InterfaceType, py_ndr_sasl_helpers_methods))
		return NULL;

#ifdef PY_SASLAUTHDREQUEST_PATCH
	PY_SASLAUTHDREQUEST_PATCH(&saslauthdRequest_Type);
#endif
#ifdef PY_DECODE_SASLAUTHD_PATCH
	PY_DECODE_SASLAUTHD_PATCH(&decode_saslauthd_Type);
#endif
#ifdef PY_SASL_HELPERS_PATCH
	PY_SASL_HELPERS_PATCH(&sasl_helpers_InterfaceType);
#endif
#ifdef PY_SASL_HELPERS_ABSTRACT_SYNTAX_PATCH
	PY_SASL_HELPERS_ABSTRACT_SYNTAX_PATCH(&sasl_helpers_SyntaxType);
#endif
#ifdef PY_ABSTRACT_SYNTAX_PATCH
	PY_ABSTRACT_SYNTAX_PATCH(&sasl_helpers_SyntaxType);
#endif

	m = PyModule_Create(&moduledef);
	if (m == NULL)
		return NULL;

	Py_INCREF((PyObject *)(void *)&saslauthdRequest_Type);
	PyModule_AddObject(m, "saslauthdRequest", (PyObject *)(void *)&saslauthdRequest_Type);
	Py_INCREF((PyObject *)(void *)&decode_saslauthd_Type);
	PyModule_AddObject(m, "decode_saslauthd", (PyObject *)(void *)&decode_saslauthd_Type);
	Py_INCREF((PyObject *)(void *)&sasl_helpers_InterfaceType);
	PyModule_AddObject(m, "sasl_helpers", (PyObject *)(void *)&sasl_helpers_InterfaceType);
	Py_INCREF((PyObject *)(void *)&sasl_helpers_SyntaxType);
	PyModule_AddObject(m, "sasl_helpers_abstract_syntax", (PyObject *)(void *)&sasl_helpers_SyntaxType);
	Py_INCREF((PyObject *)(void *)&sasl_helpers_SyntaxType);
	PyModule_AddObject(m, "abstract_syntax", (PyObject *)(void *)&sasl_helpers_SyntaxType);
#ifdef PY_MOD_SASL_HELPERS_PATCH
	PY_MOD_SASL_HELPERS_PATCH(m);
#endif
	return m;

}
