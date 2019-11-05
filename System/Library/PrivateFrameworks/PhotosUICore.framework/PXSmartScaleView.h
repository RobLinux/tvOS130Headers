/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@interface PXSmartScaleView : UIView {

	CGSize _displaySize;

}

@property (assign) CGSize displaySize;                 //@synthesize displaySize=_displaySize - In the implementation block
@property (readonly) double displayScale; 
-(void)setFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(double)displayScale;
-(void)viewScaleDidChange;
-(CGSize)displaySize;
-(void)setDisplaySize:(CGSize)arg1 ;
@end

