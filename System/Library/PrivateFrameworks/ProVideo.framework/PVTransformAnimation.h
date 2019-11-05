/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/NSSecureCoding.h>

@class NSArray;

@interface PVTransformAnimation : NSObject <NSSecureCoding> {

	PVTransformAnimationInfo* _liveTransform;
	NSArray* _animationData;
	SCD_Struct_PV26 _presentationTimeRange;

}

@property (nonatomic,readonly) NSArray * animationData;                          //@synthesize animationData=_animationData - In the implementation block
@property (assign,nonatomic) SCD_Struct_PV26 presentationTimeRange;              //@synthesize presentationTimeRange=_presentationTimeRange - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PVTransformAnimationInfo)transformInfoAtTime:(SCD_Struct_PV19)arg1 ;
-(void)_commonInit:(id)arg1 liveTransform:(PVTransformAnimationInfo*)arg2 ;
-(id)initWithAnimation:(id)arg1 simplify:(BOOL)arg2 tolerance:(double)arg3 smoothness:(unsigned)arg4 ;
-(id)animationInfoFromData:(id)arg1 ;
-(id)dataFromAnimationInfo:(id)arg1 ;
-(id)initWithAnimation:(id)arg1 ;
-(id)initWithLiveTransform:(PVTransformAnimationInfo*)arg1 ;
-(PVTransformAnimationInfo)transformInfoAtLocalTime:(SCD_Struct_PV19)arg1 ;
-(NSArray *)animationData;
-(SCD_Struct_PV26)presentationTimeRange;
-(void)setPresentationTimeRange:(SCD_Struct_PV26)arg1 ;
@end

