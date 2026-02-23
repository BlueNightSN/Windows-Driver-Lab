/*++

Module Name:

    public.h

Abstract:

    This module contains the common declarations shared by driver
    and user applications.

Environment:

    user and kernel

--*/

//
// Define an Interface Guid so that apps can find the device and talk to it.
//

DEFINE_GUID (GUID_DEVINTERFACE_01HelloKMDF,
    0x3c983025,0x2341,0x4142,0x8b,0xe5,0x0e,0xf3,0x8f,0x13,0x9a,0x97);
// {3c983025-2341-4142-8be5-0ef38f139a97}
