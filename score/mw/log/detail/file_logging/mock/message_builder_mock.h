/********************************************************************************
 * Copyright (c) 2025 Contributors to the Eclipse Foundation
 *
 * See the NOTICE file(s) distributed with this work for additional
 * information regarding copyright ownership.
 *
 * This program and the accompanying materials are made available under the
 * terms of the Apache License Version 2.0 which is available at
 * https://www.apache.org/licenses/LICENSE-2.0
 *
 * SPDX-License-Identifier: Apache-2.0
 ********************************************************************************/
#ifndef _MW_LOG_DETAIL_MOCK_MESSAGE_BUILDER_H_
#define _MW_LOG_DETAIL_MOCK_MESSAGE_BUILDER_H_

#include "score/mw/log/detail/file_logging/imessage_builder.h"
#include "score/mw/log/detail/log_record.h"

#include <gmock/gmock.h>

namespace score
{
namespace mw
{
namespace log
{
namespace detail
{
namespace mock
{

class MessageBuilderMock : public IMessageBuilder
{
  public:
    MessageBuilderMock() = default;
    ~MessageBuilderMock() = default;

    MOCK_METHOD((score::cpp::optional<score::cpp::span<const std::uint8_t>>), GetNextSpan, (), (noexcept, override));
    MOCK_METHOD(void, SetNextMessage, (LogRecord&), (noexcept, override));
};

}  // namespace mock
}  // namespace detail
}  // namespace log
}  // namespace mw
}  // namespace score

#endif  //  _MW_LOG_DETAIL_MOCK_MESSAGE_BUILDER_H_
