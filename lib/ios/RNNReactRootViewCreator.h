#import <Foundation/Foundation.h>
#import "RNNRootViewCreator.h"

#if __has_include(<React/RCTBridge.h>)
#import <React/RCTBridge.h>
#else
#import <React/RCTBridge.h>
#endif

@interface RNNReactRootViewCreator : NSObject <RNNRootViewCreator>

-(instancetype)initWithBridge:(RCTBridge*)bridge;

@end
