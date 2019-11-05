/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IconServices/IconServices-Structs.h>
#import <IconServices/ISScalableCompositorResource.h>
#import <IconServices/CALayerDelegate.h>

@class NSString, ISIconManager, NSArray;

@interface ISIcon : NSObject <ISScalableCompositorResource, CALayerDelegate>

@property (readonly) id<ISIconIdentity> _identity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) ISIconManager * manager; 
@property (nonatomic,readonly) NSArray * decorations; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)applicationIcon;
+(id)genericApplicationIcon;
+(id)genericDocumentIcon;
+(id)transparentIcon;
+(id)layerUpdateQueue;
+(LIIconVariantInfo*)variantInfoForSet:(unsigned long long)arg1 count:(unsigned long long*)arg2 ;
+(int)findVariantFromSet:(unsigned long long)arg1 deviceIdiom:(unsigned long long)arg2 size:(CGSize)arg3 scale:(double)arg4 ;
+(id)sizesFromSet:(unsigned long long)arg1 ;
-(id)_init;
-(ISIconManager *)manager;
-(id<ISIconIdentity>)_identity;
-(void)displayLayer:(id)arg1 ;
-(double)_aspectRatio;
-(id)imageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(unsigned long long)variantOptions;
-(unsigned long long)badgeOptions;
-(NSArray *)decorations;
-(id)iconWithDecorations:(id)arg1 ;
@end

