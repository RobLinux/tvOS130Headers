/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class PXTilingController;

@interface PXTilingControllerCompositionInvalidationContext : NSObject {

	id<NSObject> _animationOptions;
	PXTilingController* _originatingTilingController;

}

@property (nonatomic,retain) id<NSObject> animationOptions;                                 //@synthesize animationOptions=_animationOptions - In the implementation block
@property (nonatomic,retain) PXTilingController * originatingTilingController;              //@synthesize originatingTilingController=_originatingTilingController - In the implementation block
+(id)defaultAnimationOptionsForTilingController:(id)arg1 withInvalidationContexts:(id)arg2 ;
-(id)description;
-(id<NSObject>)animationOptions;
-(void)setAnimationOptions:(id<NSObject>)arg1 ;
-(PXTilingController *)originatingTilingController;
-(void)setOriginatingTilingController:(PXTilingController *)arg1 ;
@end

