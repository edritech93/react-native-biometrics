
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNBiometricsSpec.h"

@interface Biometrics : NSObject <NativeBiometricsSpec>
#else
#import <React/RCTBridgeModule.h>

@interface Biometrics : NSObject <RCTBridgeModule>
#endif

@end
