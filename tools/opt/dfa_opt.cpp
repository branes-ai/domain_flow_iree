//===- dfa_opt.cpp -------------------------------------*- C++ -*-===//
//
// This file is licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
#include <iostream>
#include <filesystem>

/// This test includes the minimal amount of components for dfa-opt, that is
/// the CoreIR, the printer/parser, the bytecode reader/writer, the
/// passmanagement infrastructure and all the instrumentation.
int main(int argc, char **argv) {
	std::cout << "Current path is " << std::filesystem::current_path() << '\n';
	return EXIT_SUCCESS;
}
