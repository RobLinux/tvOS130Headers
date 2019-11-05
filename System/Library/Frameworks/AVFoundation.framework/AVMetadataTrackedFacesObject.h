/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMetadataObject.h>
#import <AVFoundation/NSCopying.h>

@class AVMetadataTrackedFacesObjectInternal, NSDictionary;

@interface AVMetadataTrackedFacesObject : AVMetadataObject <NSCopying> {

	AVMetadataTrackedFacesObjectInternal* _trackedFacesObjectInternal;

}

@property (readonly) NSDictionary * payload; 
+(id)trackedFacesWithTime:(SCD_Struct_AV7)arg1 faceKitDictionary:(id)arg2 input:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(NSDictionary *)payload;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(CGAffineTransform)arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(double)arg4 ;
-(id)initWithTime:(SCD_Struct_AV7)arg1 faceKitDictionary:(id)arg2 input:(id)arg3 ;
@end

