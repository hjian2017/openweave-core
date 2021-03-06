/*
 *
 *    Copyright (c) 2013-2017 Nest Labs, Inc.
 *    All rights reserved.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

/**
 *    @file
 *      This file defines utility functions for deriving random integers.
 *
 *  @note These utility functions do not generate cryptographically strong
 *        random number. To get cryptographically strong random data use
 *        nl::Weave::Platform::Security::GetSecureRandomData().
 *
 */

#ifndef RANDUTILS_H_
#define RANDUTILS_H_

namespace nl {
namespace Weave {

/**
 *  This function generates 64-bit unsigned random number.
 *
 * @retval  64-bit unsigned random integer.
 *
 */
extern uint64_t GetRandU64(void);

/**
 *  This function generates 32-bit unsigned random number.
 *
 * @retval  32-bit unsigned random integer.
 *
 */
extern uint32_t GetRandU32(void);

/**
 *  This function generates 16-bit unsigned random number.
 *
 * @retval  16-bit unsigned random integer.
 *
 */
extern uint16_t GetRandU16(void);

/**
 *  This function generates 8-bit unsigned random number.
 *
 * @retval  8-bit unsigned random integer.
 *
 */
extern uint8_t GetRandU8(void);

} // namespace Weave
} // namespace nl

#endif /* RANDUTILS_H_ */
