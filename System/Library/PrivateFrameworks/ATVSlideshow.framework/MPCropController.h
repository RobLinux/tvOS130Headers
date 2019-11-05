/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ATVSlideshow/ATVSlideshow-Structs.h>
@class MPDocument, NSRecursiveLock;

@interface MPCropController : NSObject {

	id _delegate;
	MPDocument* _authoredDocument;
	NSRecursiveLock* _cropLock;

}
+(id)sharedController;
+(void)releaseSharedController;
-(id)init;
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)cleanup;
-(void)cropSlidesForLayerGroup:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3 ;
-(void)_applyCropToSlidesInEffectContainersWithArguments:(id)arg1 ;
-(void)applyCropToSlidesInEffectContainers:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3 ;
-(void)cropSlidesInDocument:(id)arg1 withOptions:(id)arg2 ;
-(void)applyCropToSlide:(id)arg1 withOptions:(id)arg2 ;
-(void)setupWithDocument:(id)arg1 andOptions:(id)arg2 ;
-(void)batchCrop:(id)arg1 ;
-(void)applyCropToSlide:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3 ;
-(void)applyStationaryCropToSlide:(id)arg1 withOptions:(id)arg2 ;
-(void)applyAnimatedCropToBreakSlide:(id)arg1 withOptions:(id)arg2 ;
-(void)applyAnimatedCropWithROIsToSlide:(id)arg1 withOptions:(id)arg2 ;
-(void)applyMultiFaceAnimatedCropToSlide:(id)arg1 withOptions:(id)arg2 ;
-(void)applyAnimatedCropToSlide:(id)arg1 withOptions:(id)arg2 ;
-(void)applyAnimatedCropToSlide:(id)arg1 withOptions:(id)arg2 centeredAt:(CGPoint)arg3 alwaysZoomIn:(BOOL)arg4 ;
-(CGPoint)checkFarApartROIs:(id)arg1 withImageSize:(CGSize)arg2 visibleAspectRatio:(double)arg3 roiCenter:(CGPoint)arg4 ;
-(double)durationOfSlide:(id)arg1 ;
@end

