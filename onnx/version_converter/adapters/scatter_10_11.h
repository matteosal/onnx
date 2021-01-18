/*
 * SPDX-License-Identifier: Apache-2.0
 */

// Adapter for Scatter in default domain from version 10 to 11

#pragma once

namespace ONNX_NAMESPACE { namespace version_conversion {

class Scatter_10_11 final : public Adapter {
  public:
    explicit Scatter_10_11()
      : Adapter("Scatter", OpSetID(10), OpSetID(11)) {}

    void adapt_scatter_10_11(std::shared_ptr<Graph> graph, Node* node) const {
    }

    void adapt(std::shared_ptr<Graph> graph, Node* node) const override {
      adapt_scatter_10_11(graph, node);
    }
};

}} // namespace ONNX_NAMESPACE::version_conversion
