
#if __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#else
#import <React/RCTBridgeModule.h>
#endif

#import <DTBiOSSDK/DTBiOSSDK.h>

@interface RNAmazonTAMInterstitial : NSObject <RCTBridgeModule, DTBAdCallback>

@end
  