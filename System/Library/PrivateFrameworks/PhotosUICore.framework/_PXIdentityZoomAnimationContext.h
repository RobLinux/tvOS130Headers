/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXZoomAnimationContext.h>

@protocol PXZoomAnimationContext;
@class PXNonuniformTransform, NSString, PXRegionOfInterest;

@interface _PXIdentityZoomAnimationContext : NSObject <PXZoomAnimationContext> {

	double _fromAlpha;
	PXNonuniformTransform* _fromTransform;
	double _toAlpha;
	PXNonuniformTransform* _toTransform;
	id<PXZoomAnimationContext> _context;

}

@property (nonatomic,readonly) id<PXZoomAnimationContext> context;                                             //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long animationType; 
@property (nonatomic,readonly) double animationDuration; 
@property (nonatomic,readonly) double fromAlpha;                                                               //@synthesize fromAlpha=_fromAlpha - In the implementation block
@property (nonatomic,readonly) PXNonuniformTransform * fromTransform;                                          //@synthesize fromTransform=_fromTransform - In the implementation block
@property (nonatomic,readonly) PXRegionOfInterest * fromRegionOfInterest; 
@property (nonatomic,readonly) double toAlpha;                                                                 //@synthesize toAlpha=_toAlpha - In the implementation block
@property (nonatomic,readonly) PXNonuniformTransform * toTransform;                                            //@synthesize toTransform=_toTransform - In the implementation block
@property (nonatomic,readonly) PXRegionOfInterest * toRegionOfInterest; 
@property (getter=isMatchingRegionsOfInterest,nonatomic,readonly) BOOL matchingRegionsOfInterest; 
@property (nonatomic,readonly) BOOL keepsSourceRegionOfInterestContent; 
-(id<PXZoomAnimationContext>)context;
-(id)initWithContext:(id)arg1 ;
-(double)animationDuration;
-(long long)animationType;
-(BOOL)keepsSourceRegionOfInterestContent;
-(long long)willBeginAnimation;
-(void)didEndAnimation:(long long)arg1 ;
-(void)registerCleanupHandler:(/*^block*/id)arg1 ;
-(double)fromAlpha;
-(PXNonuniformTransform *)fromTransform;
-(PXRegionOfInterest *)fromRegionOfInterest;
-(double)toAlpha;
-(PXNonuniformTransform *)toTransform;
-(PXRegionOfInterest *)toRegionOfInterest;
-(BOOL)isMatchingRegionsOfInterest;
@end
