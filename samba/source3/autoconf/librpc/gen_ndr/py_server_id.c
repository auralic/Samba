
/* Python wrapper functions auto-generated by pidl */
#define PY_SSIZE_T_CLEAN 1 /* We use Py_ssize_t for PyArg_ParseTupleAndKeywords */
#include <Python.h>
#include "python/py3compat.h"
#include "includes.h"
#include <pytalloc.h>
#include "librpc/rpc/pyrpc.h"
#include "librpc/rpc/pyrpc_util.h"
#include "librpc/gen_ndr/ndr_server_id.h"
#include "librpc/gen_ndr/ndr_server_id_c.h"

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

static PyTypeObject server_id_Type;

static PyTypeObject *BaseObject_Type;

static PyObject *py_server_id_get_pid(PyObject *obj, void *closure)
{
	struct server_id *object = (struct server_id *)pytalloc_get_ptr(obj);
	PyObject *py_pid;
	py_pid = ndr_PyLong_FromUnsignedLongLong(object->pid);
	return py_pid;
}

static int py_server_id_set_pid(PyObject *py_obj, PyObject *value, void *closure)
{
	struct server_id *object = (struct server_id *)pytalloc_get_ptr(py_obj);
	if (value == NULL) {
		PyErr_Format(PyExc_AttributeError, "Cannot delete NDR object: struct object->pid");
		return -1;
	}
	{
		const unsigned long long uint_max = ndr_sizeof2uintmax(sizeof(object->pid));
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
			object->pid = test_var;
		} else if (PyInt_Check(value)) {
			long test_var;
			test_var = PyInt_AsLong(value);
			if (test_var < 0 || test_var > uint_max) {
				PyErr_Format(PyExc_OverflowError, "Expected type %s or %s within range 0 - %llu, got %ld",\
				  PyInt_Type.tp_name, PyLong_Type.tp_name, uint_max, test_var);
				return -1;
			}
			object->pid = test_var;
		} else {
			PyErr_Format(PyExc_TypeError, "Expected type %s or %s",\
			  PyInt_Type.tp_name, PyLong_Type.tp_name);
			return -1;
		}
	}
	return 0;
}

static PyObject *py_server_id_get_task_id(PyObject *obj, void *closure)
{
	struct server_id *object = (struct server_id *)pytalloc_get_ptr(obj);
	PyObject *py_task_id;
	py_task_id = ndr_PyLong_FromUnsignedLongLong((uint32_t)object->task_id);
	return py_task_id;
}

static int py_server_id_set_task_id(PyObject *py_obj, PyObject *value, void *closure)
{
	struct server_id *object = (struct server_id *)pytalloc_get_ptr(py_obj);
	if (value == NULL) {
		PyErr_Format(PyExc_AttributeError, "Cannot delete NDR object: struct object->task_id");
		return -1;
	}
	{
		const unsigned long long uint_max = ndr_sizeof2uintmax(sizeof(object->task_id));
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
			object->task_id = test_var;
		} else if (PyInt_Check(value)) {
			long test_var;
			test_var = PyInt_AsLong(value);
			if (test_var < 0 || test_var > uint_max) {
				PyErr_Format(PyExc_OverflowError, "Expected type %s or %s within range 0 - %llu, got %ld",\
				  PyInt_Type.tp_name, PyLong_Type.tp_name, uint_max, test_var);
				return -1;
			}
			object->task_id = test_var;
		} else {
			PyErr_Format(PyExc_TypeError, "Expected type %s or %s",\
			  PyInt_Type.tp_name, PyLong_Type.tp_name);
			return -1;
		}
	}
	return 0;
}

static PyObject *py_server_id_get_vnn(PyObject *obj, void *closure)
{
	struct server_id *object = (struct server_id *)pytalloc_get_ptr(obj);
	PyObject *py_vnn;
	py_vnn = ndr_PyLong_FromUnsignedLongLong((uint32_t)object->vnn);
	return py_vnn;
}

