/**********************************************************************************************************************
This file is part of the Control Toolbox (https://github.com/ethz-adrl/control-toolbox), copyright by ETH Zurich.
Licensed under the BSD-2 license (see LICENSE file in main directory)
**********************************************************************************************************************/

#pragma once

#include "../EuclideanState.h"
#include "../ControlMatrix.h"
#include "../FeedbackMatrix.h"
#include "../StateControlMatrix.h"
#include "../StateMatrix.h"
#include "../ControlVector.h"
#include "../OutputVector.h"
#include "../OutputMatrix.h"

#include "DiscreteArray.h"

namespace ct {
namespace core {

template <size_t STATE_DIM, typename SCALAR = double>
using EuclideanStateArray = DiscreteArray<EuclideanState<STATE_DIM, SCALAR>>;

template <size_t STATE_DIM, typename SCALAR = double>
using StateVectorArray = DiscreteArray<StateVector<STATE_DIM, SCALAR>>;

template <typename SCALAR = double>
using ControlMatrixArray = DiscreteArray<ControlMatrix<SCALAR>>;

template <size_t STATE_DIM, size_t CONTROL_DIM, typename SCALAR = double>
using FeedbackArray = DiscreteArray<FeedbackMatrix<STATE_DIM, CONTROL_DIM, SCALAR>>;

template <size_t STATE_DIM, size_t CONTROL_DIM, typename SCALAR = double>
using StateControlMatrixArray = DiscreteArray<StateControlMatrix<STATE_DIM, CONTROL_DIM, SCALAR>>;

template <size_t STATE_DIM, typename SCALAR = double>
using StateMatrixArray = DiscreteArray<StateMatrix<STATE_DIM, SCALAR>>;

template <typename SCALAR = double>
using ControlVectorArray = DiscreteArray<ControlVector<SCALAR>>;

template <size_t OUTPUT_DIM, typename SCALAR = double>
using OutputVectorArray = DiscreteArray<OutputVector<OUTPUT_DIM, SCALAR>>;

template <size_t OUTPUT_DIM, typename SCALAR = double>
using OutputMatrixArray = DiscreteArray<OutputMatrix<OUTPUT_DIM, SCALAR>>;

}  // namespace core
}  // namespace ct
