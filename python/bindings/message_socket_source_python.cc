/*
 * Copyright 2021 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(message_socket_source.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(9a72454e6b91e9fa0e2314b6992d1807)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <lora/message_socket_source.h>
// pydoc.h is automatically generated in the build directory
#include <message_socket_source_pydoc.h>

void bind_message_socket_source(py::module& m)
{

    using message_socket_source    = ::gr::lora::message_socket_source;


    py::class_<message_socket_source, gr::block, gr::basic_block,
        std::shared_ptr<message_socket_source>>(m, "message_socket_source", D(message_socket_source))

        .def(py::init(&message_socket_source::make),
           py::arg("addr"),
           py::arg("port"),
           D(message_socket_source,make)
        )
        



        ;




}








