--=========== Copyright © 2017, Planimeter, All rights reserved. =============--
--
-- Purpose:
--
--============================================================================--

local ffi = require( "ffi" )
io.input( "HLLib.h" )
ffi.cdef( io.read( "*all" ) )
return ffi.load( ffi.os == "Windows" and "HLLib" or "hllib" )
