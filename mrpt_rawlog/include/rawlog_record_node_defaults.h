/***********************************************************************************
 * Revised BSD License *
 * Copyright (c) 2014, Markus Bader <markus.bader@tuwien.ac.at> *
 * All rights reserved. *
 *                                                                                 *
 * Redistribution and use in source and binary forms, with or without *
 * modification, are permitted provided that the following conditions are met: *
 *     * Redistributions of source code must retain the above copyright *
 *       notice, this list of conditions and the following disclaimer. *
 *     * Redistributions in binary form must reproduce the above copyright *
 *       notice, this list of conditions and the following disclaimer in the *
 *       documentation and/or other materials provided with the distribution. *
 *     * Neither the name of the Vienna University of Technology nor the *
 *       names of its contributors may be used to endorse or promote products *
 *       derived from this software without specific prior written permission. *
 *                                                                                 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *AND *
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 **
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE *
 * DISCLAIMED. IN NO EVENT SHALL Markus Bader BE LIABLE FOR ANY *
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES *
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 **
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND *
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT *
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 **
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 **                       *
 ***********************************************************************************/

#ifndef MRPT_RAWLOG_RECORD_NODE_DEFAULTS_H
#define MRPT_RAWLOG_RECORD_NODE_DEFAULTS_H

#define RAWLOG_RECORD_NODE_DEFAULT_RATE 10.0
#define RAWLOG_RECORD_NODE_DEFAULT_PARAMETER_UPDATE_SKIP 1


#define RAWLOG_RECORD_NODE_DEFAULT_BEARING_RANGE_STD_RANGE 0.01    ///< Standard deviation of range
#define RAWLOG_RECORD_NODE_DEFAULT_BEARING_RANGE_STD_YAW   0.01    ///< Standard deviation of yaw
#define RAWLOG_RECORD_NODE_DEFAULT_BEARING_RANGE_STD_PITCH 0.0     ///< Standard deviation of pitch

#endif  // MRPT_RAWLOG_RECORD_NODE_DEFAULTS_H
