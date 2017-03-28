
#import <Foundation/Foundation.h>

#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTEventEmitter.h>
#import <React/RCTBridgeModule.h>
#else
#import "RCTEventEmitter.h"
#import "RCTBridgeModule.h"
#endif

@interface RNNEventEmitter : RCTEventEmitter <RCTBridgeModule>

-(void)sendOnAppLaunched;

-(void)sendContainerStart:(NSString*)containerId;

-(void)sendContainerStop:(NSString*)containerId;

@end
