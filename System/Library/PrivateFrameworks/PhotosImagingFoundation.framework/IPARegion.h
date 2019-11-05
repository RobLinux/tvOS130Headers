/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/NSCopying.h>
#import <PhotosImagingFoundation/NSMutableCopying.h>

@interface IPARegion : NSObject <NSCopying, NSMutableCopying> {

	Region* _imp;

}
+(id)region;
+(id)regionWithRectArray:(id)arg1 ;
+(id)regionWithRect:(CGRect)arg1 ;
+(id)regionWithRegion:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(BOOL)isEmpty;
-(CGRect)bounds;
-(id)initWithRect:(CGRect)arg1 ;
-(double)area;
-(BOOL)isEqualToRegion:(id)arg1 ;
-(id)initWithRegion:(id)arg1 ;
-(BOOL)intersectsRect:(CGRect)arg1 ;
-(id)initWithRectArray:(id)arg1 ;
-(void)enumerateRects:(/*^block*/id)arg1 ;
-(BOOL)intersectsRegion:(id)arg1 ;
-(BOOL)includesRect:(CGRect)arg1 ;
-(BOOL)includesRegion:(id)arg1 ;
-(id)regionByAddingRect:(CGRect)arg1 ;
-(id)regionByAddingRegion:(id)arg1 ;
-(id)regionByAddingRectArray:(id)arg1 ;
-(id)regionByRemovingRect:(CGRect)arg1 ;
-(id)regionByRemovingRegion:(id)arg1 ;
-(id)regionByRemovingRectArray:(id)arg1 ;
-(id)regionByClippingToRect:(CGRect)arg1 ;
-(id)regionByClippingToRegion:(id)arg1 ;
-(id)regionByClippingToRectArray:(id)arg1 ;
-(id)regionByExcludingRect:(CGRect)arg1 ;
-(id)regionByExcludingRegion:(id)arg1 ;
-(id)regionByScalingBy:(CGPoint)arg1 ;
-(id)regionByTranslatingBy:(CGPoint)arg1 ;
-(id)regionByGrowingBy:(CGPoint)arg1 ;
-(id)regionByGrowingBy:(CGPoint)arg1 inRect:(CGRect)arg2 ;
-(id)regionByShrinkingBy:(CGPoint)arg1 ;
-(id)regionByShrinkingBy:(CGPoint)arg1 inRect:(CGRect)arg2 ;
-(id)regionByRoundingUp;
-(id)regionByRoundingDown;
-(id)regionByApplyingOrientation:(long long)arg1 imageSize:(CGSize)arg2 ;
-(id)regionByApplyingAffineTransform:(CGAffineTransform)arg1 ;
-(id)regionByFlippingInRect:(CGRect)arg1 ;
@end