static int py_server_id_set_vnn(PyObject *py_obj, PyObject *value, void *closure)
{
	struct server_id *object = (struct server_id *)pytalloc_get_ptr(py_obj);
	if (value == NULL) {
		PyErr_Format(PyExc_AttributeError, "Cannot delete NDR object: struct object->vnn");
		return -1;
	}
	{
		const unsigned long long uint_max = ndr_sizeof2uintmax(sizeof(object->vnn));
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
			object->vnn = test_var;
		} else if (PyInt_Check(value)) {
			long test_var;
			test_var = PyInt_AsLong(value);
			if (test_var < 0 || test_var > uint_max) {
				PyErr_Format(PyExc_OverflowError, "Expected type %s or %s within range 0 - %llu, got %ld",\
				  PyInt_Type.tp_name, PyLong_Type.tp_name, uint_max, test_var);
				return -1;
			}
			object->vnn = test_var;
		} else {
			PyErr_Format(PyExc_TypeError, "Expected type %s or %s",\
			  PyInt_Type.tp_name, PyLong_Type.tp_name);
			return -1;
		}
	}
	return 0;
}

static PyObject *py_server_id_get_unique_id(PyObject *obj, void *closure)
{
	struct server_id *object = (struct server_id *)pytalloc_get_ptr(obj);
	PyObject *py_unique_id;
	py_unique_id = ndr_PyLong_FromUnsignedLongLong(object->unique_id);
	return py_unique_id;
}

static int py_server_id_set_unique_id(PyObject *py_obj, PyObject *value, void *closure)
{
	struct server_id *object = (struct server_id *)pytalloc_get_ptr(py_obj);
	if (value == NULL) {
		PyErr_Format(PyExc_AttributeError, "Cannot delete NDR object: struct object->unique_id");
		return -1;
	}
	{
		const unsigned long long uint_max = ndr_sizeof2uintmax(sizeof(object->unique_id));
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
			object->unique_id = test_var;
		} else if (PyInt_Check(value)) {
			long test_var;
			test_var = PyInt_AsLong(value);
			if (test_var < 0 || test_var > uint_max) {
				PyErr_Format(PyExc_OverflowError, "Expected type %s or %s within range 0 - %llu, got %ld",\
				  PyInt_Type.tp_name, PyLong_Type.tp_name, uint_max, test_var);
				return -1;
			}
			object->unique_id = test_var;
		} else {
			PyErr_Format(PyExc_TypeError, "Expected type %s or %s",\
			  PyInt_Type.tp_name, PyLong_Type.tp_name);
			return -1;
		}
	}
	return 0;
}

static PyGetSetDef py_server_id_getsetters[] = {
	{
		.name = discard_const_p(char, "pid"),
		.get = py_server_id_get_pid,
		.set = py_server_id_set_pid,
		.doc = discard_const_p(char, "PIDL-generated element of base type hyper")
	},
	{
		.name = discard_const_p(char, "task_id"),
		.get = py_server_id_get_task_id,
		.set = py_server_id_set_task_id,
		.doc = discard_const_p(char, "PIDL-generated element of base type uint32")
	},
	{
		.name = discard_const_p(char, "vnn"),
		.get = py_server_id_get_vnn,
		.set = py_server_id_set_vnn,
		.doc = discard_const_p(char, "PIDL-generated element of base type uint32")
	},
	{
		.name = discard_const_p(char, "unique_id"),
		.get = py_server_id_get_unique_id,
		.set = py_server_id_set_unique_id,
		.doc = discard_const_p(char, "PIDL-generated element of base type hyper")
	},
	{ .name = NULL }
};

static PyObject *py_server_id_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return pytalloc_new(struct server_id, type);
}

static PyObject *py_server_id_ndr_pack(PyObject *py_obj)
{
	struct server_id *object = (struct server_id *)pytalloc_get_ptr(py_obj);
	PyObject *ret = NULL;
	DATA_BLOB blob;
	enum ndr_err_code err;
	TALLOC_CTX *tmp_ctx = talloc_new(pytalloc_get_mem_ctx(py_obj));
	if (tmp_ctx == NULL) {
		PyErr_SetNdrError(NDR_ERR_ALLOC);
		return NULL;
	}
	err = ndr_push_struct_blob(&blob, tmp_ctx, object, (ndr_push_flags_fn_t)ndr_push_server_id);
	if (!NDR_ERR_CODE_IS_SUCCESS(err)) {
		TALLOC_FREE(tmp_ctx);
		PyErr_SetNdrError(err);
		return NULL;
	}

	ret = PyBytes_FromStringAndSize((char *)blob.data, blob.length);
	TALLOC_FREE(tmp_ctx);
	return ret;
}

