case NNKind::Relu:
    return "Relu";
case NNKind::Conv:
    return "Conv";
case NNKind::ConvRelu:
    return "ConvRelu";
case NNKind::ConvTranspose:
    return "ConvTranspose";
case NNKind::AveragePool:
    return "AveragePool";
case NNKind::AveragePoolRelu:
    return "AveragePoolRelu";
case NNKind::MaxPool:
    return "MaxPool";
case NNKind::MaxPoolRelu:
    return "MaxPoolRelu";
case NNKind::Sum:
    return "Sum";
case NNKind::SumRelu:
    return "SumRelu";
case NNKind::Send:
    return "Send";
case NNKind::Receive:
    return "Receive";
case NNKind::FC:
    return "FC";
case NNKind::GivenTensorFill:
    return "GivenTensorFill";
case NNKind::Concat:
    return "Concat";
case NNKind::Softmax:
    return "Softmax";
case NNKind::ChannelShuffle:
    return "ChannelShuffle";
case NNKind::Add:
    return "Add";
case NNKind::Reshape:
    return "Reshape";
case NNKind::Flatten:
    return "Flatten";
case NNKind::Int8Quantize:
    return "Int8Quantize";
case NNKind::Int8Dequantize:
    return "Int8Dequantize";
case NNKind::Int8AveragePool:
    return "Int8AveragePool";
case NNKind::Int8Conv:
    return "Int8Conv";
case NNKind::Int8ConvTranspose:
    return "Int8ConvTranspose";
case NNKind::Int8FC:
    return "Int8FC";
case NNKind::Int8MaxPool:
    return "Int8MaxPool";
case NNKind::Int8Relu:
    return "Int8Relu";
case NNKind::Int8GivenTensorFill:
    return "Int8GivenTensorFill";
case NNKind::Int8Concat:
    return "Int8Concat";
case NNKind::Int8Softmax:
    return "Int8Softmax";
case NNKind::Int8ChannelShuffle:
    return "Int8ChannelShuffle";
case NNKind::Int8Sum:
    return "Int8Sum";
case NNKind::Int8Add:
    return "Int8Add";
case NNKind::Int8Reshape:
    return "Int8Reshape";
case NNKind::Int8Flatten:
    return "Int8Flatten";
case NNKind::Int8ConvRelu:
    return "Int8ConvRelu";
case NNKind::Int8SumRelu:
    return "Int8SumRelu";
case NNKind::Int8AveragePoolRelu:
    return "Int8AveragePoolRelu";
case NNKind::Int8MaxPoolRelu:
    return "Int8MaxPoolRelu";