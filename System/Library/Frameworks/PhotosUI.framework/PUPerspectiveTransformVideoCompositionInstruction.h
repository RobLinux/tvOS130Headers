/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/AVVideoCompositionInstruction.h>

@class NSArray, NSString;

@interface PUPerspectiveTransformVideoCompositionInstruction : NSObject <AVVideoCompositionInstruction> {

	SCD_Struct_PH2 _timeRange;
	SCD_Struct_PU4 _perspectiveTransform;
	CGAffineTransform _preferredTransform;

}

@property (assign,nonatomic) SCD_Struct_PH2 timeRange;                          //@synthesize timeRange=_timeRange - In the implementation block
@property (assign,nonatomic) SCD_Struct_PU4 perspectiveTransform;               //@synthesize perspectiveTransform=_perspectiveTransform - In the implementation block
@property (assign,nonatomic) CGAffineTransform preferredTransform;              //@synthesize preferredTransform=_preferredTransform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL enablePostProcessing; 
@property (nonatomic,readonly) BOOL containsTweening; 
@property (nonatomic,readonly) NSArray * requiredSourceTrackIDs; 
@property (nonatomic,readonly) int passthroughTrackID; 
-(void)setTimeRange:(SCD_Struct_PH2)arg1 ;
-(SCD_Struct_PH2)timeRange;
-(CGAffineTransform)preferredTransform;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(BOOL)enablePostProcessing;
-(BOOL)containsTweening;
-(NSArray *)requiredSourceTrackIDs;
-(int)passthroughTrackID;
-(SCD_Struct_PU4)perspectiveTransform;
-(void)setPerspectiveTransform:(SCD_Struct_PU4)arg1 ;
@end

