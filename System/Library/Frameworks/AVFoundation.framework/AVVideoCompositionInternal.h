/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSString, NSArray, AVVideoCompositionCoreAnimationTool;

@interface AVVideoCompositionInternal : NSObject {

	unsigned long long changeSeed;
	NSString* builtInCompositorName;
	Class customCompositorClass;
	SCD_Struct_AV7 frameDuration;
	int sourceTrackIDForFrameTiming;
	CGSize renderSize;
	float renderScale;
	NSString* colorPrimaries;
	NSString* colorYCbCrMatrix;
	NSString* colorTransferFunction;
	NSArray* instructions;
	BOOL auxiliaryTrackLayerSetLast;
	AVVideoCompositionCoreAnimationTool* animationTool;

}
@end