static PyObject *py_server_id_ndr_unpack(PyObject *py_obj, PyObject *args, PyObject *kwargs)
{
	struct server_id *object = (struct server_id *)pytalloc_get_ptr(py_obj);
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
		err = ndr_pull_struct_blob(&blob, pytalloc_get_mem_ctx(py_obj), object, (ndr_pull_flags_fn_t)ndr_pull_server_id);
	} else {
		err = ndr_pull_struct_blob_all(&blob, pytalloc_get_mem_ctx(py_obj), object, (ndr_pull_flags_fn_t)ndr_pull_server_id);
	}
	if (!NDR_ERR_CODE_IS_SUCCESS(err)) {
		PyErr_SetNdrError(err);
		return NULL;
	}

	Py_RETURN_NONE;
}

static PyObject *py_server_id_ndr_print(PyObject *py_obj)
{
	struct server_id *object = (struct server_id *)pytalloc_get_ptr(py_obj);
	PyObject *ret;
	char *retstr;

	retstr = ndr_print_struct_string(pytalloc_get_mem_ctx(py_obj), (ndr_print_fn_t)ndr_print_server_id, "server_id", object);
	ret = PyStr_FromString(retstr);
	talloc_free(retstr);

	return ret;
}

static PyMethodDef py_server_id_methods[] = {
	{ "__ndr_pack__", (PyCFunction)py_server_id_ndr_pack, METH_NOARGS, "S.ndr_pack(object) -> blob\nNDR pack" },
	{ "__ndr_unpack__", (PyCFunction)py_server_id_ndr_unpack, METH_VARARGS|METH_KEYWORDS, "S.ndr_unpack(class, blob, allow_remaining=False) -> None\nNDR unpack" },
	{ "__ndr_print__", (PyCFunction)py_server_id_ndr_print, METH_NOARGS, "S.ndr_print(object) -> None\nNDR print" },
	{ NULL, NULL, 0, NULL }
};


static PyTypeObject server_id_Type = {
	PyVarObject_HEAD_INIT(NULL, 0)
	.tp_name = "server_id.server_id",
	.tp_getset = py_server_id_getsetters,
	.tp_methods = py_server_id_methods,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_new = py_server_id_new,
};

static PyMethodDef server_id_methods[] = {
	{ NULL, NULL, 0, NULL }
};

static struct PyModuleDef moduledef = {
	PyModuleDef_HEAD_INIT,
	.m_name = "server_id",
	.m_doc = "server_id DCE/RPC",
	.m_size = -1,
	.m_methods = server_id_methods,
};
MODULE_INIT_FUNC(server_id)
{
	PyObject *m;
	PyObject *dep_talloc;

	dep_talloc = PyImport_ImportModule("talloc");
	if (dep_talloc == NULL)
		return NULL;

	BaseObject_Type = (PyTypeObject *)PyObject_GetAttrString(dep_talloc, "BaseObject");
	if (BaseObject_Type == NULL)
		return NULL;

	server_id_Type.tp_base = BaseObject_Type;
	server_id_Type.tp_basicsize = pytalloc_BaseObject_size();

	if (PyType_Ready(&server_id_Type) < 0)
		return NULL;
#ifdef PY_SERVER_ID_PATCH
	PY_SERVER_ID_PATCH(&server_id_Type);
#endif

	m = PyModule_Create(&moduledef);
	if (m == NULL)
		return NULL;

	PyModule_AddObject(m, "NONCLUSTER_VNN", ndr_PyLong_FromUnsignedLongLong(0xFFFFFFFF));
	PyModule_AddObject(m, "SERVERID_UNIQUE_ID_NOT_TO_VERIFY", ndr_PyLong_FromUnsignedLongLong(0xFFFFFFFFFFFFFFFFULL));
	Py_INCREF((PyObject *)(void *)&server_id_Type);
	PyModule_AddObject(m, "server_id", (PyObject *)(void *)&server_id_Type);
#ifdef PY_MOD_SERVER_ID_PATCH
	PY_MOD_SERVER_ID_PATCH(m);
#endif
	return m;

}
