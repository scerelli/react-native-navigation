
#import "RNNReactRootViewCreator.h"

#if __has_include(<React/RCTRootView.h>)
#import <React/RCTRootView.h>
#else
#import "RCTRootView.h"
#endif

@interface RNNReactRootView : RCTRootView

@end

@implementation RNNReactRootView

@end

@implementation RNNReactRootViewCreator {
	RCTBridge *_bridge;
}

-(instancetype)initWithBridge:(RCTBridge*)bridge {
	self = [super init];
	
	_bridge = bridge;
	
	return self;
	
}

- (UIView*)createRootView:(NSString*)name rootViewId:(NSString*)rootViewId {
	if (!rootViewId) {
		@throw [NSException exceptionWithName:@"MissingViewId" reason:@"Missing view id" userInfo:nil];
	}
	
	UIView *view = [[RNNReactRootView alloc] initWithBridge:_bridge
										 moduleName:name
								  initialProperties:@{@"id": rootViewId}];
	return view;
}

@end
