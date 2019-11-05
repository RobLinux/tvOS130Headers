/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/_UIFloatingContentView.h>
#import <PhotosUICore/PXAdjustableContentsView.h>

@class NSString;

@interface PXUIFloatingContentView : _UIFloatingContentView <PXAdjustableContentsView> {

	CGRect _contentsRect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGRect contentsRect;                   //@synthesize contentsRect=_contentsRect - In the implementation block
-(CGRect)contentsRect;
-(void)setContentsRect:(CGRect)arg1 ;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
@end

