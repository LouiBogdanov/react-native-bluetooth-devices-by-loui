
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNBluetoothDevicesByLouiSpec.h"

@interface BluetoothDevicesByLoui : NSObject <NativeBluetoothDevicesByLouiSpec>
#else
#import <React/RCTBridgeModule.h>

@interface BluetoothDevicesByLoui : NSObject <RCTBridgeModule>
#endif

@end
