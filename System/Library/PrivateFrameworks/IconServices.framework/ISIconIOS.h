/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IconServices/IconServices-Structs.h>
#import <IconServices/ISIcon.h>

@class NSArray, LSResourceProxy;

@interface ISIconIOS : ISIcon {

	NSArray* _decorations;
	LSResourceProxy* _resourceProxy;

}

@property (retain) LSResourceProxy * resourceProxy;              //@synthesize resourceProxy=_resourceProxy - In the implementation block
@property (nonatomic,copy) NSArray * decorations;                //@synthesize decorations=_decorations - In the implementation block
+(id)backgroundQueue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithURL:(id)arg1 ;
-(id)initWithType:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(double)_aspectRatio;
-(LSResourceProxy *)resourceProxy;
-(id)initWithResourceProxy:(id)arg1 ;
-(id)_initTransparent;
-(NSArray *)decorations;
-(void)prepareImagesForImageDescriptors:(id)arg1 ;
-(id)imageForImageDescriptor:(id)arg1 ;
-(id)imageForDescriptor:(id)arg1 ;
-(void)getImageForImageDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(CGImageRef)CGImageForImageDescriptor:(id)arg1 ;
-(void)getCGImageForImageDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareImagesForDescriptors:(id)arg1 ;
-(id)initWithResourceProxy:(id)arg1 decorations:(id)arg2 ;
-(BOOL)isEqualToIcon:(id)arg1 ;
-(int)variantForSize:(CGSize)arg1 scale:(double)arg2 options:(unsigned long long)arg3 ;
-(id)_prepareImageForImageDescriptor:(id)arg1 ;
-(void)setDecorations:(NSArray *)arg1 ;
-(void)setResourceProxy:(LSResourceProxy *)arg1 ;
@end
