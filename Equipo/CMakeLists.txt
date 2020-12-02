cmake_minimum_required(VERSION 3.16)
project(ProyectoFinal)

set(CMAKE_CXX_STANDARD 14)

add_executable(ProyectoFinal main.cpp empleado/RecursosHumanosManager.h empleado/Empleado.h empleado/EmpleadoView.h proveedor/Proveedor.h pedidos/Producto.h pedidos/Pedido.h pedidos/PedidosManager.h pedidos/PedidosView.h proveedor/Inventario.h)